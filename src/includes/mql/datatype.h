//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible data types.
 */

#pragma once

#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <locale>

using std::string;
typedef unsigned int uint;
typedef time_t datetime;
typedef unsigned long ulong;
typedef unsigned short ushort;

#ifdef __cplusplus
#define REF(X) (&X)
#define ARRAY_REF(T, N) array<T>& N
#else
#define REF(X) &X
#define ARRAY_REF(T, N) REF(T) N
#endif

#ifdef __MQL__
#define THIS_PTR (&this)
#define THIS_REF (this)
#else
#define THIS_PTR (this)
#define THIS_REF (*this)
#endif

unsigned int GetPointer(void* _ptr) { return (unsigned int)_ptr; }

datetime StringToTime(const string& value) {
  std::tm t;
  std::istringstream ss(value);

  ss >> std::get_time(&t, "%Y-%m-%d %H:%M:%S");

  if (ss.fail()) {
    throw std::runtime_error{"failed to parse time string"};
  }
  return mktime(&t);
}

#ifndef __MQL__
#define typename(T) typeid(T).name()
#endif

class color {

};


