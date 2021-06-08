//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes MQL-compatible predefined structs and variables.
 */

#pragma once

// Includes.
#include "check.h"
#include "../../classes/SymbolInfo.define.h"

/**
 * Returns number of decimal places.
 */
struct DigitsCurrent {
  operator int() { return Digits(); }
} _Digits;

/**
 * Returns the last error code.
 */
struct LastError {
  operator int() { return GetLastError(); }
} _LastError;

/**
 * Returns size of the current symbol point in the quote currency.
 */
struct PointCurrent {
  operator double() { return Point(); }
} _Point;

/**
 * Returns symbol of the current chart.
 */
struct SymbolCurrent {
  operator string() { return Symbol(); }
} _Symbol;

struct _PeriodGetter {
  operator ENUM_TIMEFRAMES() { return Period(); }
} _Period;
