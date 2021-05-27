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

/**
 * Converts string into the number.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/timetostring
 */
long StringToInteger(std::string value) { return WRONG_VALUE; }

/**
 * Converts a value containing time in seconds.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/timetostring
 */
std::string TimeToString(datetime value, int mode = TIME_DATE | TIME_MINUTES) { return ""; }

int _LastError = 0;

void ResetLastError() { _LastError = 0; }
int GetLastError() { return _LastError; }
void SetUserError(int _code) { _LastError = ERR_USER_ERROR_FIRST + _code; }

string EnumToString(int _value) {
  std::stringstream ss;
  ss << _value;
  return ss.str();
}
