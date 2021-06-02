#pragma once

#include "../../classes/Chart.enum.h"

// Call by the first position and the number of required elements.
int CopyOpen(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              int start_pos,                  // start position
              int count,                      // data count to copy
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start date and the number of required elements
int CopyOpen(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              datetime start_time,            // start date and time
              int count,                      // data count to copy
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start and end dates of a required time interval
int CopyOpen(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              datetime start_time,            // start date and time
              datetime stop_time,             // stop date and time
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the first position and the number of required elements.
int CopyHigh(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             int start_pos,                  // start position
             int count,                      // data count to copy
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start date and the number of required elements
int CopyHigh(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             datetime start_time,            // start date and time
             int count,                      // data count to copy
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start and end dates of a required time interval
int CopyHigh(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             datetime start_time,            // start date and time
             datetime stop_time,             // stop date and time
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the first position and the number of required elements.
int CopyClose(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              int start_pos,                  // start position
              int count,                      // data count to copy
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

//Call by the start date and the number of required elements
int CopyClose(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              datetime start_time,            // start date and time
              int count,                      // data count to copy
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

//Call by the start and end dates of a required time interval
int CopyClose(string symbol_name,             // symbol name
              ENUM_TIMEFRAMES timeframe,      // period
              datetime start_time,            // start date and time
              datetime stop_time,             // stop date and time
              ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the first position and the number of required elements.
int CopyLow(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             int start_pos,                  // start position
             int count,                      // data count to copy
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start date and the number of required elements
int CopyLow(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             datetime start_time,            // start date and time
             int count,                      // data count to copy
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the start and end dates of a required time interval
int CopyLow(string symbol_name,             // symbol name
             ENUM_TIMEFRAMES timeframe,      // period
             datetime start_time,            // start date and time
             datetime stop_time,             // stop date and time
             ARRAY_REF(double, close_array)  // target array to copy
) {
  throw NotImplementedException();
}

// Call by the first position and the number of required elements.
int CopyTickVolume(string symbol_name,         // symbol name
                   ENUM_TIMEFRAMES timeframe,  // period
                   int start_pos,              // start position
                   int count,                  // data count to copy
                   long volume_array[]         // target array for tick volumes
) {
  throw NotImplementedException();
}

// Call by the start date and the number of required elements.
int CopyTickVolume(string symbol_name,         // symbol name
                   ENUM_TIMEFRAMES timeframe,  // period
                   datetime start_time,        // start date and time
                   int count,                  // data count to copy
                   long volume_array[]         // target array for tick volumes
) {
  throw NotImplementedException();
}

// Call by the start and end dates of a required time interval.
int CopyTickVolume(string symbol_name,         // symbol name
                   ENUM_TIMEFRAMES timeframe,  // period
                   datetime start_time,        // start date and time
                   datetime stop_time,         // stop date and time
                   long volume_array[]         // target array for tick volumes
) {
  throw NotImplementedException();
}
