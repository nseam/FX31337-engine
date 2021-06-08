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

int Bars(const string& _symbol, ENUM_TIMEFRAMES _tf) { throw NotImplementedException(); }

int ChartID() { throw NotImplementedException(); }
