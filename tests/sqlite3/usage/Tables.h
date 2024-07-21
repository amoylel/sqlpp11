#pragma once

// generated by ./scripts/ddl2cpp -auto-id -with-table-creation-helper tests/sqlite3/usage/Tables.sql tests/sqlite3/usage/Tables test

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace test
{
  template<typename Db>
  void createTabSample(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS tab_sample)+++");
    db.execute(R"+++(CREATE TABLE tab_sample (
  id INTEGER PRIMARY KEY,
  alpha bigint(20) DEFAULT NULL,
  beta varchar(255) DEFAULT NULL,
  gamma boolean
))+++");
  }

  namespace TabSample_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct Alpha
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "alpha";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T alpha;
            T& operator()() { return alpha; }
            const T& operator()() const { return alpha; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct Beta
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "beta";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T beta;
            T& operator()() { return beta; }
            const T& operator()() const { return beta; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Gamma
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "gamma";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T gamma;
            T& operator()() { return gamma; }
            const T& operator()() const { return gamma; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::can_be_null>;
    };
  } // namespace TabSample_

  struct TabSample: sqlpp::table_t<TabSample,
               TabSample_::Id,
               TabSample_::Alpha,
               TabSample_::Beta,
               TabSample_::Gamma>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_sample";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabSample;
        T& operator()() { return tabSample; }
        const T& operator()() const { return tabSample; }
      };
    };
  };
  template<typename Db>
  void createTabFoo(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS tab_foo)+++");
    db.execute(R"+++(CREATE TABLE tab_foo (
  omega bigint(20) DEFAULT NULL
))+++");
  }

  namespace TabFoo_
  {
    struct Omega
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "omega";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T omega;
            T& operator()() { return omega; }
            const T& operator()() const { return omega; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
  } // namespace TabFoo_

  struct TabFoo: sqlpp::table_t<TabFoo,
               TabFoo_::Omega>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_foo";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabFoo;
        T& operator()() { return tabFoo; }
        const T& operator()() const { return tabFoo; }
      };
    };
  };
  template<typename Db>
  void createIntegralSample(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS integral_sample)+++");
    db.execute(R"+++(CREATE TABLE integral_sample (
  signed_value INTEGER,
  unsigned_value INTEGER
))+++");
  }

  namespace IntegralSample_
  {
    struct SignedValue
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "signed_value";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T signedValue;
            T& operator()() { return signedValue; }
            const T& operator()() const { return signedValue; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct UnsignedValue
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "unsigned_value";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T unsignedValue;
            T& operator()() { return unsignedValue; }
            const T& operator()() const { return unsignedValue; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
  } // namespace IntegralSample_

  struct IntegralSample: sqlpp::table_t<IntegralSample,
               IntegralSample_::SignedValue,
               IntegralSample_::UnsignedValue>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "integral_sample";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T integralSample;
        T& operator()() { return integralSample; }
        const T& operator()() const { return integralSample; }
      };
    };
  };
  template<typename Db>
  void createBlobSample(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS blob_sample)+++");
    db.execute(R"+++(CREATE TABLE blob_sample (
  id INTEGER PRIMARY KEY,
  data blob
))+++");
  }

  namespace BlobSample_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct Data
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "data";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T data;
            T& operator()() { return data; }
            const T& operator()() const { return data; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
  } // namespace BlobSample_

  struct BlobSample: sqlpp::table_t<BlobSample,
               BlobSample_::Id,
               BlobSample_::Data>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "blob_sample";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T blobSample;
        T& operator()() { return blobSample; }
        const T& operator()() const { return blobSample; }
      };
    };
  };
  template<typename Db>
  void createFpSample(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS fp_sample)+++");
    db.execute(R"+++(CREATE TABLE fp_sample (
  id INTEGER PRIMARY KEY,
  fp DOUBLE
))+++");
  }

  namespace FpSample_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct Fp
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fp";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fp;
            T& operator()() { return fp; }
            const T& operator()() const { return fp; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::can_be_null>;
    };
  } // namespace FpSample_

  struct FpSample: sqlpp::table_t<FpSample,
               FpSample_::Id,
               FpSample_::Fp>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "fp_sample";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T fpSample;
        T& operator()() { return fpSample; }
        const T& operator()() const { return fpSample; }
      };
    };
  };
  template<typename Db>
  void createTabDateTime(Db& db)
  {
    db.execute(R"+++(DROP TABLE IF EXISTS tab_date_time)+++");
    db.execute(R"+++(CREATE TABLE tab_date_time
(
  id INTEGER PRIMARY KEY,
  day_point_n date,
  time_point_n datetime
))+++");
  }

  namespace TabDateTime_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update>;
    };
    struct DayPointN
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "day_point_n";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dayPointN;
            T& operator()() { return dayPointN; }
            const T& operator()() const { return dayPointN; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::day_point, sqlpp::tag::can_be_null>;
    };
    struct TimePointN
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time_point_n";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timePointN;
            T& operator()() { return timePointN; }
            const T& operator()() const { return timePointN; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
  } // namespace TabDateTime_

  struct TabDateTime: sqlpp::table_t<TabDateTime,
               TabDateTime_::Id,
               TabDateTime_::DayPointN,
               TabDateTime_::TimePointN>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_date_time";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabDateTime;
        T& operator()() { return tabDateTime; }
        const T& operator()() const { return tabDateTime; }
      };
    };
  };
} // namespace test