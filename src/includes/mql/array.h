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

// Includes standard C++ libraries.
#include <vector>

/**
 * Reference to the array.
 *
 * @usage
 *   ARRAY_REF(<type of the array items>, <name of the variable>)
 */
#define ARRAY_REF(T, N) _cpp_array<T>& N

/**
 * Array definition.
 *
 * @usage
 *   ARRAY(<type of the array items>, <name of the variable>)
 */
#define ARRAY(T, N) ::_cpp_array<T> N

// Defines.
#define WHOLE_ARRAY -1  // For processing the entire array.

#ifndef __MQL__

/**
 * Custom array template to be used as a replacement of dynamic array in MQL.
 */
template <typename T>
class _cpp_array {
  // List of items.
  std::vector<T> m_data;

  // IsSeries flag.
  bool m_isSeries = false;

 public:

  _cpp_array() {
  }

  template<int size>
  _cpp_array(const T REF(_arr)[size]) {
    for (const auto& _item : _arr) m_data.push_back(_item);
  }

  /**
   * Returns pointer of first element (provides a way to iterate over array elements).
   */
  //operator T*() { return &m_data.first(); }

  /**
   * Index operator. Takes care of IsSeries flag.
   */
  T& operator[](int index) { return m_data[m_isSeries ? (size() - index - 1) : index]; }

  /**
   * Index operator. Takes care of IsSeries flag.
   */
  const T& operator[](int index) const { return m_data[m_isSeries ? (size() - index - 1) : index]; }

  /**
   * Returns number of elements in the array.
   */
  int size() const { return m_data.size(); }

  /**
   * Checks whether 
   */
  int getIsSeries() const { return m_isSeries; }

  /**
   * Sets IsSeries flag for an array.
   * Array indexing is from 0 without IsSeries flag or from last-element
   * with IsSeries flag.
   */
  void setIsSeries(bool _isSeries) { m_isSeries = _isSeries; }
};

#endif

/**
 * The function returns the number of elements of a selected array.
 *
 * @docs
 * - https://www.mql5.com/en/docs/array/arraysize
 */
template <typename T>
int ArraySize(const ARRAY_REF(T, _array)) {
  return _array.size();
}

/**
 * Returns size of the array.
 */
template <typename T, int size>
constexpr int ArraySize(const T REF(_array)[size]) {
  return sizeof(_array) / sizeof(*_array);
}

/**
 * The function sets a new size for the first dimension
 *
 * @docs
 * - https://www.mql5.com/en/docs/array/arrayresize
 */
template <typename T>
int ArrayResize(ARRAY_REF(T, _array), int _new_size, int _reserve_size = 0) {
  throw NotImplementedException();
}

/**
 * The function sets the AS_SERIES flag to a selected object of a dynamic array, and elements will be indexed like
 * in timeseries.
 *
 * @docs
 * - https://www.mql5.com/en/docs/array/arraysetasseries
 */
template <typename T>
bool ArraySetAsSeries(ARRAY_REF(T, _array), bool _flag) {
  _array.setIsSeries(_flag);
}

#include "../../classes/Array.mqh"

/**
 * Searches for the largest element in the first dimension of a multidimensional numeric array.
 *
 * @docs
 * - https://www.mql5.com/en/docs/array/arraymaximum
 */
template <typename T>
int ArrayMaximum(const ARRAY_REF(T, _array), int _start = 0, unsigned int _count = WHOLE_ARRAY) {
  return Array::ArrayMaximum(_array, _start, _count);
}

/**
 * Searches for the lowest element in the first dimension of a multidimensional numeric array.
 *
 * @docs
 * - https://www.mql5.com/en/docs/array/arrayminimum
 */
template <typename T>
int ArrayMinimum(const ARRAY_REF(T, _array), int _start = 0, unsigned int _count = WHOLE_ARRAY) {
  return Array::ArrayMinimum(_array, _start, _count);
}

/**
 * Gets substrings by a specified separator from the specified string, returns the number of substrings obtained.
 *
 * @docs
 * - https://www.mql5.com/en/docs/strings/stringsplit
 */
int StringSplit(const string& _string, unsigned short _separator, ARRAY_REF(string, _output)) {
  throw NotImplementedException();
}
