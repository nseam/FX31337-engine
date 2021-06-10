//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Includes functions related to date and time.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime
 */

#pragma once

#include "../../classes/Chart.enum.h"
#include "../../classes/DateTime.enum.h"

// Forward declarations.
struct MqlDateTime;

/**
 * MQL's "datetime" type.
 */
class datetime {
  time_t dt;

 public:
  datetime() {}
  datetime(const time_t& _time) { dt = _time; }
  datetime(const long& _time) { throw NotImplementedException(); }
  datetime(const int& _time) { throw NotImplementedException(); }
  datetime& operator=(const time_t& _time) { dt = _time; }
  bool operator==(const int& _time) const { throw NotImplementedException(); }
  bool operator==(const datetime& _time) const { throw NotImplementedException(); }
  bool operator<(const int& _time) const { throw NotImplementedException(); }
  bool operator>(const int& _time) const { throw NotImplementedException(); }
  bool operator<(const datetime& _time) const { throw NotImplementedException(); }
  bool operator>(const datetime& _time) const { throw NotImplementedException(); }
  operator long() const { throw NotImplementedException(); }
};

/**
 * Returns the last known server time.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timecurrent
 */
datetime TimeCurrent() { return datetime(); }
datetime TimeCurrent(MqlDateTime& dt_struct) { throw NotImplementedException(); }

/**
 * The function gets to time_array history data of bar opening time for the specified symbol-period pair in the
 * specified quantity. It should be noted that elements ordering is from present to past, i.e., starting position of 0
 * means the current bar.
 *
 * @docs
 * - https://www.mql5.com/en/docs/series/copytime
 */
int CopyTime(string symbol_name,              // symbol name
             ENUM_TIMEFRAMES timeframe,       // period
             int start_pos,                   // start position
             int count,                       // data count to copy
             ARRAY_REF(datetime, time_array)  // target array to copy open times
) {
  throw NotImplementedException();
}

/**
 * The function gets to time_array history data of bar opening time for the specified symbol-period pair in the
 * specified quantity. It should be noted that elements ordering is from present to past, i.e., starting position of 0
 * means the current bar.
 *
 * @docs
 * - https://www.mql5.com/en/docs/series/copytime
 */
int CopyTime(string symbol_name,              // symbol name
             ENUM_TIMEFRAMES timeframe,       // period
             datetime start_time,             // start date and time
             int count,                       // data count to copy
             ARRAY_REF(datetime, time_array)  // target array to copy  open times
) {
  throw NotImplementedException();
}

/**
 * The function gets to time_array history data of bar opening time for the specified symbol-period pair in the
 * specified quantity. It should be noted that elements ordering is from present to past, i.e., starting position of 0
 * means the current bar.
 *
 * @docs
 * - https://www.mql5.com/en/docs/series/copytime
 */
int CopyTime(string symbol_name,              // symbol name
             ENUM_TIMEFRAMES timeframe,       // period
             datetime start_time,             // start date and time
             datetime stop_time,              // stop date and time
             ARRAY_REF(datetime, time_array)  // target array to copy open times
) {
  throw NotImplementedException();
}

/**
 * Converts a structure variable MqlDateTime into a value of datetime type and returns the resulting value.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/structtotime
 */
datetime StructToTime(MqlDateTime& dt_struct  // structure of the date and time
) {
  throw NotImplementedException();
}

/**
 * Converts a value of datetime type (number of seconds since 01.01.1970) into a structure variable MqlDateTime.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timetostruct
 */
bool TimeToStruct(datetime dt,            // date and time
                  MqlDateTime& dt_struct  // structure for the adoption of values
) {
  throw NotImplementedException();
}

/**
 * Returns the GMT, which is calculated taking into account the DST switch by the local time on the computer where the
 * client terminal is running. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timegmt
 */
datetime TimeGMT() { throw NotImplementedException(); }

/**
 * Returns the GMT, which is calculated taking into account the DST switch by the local time on the computer where the
 * client terminal is running. There are 2 variants of the function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timegmt
 */
datetime TimeGMT(MqlDateTime& dt_struct  // Variable of structure type
) {
  throw NotImplementedException();
}

/**
 * Returns the calculated current time of the trade server. Unlike TimeCurrent(), the calculation of the time value is
 * performed in the client terminal and depends on the time settings on your computer. There are 2 variants of the
 * function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timetradeserver
 */
datetime TimeTradeServer() { throw NotImplementedException(); }

/**
 * Returns the calculated current time of the trade server. Unlike TimeCurrent(), the calculation of the time value is
 * performed in the client terminal and depends on the time settings on your computer. There are 2 variants of the
 * function.
 *
 * @docs
 * - https://www.mql5.com/en/docs/dateandtime/timetradeserver
 */
datetime TimeTradeServer(MqlDateTime& dt_struct  // Variable of structure type
) {
  throw NotImplementedException();
}

/**
 * Transforms the string containing time and/or date in the "yyyy.mm.dd [hh:mi]" format into the datetime type number.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/stringtotime
 */
datetime StringToTime(const string& value) {
  std::tm t;
  std::istringstream ss(value);

  ss >> std::get_time(&t, "%Y-%m-%d %H:%M:%S");

  if (ss.fail()) {
    throw std::runtime_error{"failed to parse time string"};
  }
  return mktime(&t);
}

/**
 * Converts a value containing time in seconds.
 *
 * @docs
 * - https://www.mql5.com/en/docs/convert/timetostring
 */
string TimeToString(datetime value, int mode = TIME_DATE | TIME_MINUTES) { return ""; }

template <char... T>
datetime operator"" _D() {
  throw NotImplementedException();
}

#define DATETIME_LITERAL(STR) _D" ## STR ## "
