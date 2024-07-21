#pragma once

/*
Copyright (c) 2017 - 2018, Roland Bock
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this
   list of conditions and the following disclaimer in the documentation and/or
   other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <type_traits>

#include <sqlpp11/type_traits.h>
#include <sqlpp11/enable_as.h>

namespace sqlpp
{
  template <typename Select>
  struct exists_expression : public enable_as<exists_expression<Select>>
  {
    constexpr exists_expression(Select s) : _select(std::move(s))
    {
    }
    exists_expression(const exists_expression&) = default;
    exists_expression(exists_expression&&) = default;
    exists_expression& operator=(const exists_expression&) = default;
    exists_expression& operator=(exists_expression&&) = default;
    ~exists_expression() = default;

    Select _select;
  };

  template <typename Select>
  using check_exists_arg = std::enable_if_t<is_statement_t<Select>::value and has_result_row_t<Select>::value>;

  template <typename Select>
  struct value_type_of<exists_expression<Select>>
  {
    using type = boolean;
  };

  template <typename Select>
  struct nodes_of<exists_expression<Select>>
  {
    using type = detail::type_vector<Select>;
  };

  template <typename Context, typename Select>
  auto serialize(Context& context, const exists_expression<Select>& t) -> Context&
  {
    context << "EXISTS(";
    serialize(context, t._select);
    context << ")";
    return context;
  }

  template <typename Select, typename = check_exists_arg<Select>>
  constexpr auto exists(Select s) -> exists_expression<Select>
  {
    return exists_expression<Select>{std::move(s)};
  }

}  // namespace sqlpp