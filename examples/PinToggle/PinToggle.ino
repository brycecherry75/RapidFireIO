/*

  Speed toggle test for RapidFireIO by Bryce Cherry
  Enter an Arduino pin number or T (T will directly toggle Pin 2) via a serial terminal and connect a frequency counter to this pin

  Results with millis()/micros()/delay() disabled:
  Uno (16 MHz ATmega328): 1.6 MHz 50% duty cycle (direct toggle)
  Due (84 MHz SAM3X): 1.333 MHz 50% duty cycle (direct toggle)

*/

#include <RapidFireIO.h>

void setup() {
  RapidFireIO.init();
  Serial.begin(9600);
  uint8_t pin_field[5];
  for (int i = 0; i < 5; i++) {
    while (Serial.available() == 0) { // wait for serial data
    }
    pin_field[i] = Serial.read();
    if (pin_field[i] == 0x0D || pin_field[i] == 0x0A) { // terminator received
      pin_field[i] = 0x00; // terminate the field
      break;
    }
  }
  Serial.end();
  pin_field[4] = 0x00; // terminate it if unterminated
  for (int ch = 0; ch < 4; ch++) { // correct case of command
    pin_field[ch] = toupper(pin_field[ch]);
  }
  uint8_t pin_to_use = 0;
  bool DirectToggle = false;
  if (pin_field[0] == 'A') { // analog pin
    pin_to_use += A0;
    for (int i = 0; i < 4; i++) { // shift the data - terminator will be shifted accordingly
      pin_field[i] = pin_field[(i + 1)];
    }
  }
  else if (pin_field[0] == 'T') {
    DirectToggle = true;
    RapidFireIO.HSsetOutputState(2);
  }
  if (DirectToggle == true) {
    while (true) {
      RapidFireIO.HSdigitalToggle(2);
    }
  }
  else {
    pin_to_use += atoi(pin_field);
    RapidFireIO.HSsetOutputState(pin_to_use);
    while (true) {
      RapidFireIO.HSdigitalToggle(pin_to_use);
    }
  }
}

void loop() {
}