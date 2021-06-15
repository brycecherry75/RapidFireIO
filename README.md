#RapidFireIO Library#

RapidFireIO, a high speed I/O library for Arduino by Bryce Cherry

Tested on Uno and Due boards

1.0.0 First release
1.1.0 Added functions referring to hardware pin labels (useful for non-Arduino boards)

FEATURES:
Set/Clear/Toggle for both output pin states (if set to an input, internal pullup for certain boards) and Input/Output states of the pin
Boards and derivatives supported: Uno inclduing ATmega8, Mega, Leonardo, Zero (supports direct pin and data direction toggle), Due, Gemma and others based on the ATtiny25/45/85
Pins with Arduino labels which support pinState/digitalWrite/digitalRead operations are supported and any pins with a hardware label can be used even without an assigned Arduino label

The ATmega8/48/88/168/328 shares pins on the oscillator (PB6/PB7) and Reset (PC6) pins; fuses must be set as appropriate when using these pins for any other purpose.
On the Due, PC0 is used for erasing the contents of the Flash.
On the ATtiny25/45/85, PB5 is shared with Reset; fuses must be set as appropriate when using this pin for any other purpose.

How to use ("0" can be changed to any valid Arduino pin number or hardware pin label (e.g. PB_0) - analog pins must use "Ax" e.g. "A0" for Analog 0 if using Arduino pin numbers):

SetPin0() will set Pin 0 HIGH if already set to an output or for certain boards toggle pullup if set to an input
ClearPin0() will set Pin 0 LOW if already set to an output or for certain boards toggle pullup if set to an input
TogglePin0() will toggle the state of Pin 0 if already set to an output or for certain boards toggle pullup if set to an input
SetInputStatePin0() will set Pin 0 to an input
SetOutputStatePin0() will set Pin 0 to an output
ToggleIOstatePin0() will toggle the I/O state of Pin 0 (if it was an output, it will become an input and vice versa)
ReadPin0() will return a value other than zero if Pin 0 is HIGH and will return zero if Pin 0 is LOW - the return value is a byte/uint8_t for AVR (Uno/Mega etc.) or an unsigned long/uint32_t for ARM (Due/Zero etc.)
init() will enable all available Arduino pins (Due and derivatives) and enable input monitoring (Zero and derivatives) -  must be used first in setup BEFORE initializing any hardware-related libraries e.g. Serial, SPI etc. on such platforms

ReadPin() example - reading an input port then masking out all bits with zeroes except the one you want which is masked with a one and checking if the result is zero (pin is LOW) or not zero (pin is HIGH) is the fastest possible way to see if a pin is LOW or HIGH:

if (RapidFireIO.ReadPin0() != 0) { // if Pin 0 is HIGH
// do the thing you want
}

if (RapidFireIO.ReadPin1() == 0) { // if Pin 1 is LOW
// do the thing you want
}

For certain ARM (Due etc.) microcontrollers among certain others which in one operation without affecting other bits on an output port sets or clears certain bits on an I/O port or direction register but a toggle operation requires a status register read - AND mask - set if 0 or clear if not 0, toggle speed can be maximized with the following instead of using TogglePin1()/ToggleIOstatePin1() (Pin 1 is used here):

byte state = 0; // 0 is the desited initial state

if (state == 0) {
  SetPin1();
  state = 1;
}
else {
  ClearPin1();
  state = 0;
}