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

// Local includes.
#include "datatype.h"
//#include "enum.h"
#include "../../classes/DateTime.enum.h"

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
double NormalizeDouble(double _value, int _digits) { throw NotImplementedException(); }

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
