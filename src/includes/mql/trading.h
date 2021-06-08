//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to trading.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading
 */

#pragma once

#include "string.h"
#include "enum.h"

// HistoryDealGetDouble
// HistoryDealGetInteger
// HistoryDealGetString
// HistoryDealGetTicket
// HistoryDealSelect
// HistoryDealsTotal
// HistoryOrderGetDouble
// HistoryOrderGetInteger
// HistoryOrderGetString
// HistoryOrderGetTicket
// HistoryOrderSelect
// HistoryOrdersTotal
// HistorySelect
// HistorySelectByPosition
// OrderCalcMargin
// OrderCalcProfit
// OrderCheck
// OrderGetDouble
// OrderGetInteger
// OrderGetString
// OrderGetTicket
// OrderSelect
// OrderSend
// OrderSendAsync
// OrdersTotal

// PositionGetDouble
// PositionGetInteger
// PositionGetString

// PositionGetSymbol
// PositionGetTicket
// PositionSelect
// PositionSelectByTicket
// PositionsTotal


/**
 * Returns the number of current orders.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/orderstotal
 */
int OrdersTotal() { throw NotImplementedException(); }

/**
 * Returns ticket of a corresponding order and automatically selects the order for further working with it using functions.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/ordergetticket
 */
unsigned long OrderGetTicket(int index  // Number in the list of orders
) {
  throw NotImplementedException();
}

/**
 * Selects an order to work with. Returns true if the function has been successfully completed. Returns false if the function completion has failed. For more information about an error call GetLastError().
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/orderselect
 */
bool OrderSelect(ulong ticket  // Order ticket
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of an order, pre-selected using OrderGetTicket or OrderSelect. The order property must be of the double type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/ordergetdouble
 */
double OrderGetDouble(ENUM_ORDER_PROPERTY_DOUBLE property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool OrderGetDouble(ENUM_ORDER_PROPERTY_DOUBLE property_id,  // Property identifier
                    double& double_var                       // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested order property, pre-selected using OrderGetTicket or OrderSelect. Order property must be of the datetime, int type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/ordergetinteger
 */
long OrderGetInteger(ENUM_ORDER_PROPERTY_INTEGER property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool OrderGetInteger(ENUM_ORDER_PROPERTY_INTEGER property_id,  // Property identifier
                     long& long_var                            // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested order property, pre-selected using OrderGetTicket or OrderSelect. The order property must be of the string type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/ordergetstring
 */
string OrderGetString(ENUM_ORDER_PROPERTY_STRING property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool OrderGetString(ENUM_ORDER_PROPERTY_STRING property_id,  // Property identifier
                    string& string_var                       // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * The function returns the requested property of an open position, pre-selected using PositionGetSymbol or
 * PositionSelect. The position property must be of the double type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positiongetdouble
 */
double PositionGetDouble(ENUM_POSITION_PROPERTY_DOUBLE property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool PositionGetDouble(ENUM_POSITION_PROPERTY_DOUBLE property_id,  // Property identifier
                       double& double_var                          // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * The function returns the requested property of an open position, pre-selected using PositionGetSymbol or
 * PositionSelect. The position property should be of datetime, int type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positiongetinteger
 */
long PositionGetInteger(ENUM_POSITION_PROPERTY_INTEGER property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool PositionGetInteger(ENUM_POSITION_PROPERTY_INTEGER property_id,  // Property identifier
                        long& long_var                               // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * The function returns the requested property of an open position, pre-selected using PositionGetSymbol or
 * PositionSelect. The position property should be of the string type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positiongetstring
 */
string PositionGetString(ENUM_POSITION_PROPERTY_STRING property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool PositionGetString(ENUM_POSITION_PROPERTY_STRING property_id,  // Property identifier
                       string& string_var                          // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the symbol corresponding to the open position and automatically selects the position for further working with
 * it using functions PositionGetDouble, PositionGetInteger, PositionGetString.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positiongetsymbol
 */
string PositionGetSymbol(int index  // Number in the list of positions
) {
  throw NotImplementedException();
}

/**
 * The function returns the ticket of a position with the specified index in the list of open positions and automatically selects the position to work with using functions PositionGetDouble, PositionGetInteger, PositionGetString.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positiongetticket
 */
unsigned long PositionGetTicket(int index  // The number of a position in the list
) {
  throw NotImplementedException();
}


/**
 * Chooses an open position for further working with it. Returns true if the function is successfully completed. Returns false in case of failure. To obtain information about the error, call GetLastError().
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positionselect
 */
bool PositionSelect(string symbol  // Symbol name
) {
  throw NotImplementedException();
}

/**
 * Selects an open position to work with based on the ticket number specified in the position. If successful, returns true. Returns false if the function failed. Call GetLastError() for error details.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positionselectbyticket
 */
bool PositionSelectByTicket(ulong ticket  // Position ticket
) {
  throw NotImplementedException();
}

/**
 * Returns the number of open positions.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/positionstotal
 */
int PositionsTotal() { throw NotImplementedException(); }

int Bars(const string& _symbol, ENUM_TIMEFRAMES _tf) { throw NotImplementedException(); }

int ChartID() { throw NotImplementedException(); }


/**
 * Retrieves the history of deals and orders having the specified position identifier.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyselectbyposition
 */
bool HistorySelectByPosition(long position_id  // position identifier - POSITION_IDENTIFIER
) {
  throw NotImplementedException();
}

/**
 * Selects an order from the history for further calling it through appropriate functions. It returns true if the function has been successfully completed. Returns false if the function has failed. For more details on error call GetLastError().
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyorderselect
 */
bool HistoryOrderSelect(ulong ticket  // Order ticket
) {
  throw NotImplementedException();
}

/**
 * Returns the number of orders in the history. Prior to calling HistoryOrdersTotal(), first it is necessary to receive the history of deals and orders using the HistorySelect() or HistorySelectByPosition() function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyorderstotal
 */
int HistoryOrdersTotal() { throw NotImplementedException(); }

/**
 * Return the ticket of a corresponding order in the history. Prior to calling HistoryOrderGetTicket(), first it is necessary to receive the history of deals and orders using the HistorySelect() or HistorySelectByPosition() function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyordergetticket
 */
unsigned long HistoryOrderGetTicket(int index  // Number in the list of orders
) {
  throw NotImplementedException();
}

/**
 * Returns the requested order property. The order property must be of the double type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyordergetdouble
 */
double HistoryOrderGetDouble(ulong ticket_number,                    // Ticket
                             ENUM_ORDER_PROPERTY_DOUBLE property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryOrderGetDouble(ulong ticket_number,                     // Ticket
                           ENUM_ORDER_PROPERTY_DOUBLE property_id,  // Property identifier
                           double& double_var                       // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of an order. The order property must be of datetime, int type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyordergetinteger
 */
long HistoryOrderGetInteger(ulong ticket_number,                     // Ticket
                            ENUM_ORDER_PROPERTY_INTEGER property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryOrderGetInteger(ulong ticket_number,                      // Ticket
                            ENUM_ORDER_PROPERTY_INTEGER property_id,  // Property identifier
                            long& long_var                            // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of an order. The order property must be of the string type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historyordergetstring
 */
string HistoryOrderGetString(ulong ticket_number,                    // Ticket
                             ENUM_ORDER_PROPERTY_STRING property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryOrderGetString(ulong ticket_number,                     // Ticket
                           ENUM_ORDER_PROPERTY_STRING property_id,  // Property identifier
                           string& string_var                       // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Selects a deal in the history for further calling it through appropriate functions. It returns true if the function has been successfully completed. Returns false if the function has failed. For more details on error call GetLastError().
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealselect
 */
bool HistoryDealSelect(ulong ticket  // Deal ticket
) {
  throw NotImplementedException();
}

/**
 * Returns the number of deal in history. Prior to calling HistoryDealsTotal(), first it is necessary to receive the history of deals and orders using the HistorySelect() or HistorySelectByPosition() function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealstotal
 */
int HistoryDealsTotal() { throw NotImplementedException(); }

/**
 * The function selects a deal for further processing and returns the deal ticket in history. Prior to calling HistoryDealGetTicket(), first it is necessary to receive the history of deals and orders using the HistorySelect() or HistorySelectByPosition() function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealgetticket
 */
unsigned long HistoryDealGetTicket(int index  // ticket deal
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of a deal. The deal property must be of the double type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealgetdouble
 */
double HistoryDealGetDouble(ulong ticket_number,                   // Ticket
                            ENUM_DEAL_PROPERTY_DOUBLE property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryDealGetDouble(ulong ticket_number,                    // Ticket
                          ENUM_DEAL_PROPERTY_DOUBLE property_id,  // Property identifier
                          double& double_var                      // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of a deal. The deal property must be of the datetime, int type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealgetinteger
 */
long HistoryDealGetInteger(ulong ticket_number,                    // Ticket
                           ENUM_DEAL_PROPERTY_INTEGER property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryDealGetInteger(ulong ticket_number,                     // Ticket
                           ENUM_DEAL_PROPERTY_INTEGER property_id,  // Property identifier
                           long& long_var                           // Here we accept the property value
) {
  throw NotImplementedException();
}

/**
 * Returns the requested property of a deal. The deal property must be of the string type. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/trading/historydealgetstring
 */
string HistoryDealGetString(ulong ticket_number,                   // Ticket
                            ENUM_DEAL_PROPERTY_STRING property_id  // Property identifier
) {
  throw NotImplementedException();
}

bool HistoryDealGetString(ulong ticket_number,                    // Ticket
                          ENUM_DEAL_PROPERTY_STRING property_id,  // Property identifier
                          string& string_var                      // Here we accept the property value
) {
  throw NotImplementedException();
}
