#pragma once

#include "check.h"
#include "string.h"

enum ENUM_CODE_PAGE {
  CP_ACP = 0,
  CP_OEMCP = 1,
  CP_MACCP = 2,
  CP_THREAD_ACP = 3,
  CP_SYMBOL = 42,
  CP_UTF7 = 65000,
  CP_UTF8 = 65001,
};

enum ENUM_FILE_SIZE_TYPE {
  CHAR_VALUE = 1,
  SHORT_VALUE = 2,
  INT_VALUE = 4,
};


/**
 * The function opens the file with the specified name and flag.
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/fileopen
 */
int FileOpen(string file_name,               // File name
             int open_flags,                 // Combination of flags
             short delimiter = '\t',         // Delimiter
             unsigned int codepage = CP_ACP  // Code page
) {
  throw NotImplementedException();
}

/**
 * Close the file previously opened by FileOpen().
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/fileclose
 */
void FileClose(int file_handle  // File handle
) {
  throw NotImplementedException();
}

/**
 * Checks the existence of a file.
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/fileisexist
 */
bool FileIsExist(const string file_name,  // File name
                 int common_flag = 0      // Search area
) {
  throw NotImplementedException();
}

/**
 * Defines the end of a file in the process of reading.
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/fileisending
 */
bool FileIsEnding(int file_handle  // File handle
) {
  throw NotImplementedException();
}

/**
 * The function reads int, short or char value from the current position of the file pointer depending on the length specified in bytes.
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/filereadinteger
 */
int FileReadInteger(int file_handle,      // File handle
  int size = INT_VALUE  // Size of an integer in bytes
) {
  throw NotImplementedException();
}

/**
 * The function reads a string from the current position of a file pointer in a file.
 *
 * @docs
 * - https://www.mql5.com/en/docs/files/filereadstring
 */
string FileReadString(int file_handle,  // File handle
                      int length = -1   // Length of the string
) {
  throw NotImplementedException();
}

unsigned int FileWriteString(int file_handle,           // File handle
                             const string text_string,  // string to write
                             int length = -1            // number of symbols
) {
  throw NotImplementedException();
}
