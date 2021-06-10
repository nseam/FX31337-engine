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

#include <iomanip>
#include <locale>
#include <sstream>
#include <vector>

typedef unsigned int uint;

typedef unsigned long ulong;
typedef unsigned short ushort;

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

template <typename T>
class _cpp_array;

// Defines.
#define WHOLE_ARRAY -1  // For processing the entire array.
 
#ifdef __cplusplus
#define REF(X) (&X)
#else
#define REF(X) &X
#endif

#ifdef __MQL__
#define THIS_PTR (&this)
#define THIS_REF (this)
#define PTR_ATTRIB(O, A) O . A
#define PTR_TO_REF(PTR) PTR
#else
#define THIS_PTR (this)
#define THIS_REF (*this)
#define PTR_ATTRIB(O, A) O -> A
#define PTR_TO_REF(PTR) (*PTR)
#endif

unsigned int GetPointer(void* _ptr) { return (unsigned int)_ptr; }

#ifndef __MQL__
#define typename(T) typeid(T).name()
#endif

/**
 * MQL's "color" type.
 */
class color {
  unsigned int value;

 public:
  color(unsigned int _color) { value = _color; }
  color& operator=(unsigned int _color) {
    value = _color;
    return *this;
  }
  operator unsigned int() const { return value; }
};
