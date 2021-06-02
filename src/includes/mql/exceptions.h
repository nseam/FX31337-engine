//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes C++ - only exceptions.
 */

#pragma once

#include <exception>

struct NotImplementedException : public std::exception {
  const char* what() const throw() { return "Feature is not yet implemented!"; }
};
