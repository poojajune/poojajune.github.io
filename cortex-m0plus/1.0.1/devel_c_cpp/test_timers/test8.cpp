/*
  Copyright (c) 2015 Engimusing LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Arduino.h"
#include "test.h"

extern LEUARTClass Serial;
static String test_help = "test08 - help entry";

void test08_test(void)
{
}

void test08_desc(void)
{
  Serial.println("\n\rTest 08 Description:");
  Serial.println("  Long multi-line description of the test");
  Serial.println("  ");
}

void test08(uint8_t function)
{
  switch (function) {
    case TESTHELP:
      Serial.print(test_help);
      break;
    case DESCRIPTION:
      test08_desc();
      break;
    case RUNTEST:
      Serial.println("\n\rRun test08");
      test08_test();
      break;
    default:
      Serial.println("\n\rBad Test Function");
      break;
  }
}

