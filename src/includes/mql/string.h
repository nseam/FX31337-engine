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

#include "datatype.h"

using std::string;

#define PrintFormat printf

#ifdef __MQL__
#define C_STR(S) S
#else
#define C_STR(S) cstring_from(S)

const char* cstring_from(const std::string& _value) { return _value.c_str(); }
#endif

/**
 * The function adds a substring to the end of a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringadd
 */
bool StringAdd(string& string_var,   // string, to which we add
               string add_substring  // string, which is added
) {
  throw NotImplementedException();
}

/**
 * The function returns the size of buffer allocated for the string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringbufferlen
 */
int StringBufferLen(string string_var  // string
) {
  throw NotImplementedException();
}

/**
 * The function compares two strings and returns the comparison result in form of an integer.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringcompare
 */
int StringCompare(const string& string1,      // the first string in the comparison
                  const string& string2,      // the second string in the comparison
                  bool case_sensitive = true  // case sensitivity mode selection for the comparison
) {
  throw NotImplementedException();
}

/**
 * The function forms a string of passed parameters and returns the size of the formed string. Parameters can be of any type. Number of parameters can't be less than 2 or more than 64.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringconcatenate
 */
int StringConcatenate(string& string_var,       // string to form
                      const string& argument1,  // first parameter
                      const string& argument2   // second parameter
) {
  throw NotImplementedException();
}

/**
 * It fills out a selected string by specified symbols.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringfill
 */
bool StringFill(string& string_var,       // string to fill
                unsigned short character  // symbol that will fill the string
) {
  throw NotImplementedException();
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

/**
 * Returns value of a symbol, located in the specified position of a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringgetcharacter
 */
unsigned short StringGetCharacter(const string& _string, int _position) { return _string[_position]; }

/**
 * Initializes a string by specified symbols and provides the specified string size.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringinit
 */
bool StringInit(string& string_var,           // string to initialize
                int new_len = 0,              // required string length after initialization
                unsigned short character = 0  // symbol, by which the string will be filled
) {
  throw NotImplementedException();
}

/**
 * Returns the length of the string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringlen
 */
int StringLen(string string_value) { return string_value.size(); }

/**
 * Sets a specified length (in characters) for a string.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsetlength
 */
bool StringSetLength(string& string_var,      // string
                     unsigned int new_length  // new string length
) {
  throw NotImplementedException();
}

/**
 * It replaces all the found substrings of a string by a set sequence of symbols.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringreplace
 */
int StringReplace(string& str,               // the string in which substrings will be replaced
                  const string& find,        // the searched substring
                  const string& replacement  // the substring that will be inserted to the found positions
) {
  throw NotImplementedException();
}

/**
 * Reserves the buffer of a specified size for a string in memory.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringreserve
 */
bool StringReserve(string& string_var,        // string
                   unsigned int new_capacity  // buffer size for storing a string
) {
  throw NotImplementedException();
}

/**
 * Returns copy of a string with a changed character in a specified position.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsetcharacter
 */
bool StringSetCharacter(string& string_var,       // string
                        int pos,                  // position
                        unsigned short character  // character
) {
  throw NotImplementedException();
}

/**
 * Extracts a substring from a text string starting from the specified position.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsubstr
 */
string StringSubstr(string string_value, int start_pos, int length = -1) { throw NotImplementedException(); }

/**
 * Transforms all symbols of a selected string into lowercase.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringtolower
 */
bool StringToLower(string& string_var  // string to process
) {
  throw NotImplementedException();
}

/**
 * Transforms all symbols of a selected string into capitals.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringtoupper
 */
bool StringToUpper(string& string_var  // string to process
) {
  throw NotImplementedException();
}

/**
 * The function cuts line feed characters, spaces and tabs in the left part of the string till the first meaningful symbol. The string is modified at place.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringtrimleft
 */
int StringTrimLeft(string& string_var  // string to cut
) {
  throw NotImplementedException();
}

/**
 * The function cuts line feed characters, spaces and tabs in the right part of the string after the last meaningful symbol. The string is modified at place.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringtrimright
 */
int StringTrimRight(string& string_var  // string to cut
) {
  throw NotImplementedException();
}

/**
 * Gets substrings by a specified separator from the specified string, returns the number of substrings obtained.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsplit
 */
int StringSplit(const string& string_value,      // A string to search in
                const unsigned short separator,  // A separator using which substrings will be searched
                ARRAY_REF(string, result)        // An array passed by reference to get the found substrings
) {
  throw NotImplementedException();
}

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
