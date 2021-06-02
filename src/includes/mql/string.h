//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to strings.
 */

#pragma once

// Includes standard C++ libraries.
#include <string>

using std::string;

#define PrintFormat printf

#ifdef __MQL__
#define C_STR(S) S
#else
#define C_STR(S) cstring_from(S)

const char* cstring_from(const std::string& _value) { return _value.c_str(); }
#endif

/**
 * Returns the length of the string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringlen
 */
int StringLen(string string_value) { return 0; }

/**
 * Extracts a substring from a text string starting from the specified position.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsubstr
 */
string StringSubstr(string string_value, int start_pos, int length = -1) { return ""; }

/**
 * Returns value of a symbol, located in the specified position of a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringgetcharacter
 */
unsigned short StringGetCharacter(const string& _string, int _position) { return _string[_position]; }

template <typename First, typename... Args>
void Print(First arg, const Args&... args) {
  for (auto& arg : args)
    std::cout << arg << " ";
  std::cout << "\n";
}

template <typename First, typename... Args>
void Alert(First arg, const Args&... args) {
  std::cout << "Alert: ";
  for (auto& arg : args) std::cout << arg << " ";
  std::cout << "\n";
}

/**
 * The function converts string containing a symbol representation of number into number of double type.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/stringtodouble
 */
double StringToDouble(string value  // string
) {
  return std::stod(value);
}

/**
 * Converting numeric value into text string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/doubletostring
 */
string DoubleToString(double value,   // number
                      int digits = 8  // number of digits after decimal point
) {
  return std::to_string(value).substr(0, digits);
}

