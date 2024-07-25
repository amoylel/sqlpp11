#pragma once

// generated by ./scripts/ddl2cpp -auto-id tests/core/usage/sample.sql tests/core/usage/Sample test

#include <sqlpp11/table.h>
#include <sqlpp11/table_columns.h>
#include <sqlpp11/type_traits.h>
#include <sqlpp11/char_sequence.h>

namespace test
{
  struct TabFoo_ : public ::sqlpp::name_tag_base
  {
    struct Id : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using value_type = ::sqlpp::integral;
      using has_default = std::true_type;
    };
    struct TextNnD : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "text_nn_d";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T textNnD;
            T& operator()() { return textNnD; }
            const T& operator()() const { return textNnD; }
          };
      };
      using value_type = ::sqlpp::text;
      using has_default = std::true_type;
    };
    struct IntN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "int_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T intN;
            T& operator()() { return intN; }
            const T& operator()() const { return intN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::integral>;
      using has_default = std::true_type;
    };
    struct DoubleN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "double_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T doubleN;
            T& operator()() { return doubleN; }
            const T& operator()() const { return doubleN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::floating_point>;
      using has_default = std::true_type;
    };
    struct UIntN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "u_int_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T uIntN;
            T& operator()() { return uIntN; }
            const T& operator()() const { return uIntN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::integral>;
      using has_default = std::true_type;
    };
    struct BlobN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "blob_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T blobN;
            T& operator()() { return blobN; }
            const T& operator()() const { return blobN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::blob>;
      using has_default = std::true_type;
    };
    struct BoolN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "bool_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T boolN;
            T& operator()() { return boolN; }
            const T& operator()() const { return boolN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::boolean>;
      using has_default = std::true_type;
    };
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_foo";
      using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabFoo;
        T& operator()() { return tabFoo; }
        const T& operator()() const { return tabFoo; }
      };
    };
    template<typename T>
    using _table_columns = sqlpp::table_columns<T,
               Id,
               TextNnD,
               IntN,
               DoubleN,
               UIntN,
               BlobN,
               BoolN>;
    using _required_insert_columns = sqlpp::detail::type_set<>;
  };
  using TabFoo = ::sqlpp::table_t<TabFoo_>;

  struct TabBar_ : public ::sqlpp::name_tag_base
  {
    struct Id : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using value_type = ::sqlpp::integral;
      using has_default = std::true_type;
    };
    struct TextN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "text_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T textN;
            T& operator()() { return textN; }
            const T& operator()() const { return textN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::text>;
      using has_default = std::true_type;
    };
    struct BoolNn : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "bool_nn";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T boolNn;
            T& operator()() { return boolNn; }
            const T& operator()() const { return boolNn; }
          };
      };
      using value_type = ::sqlpp::boolean;
      using has_default = std::false_type;
    };
    struct IntN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "int_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T intN;
            T& operator()() { return intN; }
            const T& operator()() const { return intN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::integral>;
      using has_default = std::true_type;
    };
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_bar";
      using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabBar;
        T& operator()() { return tabBar; }
        const T& operator()() const { return tabBar; }
      };
    };
    template<typename T>
    using _table_columns = sqlpp::table_columns<T,
               Id,
               TextN,
               BoolNn,
               IntN>;
    using _required_insert_columns = sqlpp::detail::type_set<
               sqlpp::column_t<TabBar_, BoolNn>>;
  };
  using TabBar = ::sqlpp::table_t<TabBar_>;

  struct TabDateTime_ : public ::sqlpp::name_tag_base
  {
    struct Id : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using value_type = ::sqlpp::integral;
      using has_default = std::true_type;
    };
    struct DayPointN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "day_point_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dayPointN;
            T& operator()() { return dayPointN; }
            const T& operator()() const { return dayPointN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::day_point>;
      using has_default = std::true_type;
    };
    struct TimePointN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time_point_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timePointN;
            T& operator()() { return timePointN; }
            const T& operator()() const { return timePointN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::time_point>;
      using has_default = std::true_type;
    };
    struct TimeOfDayN : public ::sqlpp::name_tag_base
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "time_of_day_n";
        using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timeOfDayN;
            T& operator()() { return timeOfDayN; }
            const T& operator()() const { return timeOfDayN; }
          };
      };
      using value_type = ::sqlpp::compat::optional<::sqlpp::time_of_day>;
      using has_default = std::true_type;
    };
    struct _alias_t
    {
      static constexpr const char _literal[] =  "tab_date_time";
      using _name_t = ::sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T tabDateTime;
        T& operator()() { return tabDateTime; }
        const T& operator()() const { return tabDateTime; }
      };
    };
    template<typename T>
    using _table_columns = sqlpp::table_columns<T,
               Id,
               DayPointN,
               TimePointN,
               TimeOfDayN>;
    using _required_insert_columns = sqlpp::detail::type_set<>;
  };
  using TabDateTime = ::sqlpp::table_t<TabDateTime_>;

} // namespace test
