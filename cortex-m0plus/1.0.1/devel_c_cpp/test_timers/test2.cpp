#include "Arduino.h"
#include "test.h"

extern LEUARTClass Serial;
static String test_help = "test02 - pulseIn() test";
extern TimersLP Timers;

void test02_test(void)
{
  uint32_t a, b, dly;


  Serial.println("\n\rTest that bad pin fails");
  dly = Timers.pulseIn(2, HIGH, 100);

  Serial.println("\n\rTest starting level wrong timeout");
  a = micros();
  dly = Timers.pulseIn(3, HIGH, 100);
  b = micros();
  Serial.print("delta-micros = "); Serial.println(b-a);
  Serial.print("delay = "); Serial.println(dly);

  Serial.println("\n\rTest timeout works");
  a = micros();
  dly = Timers.pulseIn(3, LOW, 100000);
  b = micros();
  Serial.print("delta-micros = "); Serial.println(b-a);
  Serial.print("delay = "); Serial.println(dly);

}

void test02_desc(void)
{
  Serial.println("\n\rTest 02 Description:");
  Serial.println("  Test pulseIn() function timeouts and bad pins");
}

void test02(uint8_t function)
{
  switch(function) {
  case TESTHELP:
    Serial.print(test_help);
    break;
  case DESCRIPTION:
    test02_desc();
    break;
  case RUNTEST:
    Serial.println("\n\rRun test02");
    test02_test();
    break;
  default:
    Serial.println("\n\rBad Test Function");
    break;
  }
}
