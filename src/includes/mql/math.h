//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to math.
 */

#pragma once

// Includes standard C++ library for non-MQL code.
//#include <bits/stdc++.h>  // GNU GCC extension.
#include <cfloat>
#include <cmath>
using namespace std;

/**
 * The function returns the absolute value (modulus) of the specified numeric value.
 *
 * @docs
 * - https://www.mql5.com/en/docs/math/mathabs
 */
double MathAbs(double value) { return ::abs(value); }

double fabs(double value) { return MathAbs(value); }
