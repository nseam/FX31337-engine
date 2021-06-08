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
#include <iostream>

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

void Print() {
}

template <typename Head, typename... Tail>
void Print(Head&& h, Tail&&... t) {
  std::cout << h << " ";
  Print(t...);
}

template <typename Head, typename... Tail>
void Alert(Head h, Tail... t) {
  std::cout << "Alert: " << h << " ";
  Print(t...);
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

/**
 * Converting a symbol code into a one-character string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/chartostring
 */
string CharToString(unsigned char char_code  // numeric code of symbol
) {
  throw NotImplementedException();
}

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
 * Search for a substring in a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringfind
 */
int StringFind(string string_value,     // string in which search is made
               string match_substring,  // what is searched
               int start_pos = 0        // from what position search starts
) {
  throw NotImplementedException();
}
