//+------------------------------------------------------------------+
//|                                                   FX31337 engine |
//|                                 Copyright 2016-2021, EA31337 Ltd |
//|                                       https://github.com/FX31337 |
//+------------------------------------------------------------------+

/**
 * @file
 * Main file.
 */

#include <stdio.h>

using namespace std;

// Includes for MQL code compatibility.
#include "includes/mql/common.h"
#include "includes/mql/const.h"
#include "includes/mql/convert.h"
#include "includes/mql/datatype.h"
#include "includes/mql/enum.h"
#include "includes/mql/math.h"
#include "includes/mql/string.h"
#include "includes/mql/time.h"

// Class includes.
#include "account.h"
#include "terminal.h"

void main() {
  Terminal *terminal = new Terminal();
  delete terminal;
}
