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

// Polluting std::string everywhere.
// We will probably want to make our own class to support utf8 strings (splitting, getting given character, etc.).
using std::string;

#define PrintFormat printf

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

