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

// Forward declarations.
struct MqlTick;

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

/**
 * The function returns current prices of a specified symbol in a variable of the MqlTick type.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfotick
 */
bool SymbolInfoTick(string symbol,  // symbol name
                    MqlTick& tick   // reference to a structure
) {
  throw NotImplementedException();
}

/**
 * Returns the margin rates depending on the order type and direction.
 *
 * @docs
 * - https://www.mql5.com/en/docs/marketinformation/symbolinfomarginrate
 */
bool SymbolInfoMarginRate(string name,                     // symbol name
                          ENUM_ORDER_TYPE order_type,      // order type
                          double& initial_margin_rate,     // initial margin rate
                          double& maintenance_margin_rate  // maintenance margin rate
) {
  throw NotImplementedException();
}

#include "../../classes/SymbolInfo.struct.h"
