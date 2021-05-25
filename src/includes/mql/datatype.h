//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible data types.
 */

using std::string;
typedef unsigned int uint;
typedef unsigned long datetime;
typedef unsigned long ulong;
typedef unsigned short ushort;
#define NULL null

#ifdef __cplusplus
  #define REF(X) (&X)
#else
  #define REF(X) &X
#endif
