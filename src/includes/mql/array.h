//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible array functions.
 *
 * @docs
 * - https://www.mql5.com/en/docs/array
 */

#pragma once

// Defines.
#define WHOLE_ARRAY -1  // For processing the entire array.

// Local includes.
#include "datatype.h"
#include "predefined.h"
#include "string.h"

#ifdef __cplusplus
#define ARRAY_REF(T, N) array<T>& N
#else
#define ARRAY_REF(T, N) REF(T) N
#endif

#ifdef __MQL__
#define ARRAY(T, N) T N[];
#else
template <typename T>
class array {
  std::vector<T> m_data;
  bool m_isSeries = false;

 public:
  operator T*() { return &m_data.first(); }
  T& operator[](int index) { return m_data[index]; }
  int size() const { return m_data.size(); }
  int isSeries() const { return m_isSeries; }
};

#define ARRAY(T, N) ::array<T> N
#endif

template <typename T, int X>
constexpr int ArraySize(const T (&_array)[X]) {
  return X;
}

template <typename T>
int ArraySize(const ARRAY_REF(T, _array)) {
  return _array.size();
}

#include "../../classes/Array.mqh"

template<typename T>
static int ArrayMaximum(const ARRAY_REF(T, _array), int _start = 0, unsigned int _count = WHOLE_ARRAY) {
  return Array::ArrayMaximum(_array, _start, count);
}

template <typename T>
static int ArrayMinimum(const ARRAY_REF(T, _array), int _start = 0, unsigned int _count = WHOLE_ARRAY) {
  return Array::ArrayMinimum(_array, _start, count);
}
