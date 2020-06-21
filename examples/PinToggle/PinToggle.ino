/*

  Speed toggle test
  Connect an oscilloscope to Arduino Pin 2

  Results:
  Uno (16 MHz ATmega328): 1.6 MHz 50% duty cycle
  Due (84 MHz SAM3X): 1.333 MHz 50% duty cycle

*/

#include <RapidFireIO.h>

void setup() {
  RapidFireIO.init();
  RapidFireIO.SetOutputStatePin2();
  while (true) {
    RapidFireIO.TogglePin2();
  }
}

void loop() {
}