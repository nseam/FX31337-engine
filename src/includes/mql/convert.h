//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible conversion functions.
 */

#pragma once

// Includes standard C++ libraries.
#include <stdarg.h>  // For va_start, etc.
#include <memory>  // For std::unique_ptr

// Local includes.
#include "datatype.h"

#include "../../classes/DateTime.enum.h"
#include "enum.h"

/**
 * Converts value of integer type into a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/integertostring
 */
string IntegerToString(long number, int str_len = 0, unsigned short fill_symbol = ' ') { return ""; }

/**
 * Rounding floating point number to a specified accuracy.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/normalizedouble
 */
double NormalizeDouble(double _value, int _digits) { throw new NotImplementedException(); }

/**
 * Returns formatted string
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/stringformat
 */
template <typename... Args>
std::string StringFormat(const std::string& format, Args... args) {
  size_t size = snprintf(nullptr, 0, format.c_str(), args...) + 1;  // Extra space for '\0'
  if (size <= 0) {
    throw std::runtime_error("Error during formatting.");
  }
  std::unique_ptr<char[]> buf(new char[size]);
  snprintf(buf.get(), size, format.c_str(), args...);
  return std::string(buf.get(), buf.get() + size - 1);  // We don't want the '\0' inside
}

// Converter of WRONG_VALUE into expected type. e.g., "int x = WRONG_VALUE" will end up with "x = -1".
struct _WRONG_VALUE {
  template<typename T>
  operator T() { return (T)-1; }
} WRONG_VALUE;

/**
 * Converts string into the number.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/timetostring
 */
long StringToInteger(std::string value) { return WRONG_VALUE; }

/**
 * It converts the symbol code (unicode) into one-symbol string and returns resulting string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/shorttostring
 */
string ShortToString(ushort symbol_code  // symbol
) {
  throw NotImplementedException();
}

/**
 * Converts a value containing time in seconds.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/timetostring
 */
string TimeToString(datetime value, int mode = TIME_DATE | TIME_MINUTES) { return ""; }

/**
 * Converting an enumeration value of any type to a text form.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/enumtostring
 */
string EnumToString(int _value) {
  std::stringstream ss;
  // We really don't want to mess with type reflection here (if possible at all). So we are outputting the input integer.
  ss << _value;
  return ss.str();
}
