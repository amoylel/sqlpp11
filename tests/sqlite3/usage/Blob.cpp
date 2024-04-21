#include "BlobSample.h"
#include <sqlpp11/sqlite3/connection.h>
#include <sqlpp11/sqlpp11.h>

#ifdef SQLPP_USE_SQLCIPHER
#include <sqlcipher/sqlite3.h>
#else
#include <sqlite3.h>
#endif
#include <functional>
#include <iostream>
#include <random>

namespace sql = sqlpp::sqlite3;
const auto tab = BlobSample{};

/*
 * max default blob/text is 1,000,000,000
 * But 999,999,993 is the biggest one SQLITE will accept
 *  without throwing SQLITE_TOOBIG
 * But it takes too long (over 5s) to generate and check
 */
constexpr size_t blob_size = 1000 * 1000ul;
constexpr size_t blob_small_size = 999;

void verify_blob(sql::connection& db, const std::vector<uint8_t>& expected, uint64_t id)
{
  auto result = db(select(tab.data).from(tab).where(tab.id == id));
  const auto& result_row = result.front();
  if (!result_row.data)
    throw  std::runtime_error("blob data is unpexpectedly NULL for id " + std::to_string(id));
  const auto received = *result_row.data;

  if (expected.size() != received.size())
  {
    std::cerr << "Size mismatch" << std::endl;

    throw std::runtime_error("Size mismatch " + std::to_string(expected.size()) +
                             " != " + std::to_string(received.size()));
  }
  std::cerr << "Verifying content" << std::endl;
  for (size_t i = 0; i < expected.size(); i++)
  {
    if (expected[i] != received[i])
    {
      std::cerr << "expected[" << i << "] " << static_cast<int>(expected[i]) << " != received " << static_cast<int>(received[i])
                << std::endl;
      throw std::runtime_error("Content mismatch");
    }
  }
}

int Blob(int, char*[])
{
  sql::connection_config config;
  config.path_to_database = ":memory:";
  config.flags = SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE;
  config.debug = true;

  sql::connection db(config);
  db.execute(R"(CREATE TABLE blob_sample (
             id INTEGER PRIMARY KEY,
             data blob
           ))");
  std::cerr << "Generating data " << blob_size << std::endl;
  std::vector<uint8_t> data(blob_size);
  std::uniform_int_distribution<unsigned short> distribution(0, 255);
  std::mt19937 engine;
  auto generator = std::bind(distribution, engine);
  std::generate_n(data.begin(), blob_size, generator);

  std::vector<uint8_t> data_smaller(blob_small_size);
  std::generate_n(data_smaller.begin(), blob_small_size, generator);

  // If we use the bigger blob it will trigger SQLITE_TOOBIG for the query
  auto id = db(insert_into(tab).set(tab.data = data_smaller));

  auto prepared_insert = db.prepare(insert_into(tab).set(tab.data = parameter(tab.data)));
  prepared_insert.params.data = data;
  const auto prep_id = db(prepared_insert);
  prepared_insert.params.data.set_null();
  const auto null_id = db(prepared_insert);

  verify_blob(db, data_smaller, id);
  verify_blob(db, data, prep_id);
  {
    auto result = db(select(tab.data).from(tab).where(tab.id == null_id));
    const auto& result_row = result.front();
    std::cerr << "Null blob is_null:\t" << std::boolalpha << (result_row.data == sqlpp::nullopt) << std::endl;
  }
  return 0;
}
