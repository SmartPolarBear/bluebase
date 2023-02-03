//
// Created by bear on 10/10/2022.
//

#pragma once

#include <expected>
#include <cstdint>

namespace bluebase
{
using error_code = uint32_t;

template<typename T>
using expected = std::expected<T, error_code>;

enum error_codes : error_code
{
  ERROR_SUCCESS,
};
}