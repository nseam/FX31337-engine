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

#include "exceptions.h"

#include "../../classes/SymbolInfo.enum.h"

/**
 * Returns the corresponding property of a specified symbol.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfodouble
 */
double SymbolInfoDouble(string name,                     // symbol
  ENUM_SYMBOL_INFO_DOUBLE prop_id  // identifier of the property
) {
  throw NotImplementedException();
}

/**
 * Returns the corresponding property of a specified symbol.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfodouble
 */
bool SymbolInfoDouble(string name,                      // symbol
                      ENUM_SYMBOL_INFO_DOUBLE prop_id,  // identifier of the property
                      double& double_var                // here we accept the property value
) {
  throw NotImplementedException();
}


/**
 * Returns the corresponding property of a specified symbol.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfointeger
 */
long SymbolInfoInteger(string name,                      // symbol
                       ENUM_SYMBOL_INFO_INTEGER prop_id  // identifier of a property

) {
  throw NotImplementedException();
}

/**
 * Returns the corresponding property of a specified symbol.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfointeger
 */
bool SymbolInfoInteger(string name,                       // symbol
                       ENUM_SYMBOL_INFO_INTEGER prop_id,  // identifier of a property
                       long& long_var                     // here we accept the property value
) {
  throw NotImplementedException();
}
