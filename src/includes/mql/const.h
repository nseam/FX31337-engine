//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible constants
 */

// Empty value in an indicator buffer.
#define EMPTY_VALUE DBL_MAX

// Incorrect handle.
#define INVALID_HANDLE -1
#include <string>

// Converter of WRONG_VALUE into expected type. e.g., "int x = WRONG_VALUE" will end up with "x = -1".
struct _WRONG_VALUE {
  template <typename T>
  operator T() {
    return (T)-1;
  }
} WRONG_VALUE;


// Converter of NULL_VALUE into expected type. e.g., "int x = NULL_VALUE" will end up with "x = 0".
struct _NULL_VALUE {
  template <typename T>
  explicit operator T() const {
    return (T)0;
  }
} NULL_VALUE;

template<>
inline _NULL_VALUE::operator const std::string() const { return ""; }
