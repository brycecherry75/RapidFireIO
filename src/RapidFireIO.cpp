/*

  RapidFireIO, a high speed I/O library for Arduino by Bryce Cherry

*/

#include "RapidFireIO.h"

// Uno and derivatives
#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__) ||  defined(__AVR_ATmega88__) || defined(__AVR_ATmega48__) || defined(__AVR_ATmega8__)

void RapidFireIOclass::SetPin0() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPin1() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPin2() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPin3() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPin4() {
  PORTD |= 0x10;
}

void RapidFireIOclass::SetPin5() {
  PORTD |= 0x20;
}

void RapidFireIOclass::SetPin6() {
  PORTD |= 0x40;
}

void RapidFireIOclass::SetPin7() {
  PORTD |= 0x80;
}

void RapidFireIOclass::SetPin8() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPin9() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPin10() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPin11() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPin12() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPin13() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPinA0() {
  PORTC |= 0x01;
}

void RapidFireIOclass::SetPinA1() {
  PORTC |= 0x02;
}

void RapidFireIOclass::SetPinA2() {
  PORTC |= 0x04;
}

void RapidFireIOclass::SetPinA3() {
  PORTC |= 0x08;
}

void RapidFireIOclass::SetPinA4() {
  PORTC |= 0x10;
}

void RapidFireIOclass::SetPinA5() {
  PORTC |= 0x20;
}

void RapidFireIOclass::ClearPin0() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPin1() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPin2() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPin3() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPin4() {
  PORTD &= (~0x10);
}

void RapidFireIOclass::ClearPin5() {
  PORTD &= (~0x20);
}

void RapidFireIOclass::ClearPin6() {
  PORTD &= (~0x40);
}

void RapidFireIOclass::ClearPin7() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::ClearPin8() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPin9() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPin10() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPin11() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPin12() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPin13() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPinA0() {
  PORTC &= (~0x01);
}

void RapidFireIOclass::ClearPinA1() {
  PORTC &= (~0x02);
}

void RapidFireIOclass::ClearPinA2() {
  PORTC &= (~0x04);
}

void RapidFireIOclass::ClearPinA3() {
  PORTC &= (~0x08);
}

void RapidFireIOclass::ClearPinA4() {
  PORTC &= (~0x10);
}

void RapidFireIOclass::ClearPinA5() {
  PORTC &= (~0x20);
}

void RapidFireIOclass::TogglePin0() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePin1() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePin2() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePin3() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePin4() {
  PORTD ^= 0x10;
}

void RapidFireIOclass::TogglePin5() {
  PORTD ^= 0x20;
}

void RapidFireIOclass::TogglePin6() {
  PORTD ^= 0x40;
}

void RapidFireIOclass::TogglePin7() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::TogglePin8() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePin9() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePin10() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePin11() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePin12() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePin13() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePinA0() {
  PORTC ^= 0x01;
}

void RapidFireIOclass::TogglePinA1() {
  PORTC ^= 0x02;
}

void RapidFireIOclass::TogglePinA2() {
  PORTC ^= 0x04;
}

void RapidFireIOclass::TogglePinA3() {
  PORTC ^= 0x08;
}

void RapidFireIOclass::TogglePinA4() {
  PORTC ^= 0x10;
}

void RapidFireIOclass::TogglePinA5() {
  PORTC ^= 0x20;
}

void RapidFireIOclass::SetInputStatePin0() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin1() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin2() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin3() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin4() {
  DDRD &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin5() {
  DDRD &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin6() {
  DDRD &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin7() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin8() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin9() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin10() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin11() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin12() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin13() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinA0() {
  DDRC &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinA1() {
  DDRC &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinA2() {
  DDRC &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinA3() {
  DDRC &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinA4() {
  DDRC &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinA5() {
  DDRC &= (~0x20);
}

void RapidFireIOclass::SetOutputStatePin0() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin1() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin2() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin3() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin4() {
  DDRD |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin5() {
  DDRD |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin6() {
  DDRD |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin7() {
  DDRD |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin8() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin9() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin10() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin11() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin12() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin13() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinA0() {
  DDRC |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinA1() {
  DDRC |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinA2() {
  DDRC |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinA3() {
  DDRC |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinA4() {
  DDRC |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinA5() {
  DDRC |= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin1() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin2() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin3() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin4() {
  DDRD ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin5() {
  DDRD ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin6() {
  DDRD ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin7() {
  DDRD ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin8() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin9() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin10() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin11() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin12() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin13() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinA0() {
  DDRC ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinA1() {
  DDRC ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinA2() {
  DDRC ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinA3() {
  DDRC ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinA4() {
  DDRC ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinA5() {
  DDRC ^= 0x20;
}

uint8_t RapidFireIOclass::ReadPin0() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin1() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin2() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin3() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin4() {
  uint8_t data = PIND; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin5() {
  uint8_t data = PIND; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin6() {
  uint8_t data = PIND; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin7() {
  uint8_t data = PIND; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin8() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin9() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin10() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin11() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin12() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin13() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinA0() {
  uint8_t data = PINC; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinA1() {
  uint8_t data = PINC; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinA2() {
  uint8_t data = PINC; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinA3() {
  uint8_t data = PINC; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinA4() {
  uint8_t data = PINC; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinA5() {
  uint8_t data = PINC; data &= 0x20; return data;
}

void RapidFireIOclass::SetPinPB0() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPinPB1() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPinPB2() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPinPB3() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPinPB4() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPinPB5() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPinPB6() {
  PORTB |= 0x40;
}

void RapidFireIOclass::SetPinPB7() {
  PORTB |= 0x80;
}

void RapidFireIOclass::SetPinPC0() {
  PORTC |= 0x01;
}

void RapidFireIOclass::SetPinPC1() {
  PORTC |= 0x02;
}

void RapidFireIOclass::SetPinPC2() {
  PORTC |= 0x04;
}

void RapidFireIOclass::SetPinPC3() {
  PORTC |= 0x08;
}

void RapidFireIOclass::SetPinPC4() {
  PORTC |= 0x10;
}

void RapidFireIOclass::SetPinPC5() {
  PORTC |= 0x20;
}

void RapidFireIOclass::SetPinPC6() {
  PORTC |= 0x40;
}

void RapidFireIOclass::SetPinPD0() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPinPD1() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPinPD2() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPinPD3() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPinPD4() {
  PORTD |= 0x10;
}

void RapidFireIOclass::SetPinPD5() {
  PORTD |= 0x20;
}

void RapidFireIOclass::SetPinPD6() {
  PORTD |= 0x40;
}

void RapidFireIOclass::SetPinPD7() {
  PORTD |= 0x80;
}

void RapidFireIOclass::ClearPinPB0() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPinPB1() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPinPB2() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPinPB3() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPinPB4() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPinPB5() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPinPB6() {
  PORTB &= (~0x40);
}

void RapidFireIOclass::ClearPinPB7() {
  PORTB &= (~0x80);
}

void RapidFireIOclass::ClearPinPC0() {
  PORTC &= (~0x01);
}

void RapidFireIOclass::ClearPinPC1() {
  PORTC &= (~0x02);
}

void RapidFireIOclass::ClearPinPC2() {
  PORTC &= (~0x04);
}

void RapidFireIOclass::ClearPinPC3() {
  PORTC &= (~0x08);
}

void RapidFireIOclass::ClearPinPC4() {
  PORTC &= (~0x10);
}

void RapidFireIOclass::ClearPinPC5() {
  PORTC &= (~0x20);
}

void RapidFireIOclass::ClearPinPC6() {
  PORTC &= (~0x40);
}

void RapidFireIOclass::ClearPinPD0() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPinPD1() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPinPD2() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPinPD3() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPinPD4() {
  PORTD &= (~0x10);
}

void RapidFireIOclass::ClearPinPD5() {
  PORTD &= (~0x20);
}

void RapidFireIOclass::ClearPinPD6() {
  PORTD &= (~0x40);
}

void RapidFireIOclass::ClearPinPD7() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::TogglePinPB0() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePinPB1() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePinPB2() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePinPB3() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePinPB4() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePinPB5() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePinPB6() {
  PORTB ^= 0x40;
}

void RapidFireIOclass::TogglePinPB7() {
  PORTB ^= 0x80;
}

void RapidFireIOclass::TogglePinPC0() {
  PORTC ^= 0x01;
}

void RapidFireIOclass::TogglePinPC1() {
  PORTC ^= 0x02;
}

void RapidFireIOclass::TogglePinPC2() {
  PORTC ^= 0x04;
}

void RapidFireIOclass::TogglePinPC3() {
  PORTC ^= 0x08;
}

void RapidFireIOclass::TogglePinPC4() {
  PORTC ^= 0x10;
}

void RapidFireIOclass::TogglePinPC5() {
  PORTC ^= 0x20;
}

void RapidFireIOclass::TogglePinPC6() {
  PORTC ^= 0x40;
}

void RapidFireIOclass::TogglePinPD0() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePinPD1() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePinPD2() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePinPD3() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePinPD4() {
  PORTD ^= 0x10;
}

void RapidFireIOclass::TogglePinPD5() {
  PORTD ^= 0x20;
}

void RapidFireIOclass::TogglePinPD6() {
  PORTD ^= 0x40;
}

void RapidFireIOclass::TogglePinPD7() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::SetInputStatePinPB0() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPB1() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPB2() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPB3() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPB4() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPB5() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPB6() {
  DDRB &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPB7() {
  DDRB &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPC0() {
  DDRC &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPC1() {
  DDRC &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPC2() {
  DDRC &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPC3() {
  DDRC &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPC4() {
  DDRC &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPC5() {
  DDRC &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPC6() {
  DDRC &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPD0() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPD1() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPD2() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPD3() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPD4() {
  DDRD &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPD5() {
  DDRD &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPD6() {
  DDRD &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPD7() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetOutputStatePinPB0() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPB1() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPB4() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPB5() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPB6() {
  DDRB |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPB7() {
  DDRB |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPC0() {
  DDRC |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPC1() {
  DDRC |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPC2() {
  DDRC |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPC3() {
  DDRC |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPC4() {
  DDRC |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPC5() {
  DDRC |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPC6() {
  DDRC |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPD0() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPD1() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPD2() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPD3() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPD4() {
  DDRD |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPD5() {
  DDRD |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPD6() {
  DDRD |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPD7() {
  DDRD |= 0x80;
}


void RapidFireIOclass::ToggleIOstatePinPB0() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPB1() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPB4() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPB5() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPB6() {
  DDRB ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPB7() {
  DDRB ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPC0() {
  DDRC ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPC1() {
  DDRC ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPC2() {
  DDRC ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPC3() {
  DDRC ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPC4() {
  DDRC ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPC5() {
  DDRC ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPC6() {
  DDRC ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPD0() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPD1() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPD2() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPD3() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPD4() {
  DDRD ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPD5() {
  DDRD ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPD6() {
  DDRD ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPD7() {
  DDRD ^= 0x80;
}


uint8_t RapidFireIOclass::ReadPinPB0() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPB1() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPB2() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPB3() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPB4() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPB5() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPB6() {
  uint8_t data = PINB; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPB7() {
  uint8_t data = PINB; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPC0() {
  uint8_t data = PINC; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPC1() {
  uint8_t data = PINC; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPC2() {
  uint8_t data = PINC; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPC3() {
  uint8_t data = PINC; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPC4() {
  uint8_t data = PINC; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPC5() {
  uint8_t data = PINC; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPC6() {
  uint8_t data = PINC; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPD0() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPD1() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPD2() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPD3() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPD4() {
  uint8_t data = PIND; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPD5() {
  uint8_t data = PIND; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPD6() {
  uint8_t data = PIND; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPD7() {
  uint8_t data = PIND; data &= 0x80; return data;
}

void RapidFireIOclass::init() {
}

// Mega and derivatives
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

void RapidFireIOclass::SetPin0() {
  PORTE |= 0x01;
}

void RapidFireIOclass::SetPin1() {
  PORTE |= 0x02;
}

void RapidFireIOclass::SetPin2() {
  PORTE |= 0x10;
}

void RapidFireIOclass::SetPin3() {
  PORTE |= 0x20;
}

void RapidFireIOclass::SetPin4() {
  PORTG |= 0x20;
}

void RapidFireIOclass::SetPin5() {
  PORTE |= 0x08;
}

void RapidFireIOclass::SetPin6() {
  PORTH |= 0x08;
}

void RapidFireIOclass::SetPin7() {
  PORTH |= 0x10;
}

void RapidFireIOclass::SetPin8() {
  PORTH |= 0x20;
}

void RapidFireIOclass::SetPin9() {
  PORTH |= 0x40;
}

void RapidFireIOclass::SetPin10() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPin11() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPin12() {
  PORTB |= 0x40;
}

void RapidFireIOclass::SetPin13() {
  PORTB |= 0x80;
}

void RapidFireIOclass::SetPin14() {
  PORTJ |= 0x02;
}

void RapidFireIOclass::SetPin15() {
  PORTJ |= 0x01;
}

void RapidFireIOclass::SetPin16() {
  PORTH |= 0x02;
}

void RapidFireIOclass::SetPin17() {
  PORTH |= 0x01;
}

void RapidFireIOclass::SetPin18() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPin19() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPin20() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPin21() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPin22() {
  PORTA |= 0x01;
}

void RapidFireIOclass::SetPin23() {
  PORTA |= 0x02;
}

void RapidFireIOclass::SetPin24() {
  PORTA |= 0x04;
}

void RapidFireIOclass::SetPin25() {
  PORTA |= 0x08;
}

void RapidFireIOclass::SetPin26() {
  PORTA |= 0x10;
}

void RapidFireIOclass::SetPin27() {
  PORTA |= 0x20;
}

void RapidFireIOclass::SetPin28() {
  PORTA |= 0x40;
}

void RapidFireIOclass::SetPin29() {
  PORTA |= 0x80;
}

void RapidFireIOclass::SetPin30() {
  PORTC |= 0x80;
}

void RapidFireIOclass::SetPin31() {
  PORTC |= 0x40;
}

void RapidFireIOclass::SetPin32() {
  PORTC |= 0x20;
}

void RapidFireIOclass::SetPin33() {
  PORTC |= 0x10;
}

void RapidFireIOclass::SetPin34() {
  PORTC |= 0x08;
}

void RapidFireIOclass::SetPin35() {
  PORTC |= 0x04;
}

void RapidFireIOclass::SetPin36() {
  PORTC |= 0x02;
}

void RapidFireIOclass::SetPin37() {
  PORTC |= 0x01;
}

void RapidFireIOclass::SetPin38() {
  PORTD |= 0x80;
}

void RapidFireIOclass::SetPin39() {
  PORTG |= 0x04;
}

void RapidFireIOclass::SetPin40() {
  PORTG |= 0x02;
}

void RapidFireIOclass::SetPin41() {
  PORTG |= 0x01;
}

void RapidFireIOclass::SetPin42() {
  PORTL |= 0x80;
}

void RapidFireIOclass::SetPin43() {
  PORTL |= 0x40;
}

void RapidFireIOclass::SetPin44() {
  PORTL |= 0x20;
}

void RapidFireIOclass::SetPin45() {
  PORTL |= 0x10;
}

void RapidFireIOclass::SetPin46() {
  PORTL |= 0x08;
}

void RapidFireIOclass::SetPin47() {
  PORTL |= 0x04;
}

void RapidFireIOclass::SetPin48() {
  PORTL |= 0x02;
}

void RapidFireIOclass::SetPin49() {
  PORTL |= 0x01;
}

void RapidFireIOclass::SetPin50() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPin51() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPin52() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPin53() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPinA0() {
  PORTF |= 0x01;
}

void RapidFireIOclass::SetPinA1() {
  PORTF |= 0x02;
}

void RapidFireIOclass::SetPinA2() {
  PORTF |= 0x04;
}

void RapidFireIOclass::SetPinA3() {
  PORTF |= 0x08;
}

void RapidFireIOclass::SetPinA4() {
  PORTF |= 0x10;
}

void RapidFireIOclass::SetPinA5() {
  PORTF |= 0x20;
}

void RapidFireIOclass::SetPinA6() {
  PORTF |= 0x40;
}

void RapidFireIOclass::SetPinA7() {
  PORTF |= 0x80;
}

void RapidFireIOclass::SetPinA8() {
  PORTK |= 0x01;
}

void RapidFireIOclass::SetPinA9() {
  PORTK |= 0x02;
}

void RapidFireIOclass::SetPinA10() {
  PORTK |= 0x04;
}

void RapidFireIOclass::SetPinA11() {
  PORTK |= 0x08;
}

void RapidFireIOclass::SetPinA12() {
  PORTK |= 0x10;
}

void RapidFireIOclass::SetPinA13() {
  PORTK |= 0x20;
}

void RapidFireIOclass::SetPinA14() {
  PORTK |= 0x40;
}

void RapidFireIOclass::SetPinA15() {
  PORTK |= 0x80;
}

void RapidFireIOclass::ClearPin0() {
  PORTE &= (~0x01);
}

void RapidFireIOclass::ClearPin1() {
  PORTE &= (~0x02);
}

void RapidFireIOclass::ClearPin2() {
  PORTE &= (~0x10);
}

void RapidFireIOclass::ClearPin3() {
  PORTE &= (~0x20);
}

void RapidFireIOclass::ClearPin4() {
  PORTG &= (~0x20);
}

void RapidFireIOclass::ClearPin5() {
  PORTE &= (~0x08);
}

void RapidFireIOclass::ClearPin6() {
  PORTH &= (~0x08);
}

void RapidFireIOclass::ClearPin7() {
  PORTH &= (~0x10);
}

void RapidFireIOclass::ClearPin8() {
  PORTH &= (~0x20);
}

void RapidFireIOclass::ClearPin9() {
  PORTH &= (~0x40);
}

void RapidFireIOclass::ClearPin10() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPin11() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPin12() {
  PORTB &= (~0x40);
}

void RapidFireIOclass::ClearPin13() {
  PORTB &= (~0x80);
}

void RapidFireIOclass::ClearPin14() {
  PORTJ &= (~0x02);
}

void RapidFireIOclass::ClearPin15() {
  PORTJ &= (~0x01);
}

void RapidFireIOclass::ClearPin16() {
  PORTH &= (~0x02);
}

void RapidFireIOclass::ClearPin17() {
  PORTH &= (~0x01);
}

void RapidFireIOclass::ClearPin18() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPin19() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPin20() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPin21() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPin22() {
  PORTA &= (~0x01);
}

void RapidFireIOclass::ClearPin23() {
  PORTA &= (~0x02);
}

void RapidFireIOclass::ClearPin24() {
  PORTA &= (~0x04);
}

void RapidFireIOclass::ClearPin25() {
  PORTA &= (~0x08);
}

void RapidFireIOclass::ClearPin26() {
  PORTA &= (~0x10);
}

void RapidFireIOclass::ClearPin27() {
  PORTA &= (~0x20);
}

void RapidFireIOclass::ClearPin28() {
  PORTA &= (~0x40);
}

void RapidFireIOclass::ClearPin29() {
  PORTA &= (~0x80);
}

void RapidFireIOclass::ClearPin30() {
  PORTC &= (~0x80);
}

void RapidFireIOclass::ClearPin31() {
  PORTC &= (~0x40);
}

void RapidFireIOclass::ClearPin32() {
  PORTC &= (~0x20);
}

void RapidFireIOclass::ClearPin33() {
  PORTC &= (~0x10);
}

void RapidFireIOclass::ClearPin34() {
  PORTC &= (~0x08);
}

void RapidFireIOclass::ClearPin35() {
  PORTC &= (~0x04);
}

void RapidFireIOclass::ClearPin36() {
  PORTC &= (~0x02);
}

void RapidFireIOclass::ClearPin37() {
  PORTC &= (~0x01);
}

void RapidFireIOclass::ClearPin38() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::ClearPin39() {
  PORTG &= (~0x04);
}

void RapidFireIOclass::ClearPin40() {
  PORTG &= (~0x02);
}

void RapidFireIOclass::ClearPin41() {
  PORTG &= (~0x01);
}

void RapidFireIOclass::ClearPin42() {
  PORTL &= (~0x80);
}

void RapidFireIOclass::ClearPin43() {
  PORTL &= (~0x40);
}

void RapidFireIOclass::ClearPin44() {
  PORTL &= (~0x20);
}

void RapidFireIOclass::ClearPin45() {
  PORTL &= (~0x10);
}

void RapidFireIOclass::ClearPin46() {
  PORTL &= (~0x08);
}

void RapidFireIOclass::ClearPin47() {
  PORTL &= (~0x04);
}

void RapidFireIOclass::ClearPin48() {
  PORTL &= (~0x02);
}

void RapidFireIOclass::ClearPin49() {
  PORTL &= (~0x01);
}

void RapidFireIOclass::ClearPin50() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPin51() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPin52() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPin53() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPinA0() {
  PORTF &= (~0x01);
}

void RapidFireIOclass::ClearPinA1() {
  PORTF &= (~0x02);
}

void RapidFireIOclass::ClearPinA2() {
  PORTF &= (~0x04);
}

void RapidFireIOclass::ClearPinA3() {
  PORTF &= (~0x08);
}

void RapidFireIOclass::ClearPinA4() {
  PORTF &= (~0x10);
}

void RapidFireIOclass::ClearPinA5() {
  PORTF &= (~0x20);
}

void RapidFireIOclass::ClearPinA6() {
  PORTF &= (~0x40);
}

void RapidFireIOclass::ClearPinA7() {
  PORTF &= (~0x80);
}

void RapidFireIOclass::ClearPinA8() {
  PORTK &= (~0x01);
}

void RapidFireIOclass::ClearPinA9() {
  PORTK &= (~0x02);
}

void RapidFireIOclass::ClearPinA10() {
  PORTK &= (~0x04);
}

void RapidFireIOclass::ClearPinA11() {
  PORTK &= (~0x08);
}

void RapidFireIOclass::ClearPinA12() {
  PORTK &= (~0x10);
}

void RapidFireIOclass::ClearPinA13() {
  PORTK &= (~0x20);
}

void RapidFireIOclass::ClearPinA14() {
  PORTK &= (~0x40);
}

void RapidFireIOclass::ClearPinA15() {
  PORTK &= (~0x80);
}

void RapidFireIOclass::TogglePin0() {
  PORTE ^= 0x01;
}

void RapidFireIOclass::TogglePin1() {
  PORTE ^= 0x02;
}

void RapidFireIOclass::TogglePin2() {
  PORTE ^= 0x10;
}

void RapidFireIOclass::TogglePin3() {
  PORTE ^= 0x20;
}

void RapidFireIOclass::TogglePin4() {
  PORTG ^= 0x20;
}

void RapidFireIOclass::TogglePin5() {
  PORTE ^= 0x08;
}

void RapidFireIOclass::TogglePin6() {
  PORTH ^= 0x08;
}

void RapidFireIOclass::TogglePin7() {
  PORTH ^= 0x10;
}

void RapidFireIOclass::TogglePin8() {
  PORTH ^= 0x20;
}

void RapidFireIOclass::TogglePin9() {
  PORTH ^= 0x40;
}

void RapidFireIOclass::TogglePin10() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePin11() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePin12() {
  PORTB ^= 0x40;
}

void RapidFireIOclass::TogglePin13() {
  PORTB ^= 0x80;
}

void RapidFireIOclass::TogglePin14() {
  PORTJ ^= 0x02;
}

void RapidFireIOclass::TogglePin15() {
  PORTJ ^= 0x01;
}

void RapidFireIOclass::TogglePin16() {
  PORTH ^= 0x02;
}

void RapidFireIOclass::TogglePin17() {
  PORTH ^= 0x01;
}

void RapidFireIOclass::TogglePin18() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePin19() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePin20() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePin21() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePin22() {
  PORTA ^= 0x01;
}

void RapidFireIOclass::TogglePin23() {
  PORTA ^= 0x02;
}

void RapidFireIOclass::TogglePin24() {
  PORTA ^= 0x04;
}

void RapidFireIOclass::TogglePin25() {
  PORTA ^= 0x08;
}

void RapidFireIOclass::TogglePin26() {
  PORTA ^= 0x10;
}

void RapidFireIOclass::TogglePin27() {
  PORTA ^= 0x20;
}

void RapidFireIOclass::TogglePin28() {
  PORTA ^= 0x40;
}

void RapidFireIOclass::TogglePin29() {
  PORTA ^= 0x80;
}

void RapidFireIOclass::TogglePin30() {
  PORTC ^= 0x80;
}

void RapidFireIOclass::TogglePin31() {
  PORTC ^= 0x40;
}

void RapidFireIOclass::TogglePin32() {
  PORTC ^= 0x20;
}

void RapidFireIOclass::TogglePin33() {
  PORTC ^= 0x10;
}

void RapidFireIOclass::TogglePin34() {
  PORTC ^= 0x08;
}

void RapidFireIOclass::TogglePin35() {
  PORTC ^= 0x04;
}

void RapidFireIOclass::TogglePin36() {
  PORTC ^= 0x02;
}

void RapidFireIOclass::TogglePin37() {
  PORTC ^= 0x01;
}

void RapidFireIOclass::TogglePin38() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::TogglePin39() {
  PORTG ^= 0x04;
}

void RapidFireIOclass::TogglePin40() {
  PORTG ^= 0x02;
}

void RapidFireIOclass::TogglePin41() {
  PORTG ^= 0x01;
}

void RapidFireIOclass::TogglePin42() {
  PORTL ^= 0x80;
}

void RapidFireIOclass::TogglePin43() {
  PORTL ^= 0x40;
}

void RapidFireIOclass::TogglePin44() {
  PORTL ^= 0x20;
}

void RapidFireIOclass::TogglePin45() {
  PORTL ^= 0x10;
}

void RapidFireIOclass::TogglePin46() {
  PORTL ^= 0x08;
}

void RapidFireIOclass::TogglePin47() {
  PORTL ^= 0x04;
}

void RapidFireIOclass::TogglePin48() {
  PORTL ^= 0x02;
}

void RapidFireIOclass::TogglePin49() {
  PORTL ^= 0x01;
}

void RapidFireIOclass::TogglePin50() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePin51() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePin52() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePin53() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePinA0() {
  PORTF ^= 0x01;
}

void RapidFireIOclass::TogglePinA1() {
  PORTF ^= 0x02;
}

void RapidFireIOclass::TogglePinA2() {
  PORTF ^= 0x04;
}

void RapidFireIOclass::TogglePinA3() {
  PORTF ^= 0x08;
}

void RapidFireIOclass::TogglePinA4() {
  PORTF ^= 0x10;
}

void RapidFireIOclass::TogglePinA5() {
  PORTF ^= 0x20;
}

void RapidFireIOclass::TogglePinA6() {
  PORTF ^= 0x40;
}

void RapidFireIOclass::TogglePinA7() {
  PORTF ^= 0x80;
}

void RapidFireIOclass::TogglePinA8() {
  PORTK ^= 0x01;
}

void RapidFireIOclass::TogglePinA9() {
  PORTK ^= 0x02;
}

void RapidFireIOclass::TogglePinA10() {
  PORTK ^= 0x04;
}

void RapidFireIOclass::TogglePinA11() {
  PORTK ^= 0x08;
}

void RapidFireIOclass::TogglePinA12() {
  PORTK ^= 0x10;
}

void RapidFireIOclass::TogglePinA13() {
  PORTK ^= 0x20;
}

void RapidFireIOclass::TogglePinA14() {
  PORTK ^= 0x40;
}

void RapidFireIOclass::TogglePinA15() {
  PORTK ^= 0x80;
}

void RapidFireIOclass::SetInputStatePin0() {
  DDRE &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin1() {
  DDRE &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin2() {
  DDRE &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin3() {
  DDRE &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin4() {
  DDRG &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin5() {
  DDRE &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin6() {
  DDRH &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin7() {
  DDRH &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin8() {
  DDRH &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin9() {
  DDRH &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin10() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin11() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin12() {
  DDRB &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin13() {
  DDRB &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin14() {
  DDRJ &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin15() {
  DDRJ &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin16() {
  DDRH &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin17() {
  DDRH &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin18() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin19() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin20() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin21() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin22() {
  DDRA &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin23() {
  DDRA &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin24() {
  DDRA &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin25() {
  DDRA &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin26() {
  DDRA &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin27() {
  DDRA &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin28() {
  DDRA &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin29() {
  DDRA &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin30() {
  DDRC &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin31() {
  DDRC &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin32() {
  DDRC &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin33() {
  DDRC &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin34() {
  DDRC &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin35() {
  DDRC &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin36() {
  DDRC &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin37() {
  DDRC &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin38() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin39() {
  DDRG &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin40() {
  DDRG &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin41() {
  DDRG &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin42() {
  DDRL &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin43() {
  DDRL &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin44() {
  DDRL &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin45() {
  DDRL &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin46() {
  DDRL &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin47() {
  DDRL &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin48() {
  DDRL &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin49() {
  DDRL &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin50() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin51() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin52() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin53() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinA0() {
  DDRF &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinA1() {
  DDRF &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinA2() {
  DDRF &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinA3() {
  DDRF &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinA4() {
  DDRF &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinA5() {
  DDRF &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinA6() {
  DDRF &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinA7() {
  DDRF &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinA8() {
  DDRK &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinA9() {
  DDRK &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinA10() {
  DDRK &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinA11() {
  DDRK &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinA12() {
  DDRK &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinA13() {
  DDRK &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinA14() {
  DDRK &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinA15() {
  DDRK &= (~0x80);
}

void RapidFireIOclass::SetOutputStatePin0() {
  DDRE |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin1() {
  DDRE |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin2() {
  DDRE |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin3() {
  DDRE |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin4() {
  DDRG |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin5() {
  DDRE |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin6() {
  DDRH |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin7() {
  DDRH |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin8() {
  DDRH |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin9() {
  DDRH |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin10() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin11() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin12() {
  DDRB |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin13() {
  DDRB |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin14() {
  DDRJ |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin15() {
  DDRJ |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin16() {
  DDRH |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin17() {
  DDRH |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin18() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin19() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin20() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin21() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin22() {
  DDRA |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin23() {
  DDRA |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin24() {
  DDRA |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin25() {
  DDRA |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin26() {
  DDRA |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin27() {
  DDRA |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin28() {
  DDRA |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin29() {
  DDRA |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin30() {
  DDRC |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin31() {
  DDRC |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin32() {
  DDRC |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin33() {
  DDRC |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin34() {
  DDRC |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin35() {
  DDRC |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin36() {
  DDRC |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin37() {
  DDRC |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin38() {
  DDRD |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin39() {
  DDRG |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin40() {
  DDRG |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin41() {
  DDRG |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin42() {
  DDRL |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin43() {
  DDRL |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin44() {
  DDRL |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin45() {
  DDRL |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin46() {
  DDRL |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin47() {
  DDRL |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin48() {
  DDRL |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin49() {
  DDRL |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin50() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin51() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin52() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin53() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinA0() {
  DDRF |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinA1() {
  DDRF |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinA2() {
  DDRF |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinA3() {
  DDRF |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinA4() {
  DDRF |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinA5() {
  DDRF |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinA6() {
  DDRF |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinA7() {
  DDRF |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinA8() {
  DDRK |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinA9() {
  DDRK |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinA10() {
  DDRK |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinA11() {
  DDRK |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinA12() {
  DDRK |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinA13() {
  DDRK |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinA14() {
  DDRK |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinA15() {
  DDRK |= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  DDRE ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin1() {
  DDRE ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin2() {
  DDRE ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin3() {
  DDRE ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin4() {
  DDRG ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin5() {
  DDRE ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin6() {
  DDRH ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin7() {
  DDRH ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin8() {
  DDRH ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin9() {
  DDRH ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin10() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin11() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin12() {
  DDRB ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin13() {
  DDRB ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin14() {
  DDRJ ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin15() {
  DDRJ ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin16() {
  DDRH ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin17() {
  DDRH ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin18() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin19() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin20() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin21() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin22() {
  DDRA ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin23() {
  DDRA ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin24() {
  DDRA ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin25() {
  DDRA ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin26() {
  DDRA ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin27() {
  DDRA ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin28() {
  DDRA ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin29() {
  DDRA ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin30() {
  DDRC ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin31() {
  DDRC ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin32() {
  DDRC ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin33() {
  DDRC ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin34() {
  DDRC ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin35() {
  DDRC ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin36() {
  DDRC ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin37() {
  DDRC ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin38() {
  DDRD ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin39() {
  DDRG ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin40() {
  DDRG ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin41() {
  DDRG ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin42() {
  DDRL ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin43() {
  DDRL ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin44() {
  DDRL ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin45() {
  DDRL ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin46() {
  DDRL ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin47() {
  DDRL ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin48() {
  DDRL ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin49() {
  DDRL ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin50() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin51() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin52() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin53() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinA0() {
  DDRF ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinA1() {
  DDRF ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinA2() {
  DDRF ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinA3() {
  DDRF ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinA4() {
  DDRF ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinA5() {
  DDRF ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinA6() {
  DDRF ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinA7() {
  DDRF ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinA8() {
  DDRK ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinA9() {
  DDRK ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinA10() {
  DDRK ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinA11() {
  DDRK ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinA12() {
  DDRK ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinA13() {
  DDRK ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinA14() {
  DDRK ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinA15() {
  DDRK ^= 0x80;
}

uint8_t RapidFireIOclass::ReadPin0() {
  uint8_t data = PINE; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin1() {
  uint8_t data = PINE; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin2() {
  uint8_t data = PINE; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin3() {
  uint8_t data = PINE; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin4() {
  uint8_t data = PING; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin5() {
  uint8_t data = PINE; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin6() {
  uint8_t data = PINH; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin7() {
  uint8_t data = PINH; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin8() {
  uint8_t data = PINH; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin9() {
  uint8_t data = PINH; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin10() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin11() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin12() {
  uint8_t data = PINB; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin13() {
  uint8_t data = PINB; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin14() {
  uint8_t data = PINJ; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin15() {
  uint8_t data = PINJ; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin16() {
  uint8_t data = PINH; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin17() {
  uint8_t data = PINH; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin18() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin19() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin20() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin21() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin22() {
  uint8_t data = PINA; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin23() {
  uint8_t data = PINA; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin24() {
  uint8_t data = PINA; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin25() {
  uint8_t data = PINA; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin26() {
  uint8_t data = PINA; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin27() {
  uint8_t data = PINA; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin28() {
  uint8_t data = PINA; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin29() {
  uint8_t data = PINA; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin30() {
  uint8_t data = PINC; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin31() {
  uint8_t data = PINC; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin32() {
  uint8_t data = PINC; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin33() {
  uint8_t data = PINC; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin34() {
  uint8_t data = PINC; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin35() {
  uint8_t data = PINC; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin36() {
  uint8_t data = PINC; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin37() {
  uint8_t data = PINC; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin38() {
  uint8_t data = PIND; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin39() {
  uint8_t data = PING; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin40() {
  uint8_t data = PING; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin41() {
  uint8_t data = PING; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin42() {
  uint8_t data = PINL; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin43() {
  uint8_t data = PINL; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin44() {
  uint8_t data = PINL; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin45() {
  uint8_t data = PINL; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin46() {
  uint8_t data = PINL; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin47() {
  uint8_t data = PINL; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin48() {
  uint8_t data = PINL; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin49() {
  uint8_t data = PINL; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin50() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin51() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin52() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin53() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinA0() {
  uint8_t data = PINF; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinA1() {
  uint8_t data = PINF; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinA2() {
  uint8_t data = PINF; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinA3() {
  uint8_t data = PINF; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinA4() {
  uint8_t data = PINF; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinA5() {
  uint8_t data = PINF; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinA6() {
  uint8_t data = PINF; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinA7() {
  uint8_t data = PINF; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinA8() {
  uint8_t data = PINK; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinA9() {
  uint8_t data = PINK; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinA10() {
  uint8_t data = PINK; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinA11() {
  uint8_t data = PINK; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinA12() {
  uint8_t data = PINK; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinA13() {
  uint8_t data = PINK; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinA14() {
  uint8_t data = PINK; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinA15() {
  uint8_t data = PINK; data &= 0x80; return data;
}

void RapidFireIOclass::SetPinPA0() {
  PORTA |= 0x01;
}

void RapidFireIOclass::SetPinPA1() {
  PORTA |= 0x02;
}

void RapidFireIOclass::SetPinPA2() {
  PORTA |= 0x04;
}

void RapidFireIOclass::SetPinPA3() {
  PORTA |= 0x08;
}

void RapidFireIOclass::SetPinPA4() {
  PORTA |= 0x10;
}

void RapidFireIOclass::SetPinPA5() {
  PORTA |= 0x20;
}

void RapidFireIOclass::SetPinPA6() {
  PORTA |= 0x40;
}

void RapidFireIOclass::SetPinPA7() {
  PORTA |= 0x80;
}

void RapidFireIOclass::SetPinPB0() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPinPB1() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPinPB2() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPinPB3() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPinPB4() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPinPB5() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPinPB6() {
  PORTB |= 0x40;
}

void RapidFireIOclass::SetPinPB7() {
  PORTB |= 0x80;
}

void RapidFireIOclass::SetPinPC0() {
  PORTC |= 0x01;
}

void RapidFireIOclass::SetPinPC1() {
  PORTC |= 0x02;
}

void RapidFireIOclass::SetPinPC2() {
  PORTC |= 0x04;
}

void RapidFireIOclass::SetPinPC3() {
  PORTC |= 0x08;
}

void RapidFireIOclass::SetPinPC4() {
  PORTC |= 0x10;
}

void RapidFireIOclass::SetPinPC5() {
  PORTC |= 0x20;
}

void RapidFireIOclass::SetPinPC6() {
  PORTC |= 0x40;
}

void RapidFireIOclass::SetPinPC7() {
  PORTC |= 0x80;
}

void RapidFireIOclass::SetPinPD0() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPinPD1() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPinPD2() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPinPD3() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPinPD4() {
  PORTD |= 0x10;
}

void RapidFireIOclass::SetPinPD5() {
  PORTD |= 0x20;
}

void RapidFireIOclass::SetPinPD6() {
  PORTD |= 0x40;
}

void RapidFireIOclass::SetPinPD7() {
  PORTD |= 0x80;
}

void RapidFireIOclass::SetPinPE0() {
  PORTE |= 0x01;
}

void RapidFireIOclass::SetPinPE1() {
  PORTE |= 0x02;
}

void RapidFireIOclass::SetPinPE2() {
  PORTE |= 0x04;
}

void RapidFireIOclass::SetPinPE3() {
  PORTE |= 0x08;
}

void RapidFireIOclass::SetPinPE4() {
  PORTE |= 0x10;
}

void RapidFireIOclass::SetPinPE5() {
  PORTE |= 0x20;
}

void RapidFireIOclass::SetPinPE6() {
  PORTE |= 0x40;
}

void RapidFireIOclass::SetPinPE7() {
  PORTE |= 0x80;
}

void RapidFireIOclass::SetPinPF0() {
  PORTF |= 0x01;
}

void RapidFireIOclass::SetPinPF1() {
  PORTF |= 0x02;
}

void RapidFireIOclass::SetPinPF2() {
  PORTF |= 0x04;
}

void RapidFireIOclass::SetPinPF3() {
  PORTF |= 0x08;
}

void RapidFireIOclass::SetPinPF4() {
  PORTF |= 0x10;
}

void RapidFireIOclass::SetPinPF5() {
  PORTF |= 0x20;
}

void RapidFireIOclass::SetPinPF6() {
  PORTF |= 0x40;
}

void RapidFireIOclass::SetPinPF7() {
  PORTF |= 0x80;
}

void RapidFireIOclass::SetPinPG0() {
  PORTG |= 0x01;
}

void RapidFireIOclass::SetPinPG1() {
  PORTG |= 0x02;
}

void RapidFireIOclass::SetPinPG2() {
  PORTG |= 0x04;
}

void RapidFireIOclass::SetPinPG3() {
  PORTG |= 0x08;
}

void RapidFireIOclass::SetPinPG4() {
  PORTG |= 0x10;
}

void RapidFireIOclass::SetPinPG5() {
  PORTG |= 0x20;
}

void RapidFireIOclass::SetPinPH0() {
  PORTH |= 0x01;
}

void RapidFireIOclass::SetPinPH1() {
  PORTH |= 0x02;
}

void RapidFireIOclass::SetPinPH2() {
  PORTH |= 0x04;
}

void RapidFireIOclass::SetPinPH3() {
  PORTH |= 0x08;
}

void RapidFireIOclass::SetPinPH4() {
  PORTH |= 0x10;
}

void RapidFireIOclass::SetPinPH5() {
  PORTH |= 0x20;
}

void RapidFireIOclass::SetPinPH6() {
  PORTH |= 0x40;
}

void RapidFireIOclass::SetPinPH7() {
  PORTH |= 0x80;
}

void RapidFireIOclass::SetPinPJ0() {
  PORTJ |= 0x01;
}

void RapidFireIOclass::SetPinPJ1() {
  PORTJ |= 0x02;
}

void RapidFireIOclass::SetPinPJ2() {
  PORTJ |= 0x04;
}

void RapidFireIOclass::SetPinPJ3() {
  PORTJ |= 0x08;
}

void RapidFireIOclass::SetPinPJ4() {
  PORTJ |= 0x10;
}

void RapidFireIOclass::SetPinPJ5() {
  PORTJ |= 0x20;
}

void RapidFireIOclass::SetPinPJ6() {
  PORTJ |= 0x40;
}

void RapidFireIOclass::SetPinPJ7() {
  PORTJ |= 0x80;
}

void RapidFireIOclass::SetPinPK0() {
  PORTK |= 0x01;
}

void RapidFireIOclass::SetPinPK1() {
  PORTK |= 0x02;
}

void RapidFireIOclass::SetPinPK2() {
  PORTK |= 0x04;
}

void RapidFireIOclass::SetPinPK3() {
  PORTK |= 0x08;
}

void RapidFireIOclass::SetPinPK4() {
  PORTK |= 0x10;
}

void RapidFireIOclass::SetPinPK5() {
  PORTK |= 0x20;
}

void RapidFireIOclass::SetPinPK6() {
  PORTK |= 0x40;
}

void RapidFireIOclass::SetPinPK7() {
  PORTK |= 0x80;
}

void RapidFireIOclass::SetPinPL0() {
  PORTL |= 0x01;
}

void RapidFireIOclass::SetPinPL1() {
  PORTL |= 0x02;
}

void RapidFireIOclass::SetPinPL2() {
  PORTL |= 0x04;
}

void RapidFireIOclass::SetPinPL3() {
  PORTL |= 0x08;
}

void RapidFireIOclass::SetPinPL4() {
  PORTL |= 0x10;
}

void RapidFireIOclass::SetPinPL5() {
  PORTL |= 0x20;
}

void RapidFireIOclass::SetPinPL6() {
  PORTL |= 0x40;
}

void RapidFireIOclass::SetPinPL7() {
  PORTL |= 0x80;
}

void RapidFireIOclass::ClearPinPA0() {
  PORTA &= (~0x01);
}

void RapidFireIOclass::ClearPinPA1() {
  PORTA &= (~0x02);
}

void RapidFireIOclass::ClearPinPA2() {
  PORTA &= (~0x04);
}

void RapidFireIOclass::ClearPinPA3() {
  PORTA &= (~0x08);
}

void RapidFireIOclass::ClearPinPA4() {
  PORTA &= (~0x10);
}

void RapidFireIOclass::ClearPinPA5() {
  PORTA &= (~0x20);
}

void RapidFireIOclass::ClearPinPA6() {
  PORTA &= (~0x40);
}

void RapidFireIOclass::ClearPinPA7() {
  PORTA &= (~0x80);
}

void RapidFireIOclass::ClearPinPB0() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPinPB1() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPinPB2() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPinPB3() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPinPB4() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPinPB5() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPinPB6() {
  PORTB &= (~0x40);
}

void RapidFireIOclass::ClearPinPB7() {
  PORTB &= (~0x80);
}

void RapidFireIOclass::ClearPinPC0() {
  PORTC &= (~0x01);
}

void RapidFireIOclass::ClearPinPC1() {
  PORTC &= (~0x02);
}

void RapidFireIOclass::ClearPinPC2() {
  PORTC &= (~0x04);
}

void RapidFireIOclass::ClearPinPC3() {
  PORTC &= (~0x08);
}

void RapidFireIOclass::ClearPinPC4() {
  PORTC &= (~0x10);
}

void RapidFireIOclass::ClearPinPC5() {
  PORTC &= (~0x20);
}

void RapidFireIOclass::ClearPinPC6() {
  PORTC &= (~0x40);
}

void RapidFireIOclass::ClearPinPC7() {
  PORTC &= (~0x80);
}

void RapidFireIOclass::ClearPinPD0() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPinPD1() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPinPD2() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPinPD3() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPinPD4() {
  PORTD &= (~0x10);
}

void RapidFireIOclass::ClearPinPD5() {
  PORTD &= (~0x20);
}

void RapidFireIOclass::ClearPinPD6() {
  PORTD &= (~0x40);
}

void RapidFireIOclass::ClearPinPD7() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::ClearPinPE0() {
  PORTE &= (~0x01);
}

void RapidFireIOclass::ClearPinPE1() {
  PORTE &= (~0x02);
}

void RapidFireIOclass::ClearPinPE2() {
  PORTE &= (~0x04);
}

void RapidFireIOclass::ClearPinPE3() {
  PORTE &= (~0x08);
}

void RapidFireIOclass::ClearPinPE4() {
  PORTE &= (~0x10);
}

void RapidFireIOclass::ClearPinPE5() {
  PORTE &= (~0x20);
}

void RapidFireIOclass::ClearPinPE6() {
  PORTE &= (~0x40);
}

void RapidFireIOclass::ClearPinPE7() {
  PORTE &= (~0x80);
}

void RapidFireIOclass::ClearPinPF0() {
  PORTF &= (~0x01);
}

void RapidFireIOclass::ClearPinPF1() {
  PORTF &= (~0x02);
}

void RapidFireIOclass::ClearPinPF2() {
  PORTF &= (~0x04);
}

void RapidFireIOclass::ClearPinPF3() {
  PORTF &= (~0x08);
}

void RapidFireIOclass::ClearPinPF4() {
  PORTF &= (~0x10);
}

void RapidFireIOclass::ClearPinPF5() {
  PORTF &= (~0x20);
}

void RapidFireIOclass::ClearPinPF6() {
  PORTF &= (~0x40);
}

void RapidFireIOclass::ClearPinPF7() {
  PORTF &= (~0x80);
}

void RapidFireIOclass::ClearPinPG0() {
  PORTG &= (~0x01);
}

void RapidFireIOclass::ClearPinPG1() {
  PORTG &= (~0x02);
}

void RapidFireIOclass::ClearPinPG2() {
  PORTG &= (~0x04);
}

void RapidFireIOclass::ClearPinPG3() {
  PORTG &= (~0x08);
}

void RapidFireIOclass::ClearPinPG4() {
  PORTG &= (~0x10);
}

void RapidFireIOclass::ClearPinPG5() {
  PORTG &= (~0x20);
}

void RapidFireIOclass::ClearPinPH0() {
  PORTH &= (~0x01);
}

void RapidFireIOclass::ClearPinPH1() {
  PORTH &= (~0x02);
}

void RapidFireIOclass::ClearPinPH2() {
  PORTH &= (~0x04);
}

void RapidFireIOclass::ClearPinPH3() {
  PORTH &= (~0x08);
}

void RapidFireIOclass::ClearPinPH4() {
  PORTH &= (~0x10);
}

void RapidFireIOclass::ClearPinPH5() {
  PORTH &= (~0x20);
}

void RapidFireIOclass::ClearPinPH6() {
  PORTH &= (~0x40);
}

void RapidFireIOclass::ClearPinPH7() {
  PORTH &= (~0x80);
}


void RapidFireIOclass::ClearPinPJ0() {
  PORTJ &= (~0x01);
}

void RapidFireIOclass::ClearPinPJ1() {
  PORTJ &= (~0x02);
}

void RapidFireIOclass::ClearPinPJ2() {
  PORTJ &= (~0x04);
}

void RapidFireIOclass::ClearPinPJ3() {
  PORTJ &= (~0x08);
}

void RapidFireIOclass::ClearPinPJ4() {
  PORTJ &= (~0x10);
}

void RapidFireIOclass::ClearPinPJ5() {
  PORTJ &= (~0x20);
}

void RapidFireIOclass::ClearPinPJ6() {
  PORTJ &= (~0x40);
}

void RapidFireIOclass::ClearPinPJ7() {
  PORTJ &= (~0x80);
}

void RapidFireIOclass::ClearPinPK0() {
  PORTK &= (~0x01);
}

void RapidFireIOclass::ClearPinPK1() {
  PORTK &= (~0x02);
}

void RapidFireIOclass::ClearPinPK2() {
  PORTK &= (~0x04);
}

void RapidFireIOclass::ClearPinPK3() {
  PORTK &= (~0x08);
}

void RapidFireIOclass::ClearPinPK4() {
  PORTK &= (~0x10);
}

void RapidFireIOclass::ClearPinPK5() {
  PORTK &= (~0x20);
}

void RapidFireIOclass::ClearPinPK6() {
  PORTK &= (~0x40);
}

void RapidFireIOclass::ClearPinPK7() {
  PORTK &= (~0x80);
}

void RapidFireIOclass::ClearPinPL0() {
  PORTL &= (~0x01);
}

void RapidFireIOclass::ClearPinPL1() {
  PORTL &= (~0x02);
}

void RapidFireIOclass::ClearPinPL2() {
  PORTL &= (~0x04);
}

void RapidFireIOclass::ClearPinPL3() {
  PORTL &= (~0x08);
}

void RapidFireIOclass::ClearPinPL4() {
  PORTL &= (~0x10);
}

void RapidFireIOclass::ClearPinPL5() {
  PORTL &= (~0x20);
}

void RapidFireIOclass::ClearPinPL6() {
  PORTL &= (~0x40);
}

void RapidFireIOclass::ClearPinPL7() {
  PORTL &= (~0x80);
}

void RapidFireIOclass::TogglePinPA0() {
  PORTA ^= 0x01;
}

void RapidFireIOclass::TogglePinPA1() {
  PORTA ^= 0x02;
}

void RapidFireIOclass::TogglePinPA2() {
  PORTA ^= 0x04;
}

void RapidFireIOclass::TogglePinPA3() {
  PORTA ^= 0x08;
}

void RapidFireIOclass::TogglePinPA4() {
  PORTA ^= 0x10;
}

void RapidFireIOclass::TogglePinPA5() {
  PORTA ^= 0x20;
}

void RapidFireIOclass::TogglePinPA6() {
  PORTA ^= 0x40;
}

void RapidFireIOclass::TogglePinPA7() {
  PORTA ^= 0x80;
}

void RapidFireIOclass::TogglePinPB0() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePinPB1() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePinPB2() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePinPB3() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePinPB4() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePinPB5() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePinPB6() {
  PORTB ^= 0x40;
}

void RapidFireIOclass::TogglePinPB7() {
  PORTB ^= 0x80;
}

void RapidFireIOclass::TogglePinPC0() {
  PORTC ^= 0x01;
}

void RapidFireIOclass::TogglePinPC1() {
  PORTC ^= 0x02;
}

void RapidFireIOclass::TogglePinPC2() {
  PORTC ^= 0x04;
}

void RapidFireIOclass::TogglePinPC3() {
  PORTC ^= 0x08;
}

void RapidFireIOclass::TogglePinPC4() {
  PORTC ^= 0x10;
}

void RapidFireIOclass::TogglePinPC5() {
  PORTC ^= 0x20;
}

void RapidFireIOclass::TogglePinPC6() {
  PORTC ^= 0x40;
}

void RapidFireIOclass::TogglePinPC7() {
  PORTC ^= 0x80;
}

void RapidFireIOclass::TogglePinPD0() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePinPD1() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePinPD2() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePinPD3() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePinPD4() {
  PORTD ^= 0x10;
}

void RapidFireIOclass::TogglePinPD5() {
  PORTD ^= 0x20;
}

void RapidFireIOclass::TogglePinPD6() {
  PORTD ^= 0x40;
}

void RapidFireIOclass::TogglePinPD7() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::TogglePinPE0() {
  PORTE ^= 0x01;
}

void RapidFireIOclass::TogglePinPE1() {
  PORTE ^= 0x02;
}

void RapidFireIOclass::TogglePinPE2() {
  PORTE ^= 0x04;
}

void RapidFireIOclass::TogglePinPE3() {
  PORTE ^= 0x08;
}

void RapidFireIOclass::TogglePinPE4() {
  PORTE ^= 0x10;
}

void RapidFireIOclass::TogglePinPE5() {
  PORTE ^= 0x20;
}

void RapidFireIOclass::TogglePinPE6() {
  PORTE ^= 0x40;
}

void RapidFireIOclass::TogglePinPE7() {
  PORTE ^= 0x80;
}

void RapidFireIOclass::TogglePinPF0() {
  PORTF ^= 0x01;
}

void RapidFireIOclass::TogglePinPF1() {
  PORTF ^= 0x02;
}

void RapidFireIOclass::TogglePinPF2() {
  PORTF ^= 0x04;
}

void RapidFireIOclass::TogglePinPF3() {
  PORTF ^= 0x08;
}

void RapidFireIOclass::TogglePinPF4() {
  PORTF ^= 0x10;
}

void RapidFireIOclass::TogglePinPF5() {
  PORTF ^= 0x20;
}

void RapidFireIOclass::TogglePinPF6() {
  PORTF ^= 0x40;
}

void RapidFireIOclass::TogglePinPF7() {
  PORTF ^= 0x80;
}

void RapidFireIOclass::TogglePinPG0() {
  PORTG ^= 0x01;
}

void RapidFireIOclass::TogglePinPG1() {
  PORTG ^= 0x02;
}

void RapidFireIOclass::TogglePinPG2() {
  PORTG ^= 0x04;
}

void RapidFireIOclass::TogglePinPG3() {
  PORTG ^= 0x08;
}

void RapidFireIOclass::TogglePinPG4() {
  PORTG ^= 0x10;
}

void RapidFireIOclass::TogglePinPG5() {
  PORTG ^= 0x20;
}

void RapidFireIOclass::TogglePinPH0() {
  PORTH ^= 0x01;
}

void RapidFireIOclass::TogglePinPH1() {
  PORTH ^= 0x02;
}

void RapidFireIOclass::TogglePinPH2() {
  PORTH ^= 0x04;
}

void RapidFireIOclass::TogglePinPH3() {
  PORTH ^= 0x08;
}

void RapidFireIOclass::TogglePinPH4() {
  PORTH ^= 0x10;
}

void RapidFireIOclass::TogglePinPH5() {
  PORTH ^= 0x20;
}

void RapidFireIOclass::TogglePinPH6() {
  PORTH ^= 0x40;
}

void RapidFireIOclass::TogglePinPH7() {
  PORTH ^= 0x80;
}

void RapidFireIOclass::TogglePinPJ0() {
  PORTJ ^= 0x01;
}

void RapidFireIOclass::TogglePinPJ1() {
  PORTJ ^= 0x02;
}

void RapidFireIOclass::TogglePinPJ2() {
  PORTJ ^= 0x04;
}

void RapidFireIOclass::TogglePinPJ3() {
  PORTJ ^= 0x08;
}

void RapidFireIOclass::TogglePinPJ4() {
  PORTJ ^= 0x10;
}

void RapidFireIOclass::TogglePinPJ5() {
  PORTJ ^= 0x20;
}

void RapidFireIOclass::TogglePinPJ6() {
  PORTJ ^= 0x40;
}

void RapidFireIOclass::TogglePinPJ7() {
  PORTJ ^= 0x80;
}

void RapidFireIOclass::TogglePinPK0() {
  PORTK ^= 0x01;
}

void RapidFireIOclass::TogglePinPK1() {
  PORTK ^= 0x02;
}

void RapidFireIOclass::TogglePinPK2() {
  PORTK ^= 0x04;
}

void RapidFireIOclass::TogglePinPK3() {
  PORTK ^= 0x08;
}

void RapidFireIOclass::TogglePinPK4() {
  PORTK ^= 0x10;
}

void RapidFireIOclass::TogglePinPK5() {
  PORTK ^= 0x20;
}

void RapidFireIOclass::TogglePinPK6() {
  PORTK ^= 0x40;
}

void RapidFireIOclass::TogglePinPK7() {
  PORTK ^= 0x80;
}

void RapidFireIOclass::TogglePinPL0() {
  PORTL ^= 0x01;
}

void RapidFireIOclass::TogglePinPL1() {
  PORTL ^= 0x02;
}

void RapidFireIOclass::TogglePinPL2() {
  PORTL ^= 0x04;
}

void RapidFireIOclass::TogglePinPL3() {
  PORTL ^= 0x08;
}

void RapidFireIOclass::TogglePinPL4() {
  PORTL ^= 0x10;
}

void RapidFireIOclass::TogglePinPL5() {
  PORTL ^= 0x20;
}

void RapidFireIOclass::TogglePinPL6() {
  PORTL ^= 0x40;
}

void RapidFireIOclass::TogglePinPL7() {
  PORTL ^= 0x80;
}

void RapidFireIOclass::SetInputStatePinPA0() {
  DDRA &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPA1() {
  DDRA &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPA2() {
  DDRA &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPA3() {
  DDRA &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPA4() {
  DDRA &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPA5() {
  DDRA &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPA6() {
  DDRA &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPA7() {
  DDRA &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPB0() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPB1() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPB2() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPB3() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPB4() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPB5() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPB6() {
  DDRB &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPB7() {
  DDRB &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPC0() {
  DDRC &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPC1() {
  DDRC &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPC2() {
  DDRC &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPC3() {
  DDRC &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPC4() {
  DDRC &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPC5() {
  DDRC &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPC6() {
  DDRC &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPC7() {
  DDRC &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPD0() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPD1() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPD2() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPD3() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPD4() {
  DDRD &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPD5() {
  DDRD &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPD6() {
  DDRD &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPD7() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPE0() {
  DDRE &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPE1() {
  DDRE &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPE2() {
  DDRE &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPE3() {
  DDRE &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPE4() {
  DDRE &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPE5() {
  DDRE &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPE6() {
  DDRE &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPE7() {
  DDRE &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPF0() {
  DDRF &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPF1() {
  DDRF &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPF2() {
  DDRF &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPF3() {
  DDRF &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPF4() {
  DDRF &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPF5() {
  DDRF &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPF6() {
  DDRF &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPF7() {
  DDRF &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPG0() {
  DDRG &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPG1() {
  DDRG &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPG2() {
  DDRG &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPG3() {
  DDRG &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPG4() {
  DDRG &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPG5() {
  DDRG &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPH0() {
  DDRH &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPH1() {
  DDRH &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPH2() {
  DDRH &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPH3() {
  DDRH &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPH4() {
  DDRH &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPH5() {
  DDRH &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPH6() {
  DDRH &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPH7() {
  DDRH &= (~0x80);
}


void RapidFireIOclass::SetInputStatePinPJ0() {
  DDRJ &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPJ1() {
  DDRJ &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPJ2() {
  DDRJ &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPJ3() {
  DDRJ &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPJ4() {
  DDRJ &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPJ5() {
  DDRJ &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPJ6() {
  DDRJ &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPJ7() {
  DDRJ &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPK0() {
  DDRK &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPK1() {
  DDRK &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPK2() {
  DDRK &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPK3() {
  DDRK &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPK4() {
  DDRK &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPK5() {
  DDRK &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPK6() {
  DDRK &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPK7() {
  DDRK &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPL0() {
  DDRL &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPL1() {
  DDRL &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPL2() {
  DDRL &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPL3() {
  DDRL &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPL4() {
  DDRL &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPL5() {
  DDRL &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPL6() {
  DDRL &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPL7() {
  DDRL &= (~0x80);
}

void RapidFireIOclass::SetOutputStatePinPA0() {
  DDRA |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPA1() {
  DDRA |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPA2() {
  DDRA |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPA3() {
  DDRA |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPA4() {
  DDRA |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPA5() {
  DDRA |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPA6() {
  DDRA |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPA7() {
  DDRA |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPB0() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPB1() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPB4() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPB5() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPB6() {
  DDRB |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPB7() {
  DDRB |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPC0() {
  DDRC |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPC1() {
  DDRC |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPC2() {
  DDRC |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPC3() {
  DDRC |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPC4() {
  DDRC |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPC5() {
  DDRC |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPC6() {
  DDRC |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPC7() {
  DDRC |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPD0() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPD1() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPD2() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPD3() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPD4() {
  DDRD |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPD5() {
  DDRD |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPD6() {
  DDRD |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPD7() {
  DDRD |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPE0() {
  DDRE |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPE1() {
  DDRE |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPE2() {
  DDRE |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPE3() {
  DDRE |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPE4() {
  DDRE |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPE5() {
  DDRE |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPE6() {
  DDRE |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPE7() {
  DDRE |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPF0() {
  DDRF |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPF1() {
  DDRF |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPF2() {
  DDRF |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPF3() {
  DDRF |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPF4() {
  DDRF |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPF5() {
  DDRF |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPF6() {
  DDRF |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPF7() {
  DDRF |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPG0() {
  DDRG |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPG1() {
  DDRG |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPG2() {
  DDRG |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPG3() {
  DDRG |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPG4() {
  DDRG |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPG5() {
  DDRG |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPH0() {
  DDRH |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPH1() {
  DDRH |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPH2() {
  DDRH |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPH3() {
  DDRH |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPH4() {
  DDRH |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPH5() {
  DDRH |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPH6() {
  DDRH |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPH7() {
  DDRH |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPJ0() {
  DDRJ |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPJ1() {
  DDRJ |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPJ2() {
  DDRJ |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPJ3() {
  DDRJ |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPJ4() {
  DDRJ |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPJ5() {
  DDRJ |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPJ6() {
  DDRJ |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPJ7() {
  DDRJ |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPK0() {
  DDRK |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPK1() {
  DDRK |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPK2() {
  DDRK |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPK3() {
  DDRK |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPK4() {
  DDRK |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPK5() {
  DDRK |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPK6() {
  DDRK |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPK7() {
  DDRK |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPL0() {
  DDRL |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPL1() {
  DDRL |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPL2() {
  DDRL |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPL3() {
  DDRL |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPL4() {
  DDRL |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPL5() {
  DDRL |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPL6() {
  DDRL |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPL7() {
  DDRL |= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPA0() {
  DDRA ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPA1() {
  DDRA ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPA2() {
  DDRA ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPA3() {
  DDRA ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPA4() {
  DDRA ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPA5() {
  DDRA ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPA6() {
  DDRA ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPA7() {
  DDRA ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPB0() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPB1() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPB4() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPB5() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPB6() {
  DDRB ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPB7() {
  DDRB ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPC0() {
  DDRC ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPC1() {
  DDRC ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPC2() {
  DDRC ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPC3() {
  DDRC ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPC4() {
  DDRC ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPC5() {
  DDRC ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPC6() {
  DDRC ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPC7() {
  DDRC ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPD0() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPD1() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPD2() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPD3() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPD4() {
  DDRD ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPD5() {
  DDRD ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPD6() {
  DDRD ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPD7() {
  DDRD ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPE0() {
  DDRE ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPE1() {
  DDRE ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPE2() {
  DDRE ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPE3() {
  DDRE ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPE4() {
  DDRE ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPE5() {
  DDRE ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPE6() {
  DDRE ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPE7() {
  DDRE ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPF0() {
  DDRF ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPF1() {
  DDRF ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPF2() {
  DDRF ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPF3() {
  DDRF ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPF4() {
  DDRF ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPF5() {
  DDRF ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPF6() {
  DDRF ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPF7() {
  DDRF ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPG0() {
  DDRG ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPG1() {
  DDRG ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPG2() {
  DDRG ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPG3() {
  DDRG ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPG4() {
  DDRG ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPG5() {
  DDRG ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPH0() {
  DDRH ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPH1() {
  DDRH ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPH2() {
  DDRH ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPH3() {
  DDRH ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPH4() {
  DDRH ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPH5() {
  DDRH ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPH6() {
  DDRH ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPH7() {
  DDRH ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPJ0() {
  DDRJ ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPJ1() {
  DDRJ ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPJ2() {
  DDRJ ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPJ3() {
  DDRJ ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPJ4() {
  DDRJ ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPJ5() {
  DDRJ ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPJ6() {
  DDRJ ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPJ7() {
  DDRJ ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPK0() {
  DDRK ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPK1() {
  DDRK ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPK2() {
  DDRK ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPK3() {
  DDRK ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPK4() {
  DDRK ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPK5() {
  DDRK ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPK6() {
  DDRK ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPK7() {
  DDRK ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPL0() {
  DDRL ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPL1() {
  DDRL ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPL2() {
  DDRL ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPL3() {
  DDRL ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPL4() {
  DDRL ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPL5() {
  DDRL ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPL6() {
  DDRL ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPL7() {
  DDRL ^= 0x80;
}

uint8_t RapidFireIOclass::ReadPinPA0() {
  uint8_t data = PINA; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPA1() {
  uint8_t data = PINA; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPA2() {
  uint8_t data = PINA; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPA3() {
  uint8_t data = PINA; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPA4() {
  uint8_t data = PINA; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPA5() {
  uint8_t data = PINA; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPA6() {
  uint8_t data = PINA; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPA7() {
  uint8_t data = PINA; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPB0() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPB1() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPB2() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPB3() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPB4() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPB5() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPB6() {
  uint8_t data = PINB; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPB7() {
  uint8_t data = PINB; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPC0() {
  uint8_t data = PINC; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPC1() {
  uint8_t data = PINC; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPC2() {
  uint8_t data = PINC; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPC3() {
  uint8_t data = PINC; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPC4() {
  uint8_t data = PINC; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPC5() {
  uint8_t data = PINC; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPC6() {
  uint8_t data = PINC; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPC7() {
  uint8_t data = PINC; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPD0() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPD1() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPD2() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPD3() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPD4() {
  uint8_t data = PIND; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPD5() {
  uint8_t data = PIND; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPD6() {
  uint8_t data = PIND; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPD7() {
  uint8_t data = PIND; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPE0() {
  uint8_t data = PINE; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPE1() {
  uint8_t data = PINE; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPE2() {
  uint8_t data = PINE; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPE3() {
  uint8_t data = PINE; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPE4() {
  uint8_t data = PINE; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPE5() {
  uint8_t data = PINE; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPE6() {
  uint8_t data = PINE; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPE7() {
  uint8_t data = PINE; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPF0() {
  uint8_t data = PINF; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPF1() {
  uint8_t data = PINF; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPF2() {
  uint8_t data = PINF; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPF3() {
  uint8_t data = PINF; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPF4() {
  uint8_t data = PINF; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPF5() {
  uint8_t data = PINF; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPF6() {
  uint8_t data = PINF; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPF7() {
  uint8_t data = PINF; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPG0() {
  uint8_t data = PING; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPG1() {
  uint8_t data = PING; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPG2() {
  uint8_t data = PING; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPG3() {
  uint8_t data = PING; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPG4() {
  uint8_t data = PING; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPG5() {
  uint8_t data = PING; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPH0() {
  uint8_t data = PINH; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPH1() {
  uint8_t data = PINH; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPH2() {
  uint8_t data = PINH; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPH3() {
  uint8_t data = PINH; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPH4() {
  uint8_t data = PINH; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPH5() {
  uint8_t data = PINH; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPH6() {
  uint8_t data = PINH; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPH7() {
  uint8_t data = PINH; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ0() {
  uint8_t data = PINJ; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ1() {
  uint8_t data = PINJ; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ2() {
  uint8_t data = PINJ; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ3() {
  uint8_t data = PINJ; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ4() {
  uint8_t data = PINJ; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ5() {
  uint8_t data = PINJ; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ6() {
  uint8_t data = PINJ; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPJ7() {
  uint8_t data = PINJ; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPK0() {
  uint8_t data = PINK; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPK1() {
  uint8_t data = PINK; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPK2() {
  uint8_t data = PINK; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPK3() {
  uint8_t data = PINK; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPK4() {
  uint8_t data = PINK; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPK5() {
  uint8_t data = PINK; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPK6() {
  uint8_t data = PINK; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPK7() {
  uint8_t data = PINK; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPL0() {
  uint8_t data = PINL; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPL1() {
  uint8_t data = PINL; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPL2() {
  uint8_t data = PINL; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPL3() {
  uint8_t data = PINL; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPL4() {
  uint8_t data = PINL; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPL5() {
  uint8_t data = PINL; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPL6() {
  uint8_t data = PINL; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPL7() {
  uint8_t data = PINL; data &= 0x80; return data;
}

void RapidFireIOclass::init() {
}

// Leonardo and derivatives
#elif defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__)

void RapidFireIOclass::SetPin0() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPin1() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPin2() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPin3() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPin4() {
  PORTD |= 0x10;
}

void RapidFireIOclass::SetPin5() {
  PORTC |= 0x40;
}

void RapidFireIOclass::SetPin6() {
  PORTD |= 0x80;
}

void RapidFireIOclass::SetPin7() {
  PORTE |= 0x40;
}

void RapidFireIOclass::SetPin8() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPin9() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPin10() {
  PORTB |= 0x40;
}

void RapidFireIOclass::SetPin11() {
  PORTB |= 0x80;
}

void RapidFireIOclass::SetPin12() {
  PORTD |= 0x40;
}

void RapidFireIOclass::SetPin13() {
  PORTC |= 0x80;
}

void RapidFireIOclass::SetPinA0() {
  PORTF |= 0x80;
}

void RapidFireIOclass::SetPinA1() {
  PORTF |= 0x40;
}

void RapidFireIOclass::SetPinA2() {
  PORTF |= 0x20;
}

void RapidFireIOclass::SetPinA3() {
  PORTF |= 0x10;
}

void RapidFireIOclass::SetPinA4() {
  PORTF |= 0x02;
}

void RapidFireIOclass::SetPinA5() {
  PORTF |= 0x01;
}

void RapidFireIOclass::ClearPin0() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPin1() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPin2() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPin3() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPin4() {
  PORTD &= (~0x10);
}

void RapidFireIOclass::ClearPin5() {
  PORTC &= (~0x40);
}

void RapidFireIOclass::ClearPin6() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::ClearPin7() {
  PORTE &= (~0x40);
}

void RapidFireIOclass::ClearPin8() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPin9() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPin10() {
  PORTB &= (~0x40);
}

void RapidFireIOclass::ClearPin11() {
  PORTB &= (~0x80);
}

void RapidFireIOclass::ClearPin12() {
  PORTD &= (~0x40);
}

void RapidFireIOclass::ClearPin13() {
  PORTC &= (~0x80);
}

void RapidFireIOclass::ClearPinA0() {
  PORTF &= (~0x80);
}

void RapidFireIOclass::ClearPinA1() {
  PORTF &= (~0x40);
}

void RapidFireIOclass::ClearPinA2() {
  PORTF &= (~0x20);
}

void RapidFireIOclass::ClearPinA3() {
  PORTF &= (~0x10);
}

void RapidFireIOclass::ClearPinA4() {
  PORTF &= (~0x02);
}

void RapidFireIOclass::ClearPinA5() {
  PORTF &= (~0x01);
}

void RapidFireIOclass::TogglePin0() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePin1() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePin2() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePin3() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePin4() {
  PORTD ^= 0x10;
}

void RapidFireIOclass::TogglePin5() {
  PORTC ^= 0x40;
}

void RapidFireIOclass::TogglePin6() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::TogglePin7() {
  PORTE ^= 0x40;
}

void RapidFireIOclass::TogglePin8() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePin9() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePin10() {
  PORTB ^= 0x40;
}

void RapidFireIOclass::TogglePin11() {
  PORTB ^= 0x80;
}

void RapidFireIOclass::TogglePin12() {
  PORTD ^= 0x40;
}

void RapidFireIOclass::TogglePin13() {
  PORTC ^= 0x80;
}

void RapidFireIOclass::TogglePinA0() {
  PORTF ^= 0x80;
}

void RapidFireIOclass::TogglePinA1() {
  PORTF ^= 0x40;
}

void RapidFireIOclass::TogglePinA2() {
  PORTF ^= 0x20;
}

void RapidFireIOclass::TogglePinA3() {
  PORTF ^= 0x10;
}

void RapidFireIOclass::TogglePinA4() {
  PORTF ^= 0x02;
}

void RapidFireIOclass::TogglePinA5() {
  PORTF ^= 0x01;
}

void RapidFireIOclass::SetInputStatePin0() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin1() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin2() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin3() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin4() {
  DDRD &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin5() {
  DDRC &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin6() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin7() {
  DDRE &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin8() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin9() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePin10() {
  DDRB &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin11() {
  DDRB &= (~0x80);
}

void RapidFireIOclass::SetInputStatePin12() {
  DDRD &= (~0x40);
}

void RapidFireIOclass::SetInputStatePin13() {
  DDRC &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinA0() {
  DDRF &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinA1() {
  DDRF &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinA2() {
  DDRF &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinA3() {
  DDRF &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinA4() {
  DDRF &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinA5() {
  DDRF &= (~0x01);
}

void RapidFireIOclass::SetOutputStatePin0() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin1() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin2() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin3() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin4() {
  DDRD |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin5() {
  DDRC |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin6() {
  DDRD |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin7() {
  DDRE |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin8() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin9() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePin10() {
  DDRB |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin11() {
  DDRB |= 0x80;
}

void RapidFireIOclass::SetOutputStatePin12() {
  DDRD |= 0x40;
}

void RapidFireIOclass::SetOutputStatePin13() {
  DDRC |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinA0() {
  DDRF |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinA1() {
  DDRF |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinA2() {
  DDRF |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinA3() {
  DDRF |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinA4() {
  DDRF |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinA5() {
  DDRF |= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin1() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin2() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin3() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin4() {
  DDRD ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin5() {
  DDRC ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin6() {
  DDRD ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin7() {
  DDRE ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin8() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin9() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin10() {
  DDRB ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin11() {
  DDRB ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePin12() {
  DDRD ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePin13() {
  DDRC ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinA0() {
  DDRF ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinA1() {
  DDRF ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinA2() {
  DDRF ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinA3() {
  DDRF ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinA4() {
  DDRF ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinA5() {
  DDRF ^= 0x01;
}

uint8_t RapidFireIOclass::ReadPin0() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin1() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin2() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin3() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin4() {
  uint8_t data = PIND; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin5() {
  uint8_t data = PINC; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin6() {
  uint8_t data = PIND; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin7() {
  uint8_t data = PINE; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin8() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin9() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPin10() {
  uint8_t data = PINB; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin11() {
  uint8_t data = PINB; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPin12() {
  uint8_t data = PIND; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPin13() {
  uint8_t data = PINC; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinA0() {
  uint8_t data = PINF; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinA1() {
  uint8_t data = PINF; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinA2() {
  uint8_t data = PINF; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinA3() {
  uint8_t data = PINF; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinA4() {
  uint8_t data = PINF; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinA5() {
  uint8_t data = PINF; data &= 0x01; return data;
}

void RapidFireIOclass::SetPinPB0() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPinPB1() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPinPB2() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPinPB3() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPinPB4() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPinPB5() {
  PORTB |= 0x20;
}

void RapidFireIOclass::SetPinPB6() {
  PORTB |= 0x40;
}

void RapidFireIOclass::SetPinPB7() {
  PORTB |= 0x80;
}

void RapidFireIOclass::SetPinPC6() {
  PORTC |= 0x40;
}

void RapidFireIOclass::SetPinPC7() {
  PORTC |= 0x80;
}

void RapidFireIOclass::SetPinPD0() {
  PORTD |= 0x01;
}

void RapidFireIOclass::SetPinPD1() {
  PORTD |= 0x02;
}

void RapidFireIOclass::SetPinPD2() {
  PORTD |= 0x04;
}

void RapidFireIOclass::SetPinPD3() {
  PORTD |= 0x08;
}

void RapidFireIOclass::SetPinPD4() {
  PORTD |= 0x10;
}

void RapidFireIOclass::SetPinPD5() {
  PORTD |= 0x20;
}

void RapidFireIOclass::SetPinPD6() {
  PORTD |= 0x40;
}

void RapidFireIOclass::SetPinPD7() {
  PORTD |= 0x80;
}

void RapidFireIOclass::SetPinPE2() {
  PORTE |= 0x04;
}

void RapidFireIOclass::SetPinPE6() {
  PORTE |= 0x40;
}

void RapidFireIOclass::SetPinPF0() {
  PORTF |= 0x01;
}

void RapidFireIOclass::SetPinPF1() {
  PORTF |= 0x02;
}

void RapidFireIOclass::SetPinPF4() {
  PORTF |= 0x10;
}

void RapidFireIOclass::SetPinPF5() {
  PORTF |= 0x20;
}

void RapidFireIOclass::SetPinPF6() {
  PORTF |= 0x40;
}

void RapidFireIOclass::SetPinPF7() {
  PORTF |= 0x80;
}

void RapidFireIOclass::ClearPinPB0() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPinPB1() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPinPB2() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPinPB3() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPinPB4() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPinPB5() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::ClearPinPB6() {
  PORTB &= (~0x40);
}

void RapidFireIOclass::ClearPinPB7() {
  PORTB &= (~0x80);
}

void RapidFireIOclass::ClearPinPC6() {
  PORTC &= (~0x40);
}

void RapidFireIOclass::ClearPinPC7() {
  PORTC &= (~0x80);
}

void RapidFireIOclass::ClearPinPD0() {
  PORTD &= (~0x01);
}

void RapidFireIOclass::ClearPinPD1() {
  PORTD &= (~0x02);
}

void RapidFireIOclass::ClearPinPD2() {
  PORTD &= (~0x04);
}

void RapidFireIOclass::ClearPinPD3() {
  PORTD &= (~0x08);
}

void RapidFireIOclass::ClearPinPD4() {
  PORTD &= (~0x10);
}

void RapidFireIOclass::ClearPinPD5() {
  PORTD &= (~0x20);
}

void RapidFireIOclass::ClearPinPD6() {
  PORTD &= (~0x40);
}

void RapidFireIOclass::ClearPinPD7() {
  PORTD &= (~0x80);
}

void RapidFireIOclass::ClearPinPE2() {
  PORTE &= (~0x04);
}

void RapidFireIOclass::ClearPinPE6() {
  PORTE &= (~0x40);
}

void RapidFireIOclass::ClearPinPF0() {
  PORTF &= (~0x01);
}

void RapidFireIOclass::ClearPinPF1() {
  PORTF &= (~0x02);
}

void RapidFireIOclass::ClearPinPF4() {
  PORTF &= (~0x10);
}

void RapidFireIOclass::ClearPinPF5() {
  PORTF &= (~0x20);
}

void RapidFireIOclass::ClearPinPF6() {
  PORTF &= (~0x40);
}

void RapidFireIOclass::ClearPinPF7() {
  PORTF &= (~0x80);
}

void RapidFireIOclass::TogglePinPB0() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePinPB1() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePinPB2() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePinPB3() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePinPB4() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePinPB5() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::TogglePinPB6() {
  PORTB ^= 0x40;
}

void RapidFireIOclass::TogglePinPB7() {
  PORTB ^= 0x80;
}

void RapidFireIOclass::TogglePinPC6() {
  PORTC ^= 0x40;
}

void RapidFireIOclass::TogglePinPC7() {
  PORTC ^= 0x80;
}

void RapidFireIOclass::TogglePinPD0() {
  PORTD ^= 0x01;
}

void RapidFireIOclass::TogglePinPD1() {
  PORTD ^= 0x02;
}

void RapidFireIOclass::TogglePinPD2() {
  PORTD ^= 0x04;
}

void RapidFireIOclass::TogglePinPD3() {
  PORTD ^= 0x08;
}

void RapidFireIOclass::TogglePinPD4() {
  PORTD ^= 0x10;
}

void RapidFireIOclass::TogglePinPD5() {
  PORTD ^= 0x20;
}

void RapidFireIOclass::TogglePinPD6() {
  PORTD ^= 0x40;
}

void RapidFireIOclass::TogglePinPD7() {
  PORTD ^= 0x80;
}

void RapidFireIOclass::TogglePinPE2() {
  PORTE ^= 0x04;
}

void RapidFireIOclass::TogglePinPE6() {
  PORTE ^= 0x40;
}

void RapidFireIOclass::TogglePinPF0() {
  PORTF ^= 0x01;
}

void RapidFireIOclass::TogglePinPF1() {
  PORTF ^= 0x02;
}

void RapidFireIOclass::TogglePinPF4() {
  PORTF ^= 0x10;
}

void RapidFireIOclass::TogglePinPF5() {
  PORTF ^= 0x20;
}

void RapidFireIOclass::TogglePinPF6() {
  PORTF ^= 0x40;
}

void RapidFireIOclass::TogglePinPF7() {
  PORTF ^= 0x80;
}

void RapidFireIOclass::SetInputStatePinPB0() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPB1() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPB2() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPB3() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPB4() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPB5() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPB6() {
  DDRB &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPB7() {
  DDRB &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPC6() {
  DDRC &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPC7() {
  DDRC &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPD0() {
  DDRD &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPD1() {
  DDRD &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPD2() {
  DDRD &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPD3() {
  DDRD &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPD4() {
  DDRD &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPD5() {
  DDRD &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPD6() {
  DDRD &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPD7() {
  DDRD &= (~0x80);
}

void RapidFireIOclass::SetInputStatePinPE2() {
  DDRE &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPE6() {
  DDRE &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPF0() {
  DDRF &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPF1() {
  DDRF &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPF4() {
  DDRF &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPF5() {
  DDRF &= (~0x20);
}

void RapidFireIOclass::SetInputStatePinPF6() {
  DDRF &= (~0x40);
}

void RapidFireIOclass::SetInputStatePinPF7() {
  DDRF &= (~0x80);
}

void RapidFireIOclass::SetOutputStatePinPB0() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPB1() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPB4() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPB5() {
  DDRB |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPB6() {
  DDRB |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPB7() {
  DDRB |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPC6() {
  DDRC |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPC7() {
  DDRC |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPD0() {
  DDRD |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPD1() {
  DDRD |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPD2() {
  DDRD |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPD3() {
  DDRD |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPD4() {
  DDRD |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPD5() {
  DDRD |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPD6() {
  DDRD |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPD7() {
  DDRD |= 0x80;
}

void RapidFireIOclass::SetOutputStatePinPE2() {
  DDRE |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPE6() {
  DDRE |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPF0() {
  DDRF |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPF1() {
  DDRF |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPF4() {
  DDRF |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPF5() {
  DDRF |= 0x20;
}

void RapidFireIOclass::SetOutputStatePinPF6() {
  DDRF |= 0x40;
}

void RapidFireIOclass::SetOutputStatePinPF7() {
  DDRF |= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPB0() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPB1() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPB4() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPB5() {
  DDRB ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPB6() {
  DDRB ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPB7() {
  DDRB ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPC6() {
  DDRC ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPC7() {
  DDRC ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPD0() {
  DDRD ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPD1() {
  DDRD ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPD2() {
  DDRD ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPD3() {
  DDRD ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPD4() {
  DDRD ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPD5() {
  DDRD ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPD6() {
  DDRD ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPD7() {
  DDRD ^= 0x80;
}

void RapidFireIOclass::ToggleIOstatePinPE2() {
  DDRE ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPE6() {
  DDRE ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPF0() {
  DDRF ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPF1() {
  DDRF ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPF4() {
  DDRF ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPF5() {
  DDRF ^= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPF6() {
  DDRF ^= 0x40;
}

void RapidFireIOclass::ToggleIOstatePinPF7() {
  DDRF ^= 0x80;
}

uint8_t RapidFireIOclass::ReadPinPB0() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPB1() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPB2() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPB3() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPB4() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPB5() {
  uint8_t data = PINB; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPB6() {
  uint8_t data = PINB; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPB7() {
  uint8_t data = PINB; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPC6() {
  uint8_t data = PINC; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPC7() {
  uint8_t data = PINC; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPD0() {
  uint8_t data = PIND; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPD1() {
  uint8_t data = PIND; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPD2() {
  uint8_t data = PIND; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPD3() {
  uint8_t data = PIND; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPD4() {
  uint8_t data = PIND; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPD5() {
  uint8_t data = PIND; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPD6() {
  uint8_t data = PIND; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPD7() {
  uint8_t data = PIND; data &= 0x80; return data;
}

uint8_t RapidFireIOclass::ReadPinPE2() {
  uint8_t data = PINE; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPE6() {
  uint8_t data = PINE; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPF0() {
  uint8_t data = PINF; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPF1() {
  uint8_t data = PINF; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPF4() {
  uint8_t data = PINF; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPF5() {
  uint8_t data = PINF; data &= 0x20; return data;
}

uint8_t RapidFireIOclass::ReadPinPF6() {
  uint8_t data = PINF; data &= 0x40; return data;
}

uint8_t RapidFireIOclass::ReadPinPF7() {
  uint8_t data = PINF; data &= 0x80; return data;
}

void RapidFireIOclass::init() {
}

// Zero and derivatives
#elif defined(ARDUINO_SAMD_ZERO)

void RapidFireIOclass::SetPin0() { // PA11
  REG_PORT_OUTSET0 = 0x00000800;
}

void RapidFireIOclass::SetPin1() { // PA10
  REG_PORT_OUTSET0 = 0x00000400;
}

void RapidFireIOclass::SetPin2() { // PA14
  REG_PORT_OUTSET0 = 0x00004000;
}

void RapidFireIOclass::SetPin3() { // PA9
  REG_PORT_OUTSET0 = 0x00000200;
}

void RapidFireIOclass::SetPin4() { // PA8
  REG_PORT_OUTSET0 = 0x00000100;
}

void RapidFireIOclass::SetPin5() { // PA15
  REG_PORT_OUTSET0 = 0x00008000;
}

void RapidFireIOclass::SetPin6() { // PA20
  REG_PORT_OUTSET0 = 0x00100000;
}

void RapidFireIOclass::SetPin7() { // PA21
  REG_PORT_OUTSET0 = 0x00200000;
}

void RapidFireIOclass::SetPin8() { // PA6
  REG_PORT_OUTSET0 = 0x00000040;
}

void RapidFireIOclass::SetPin9() { // PA7
  REG_PORT_OUTSET0 = 0x00000080;
}

void RapidFireIOclass::SetPin10() { // PA18
  REG_PORT_OUTSET0 = 0x00040000;
}

void RapidFireIOclass::SetPin11() { // PA16
  REG_PORT_OUTSET0 = 0x00010000;
}

void RapidFireIOclass::SetPin12() { // PA19
  REG_PORT_OUTSET0 = 0x00080000;
}

void RapidFireIOclass::SetPin13() { // PA17
  REG_PORT_OUTSET0 = 0x00020000;
}

void RapidFireIOclass::SetPinA0() { // PA2
  REG_PORT_OUTSET0 = 0x00000004;
}

void RapidFireIOclass::SetPinA1() { // PB8
  REG_PORT_OUTSET1 = 0x00000100;
}

void RapidFireIOclass::SetPinA2() { // PB9
  REG_PORT_OUTSET1 = 0x00000200;
}

void RapidFireIOclass::SetPinA3() { // PA4
  REG_PORT_OUTSET0 = 0x00000010;
}

void RapidFireIOclass::SetPinA4() { // PA5
  REG_PORT_OUTSET0 = 0x00000020;
}

void RapidFireIOclass::SetPinA5() { // PB2
  REG_PORT_OUTSET1 = 0x00000004;
}

void RapidFireIOclass::ClearPin0() {
  REG_PORT_OUTCLR0 = 0x00000800;
}

void RapidFireIOclass::ClearPin1() {
  REG_PORT_OUTCLR0 = 0x00000400;
}

void RapidFireIOclass::ClearPin2() {
  REG_PORT_OUTCLR0 = 0x00004000;
}

void RapidFireIOclass::ClearPin3() {
  REG_PORT_OUTCLR0 = 0x00000200;
}

void RapidFireIOclass::ClearPin4() {
  REG_PORT_OUTCLR0 = 0x00000100;
}

void RapidFireIOclass::ClearPin5() {
  REG_PORT_OUTCLR0 = 0x00008000;
}

void RapidFireIOclass::ClearPin6() {
  REG_PORT_OUTCLR0 = 0x00100000;
}

void RapidFireIOclass::ClearPin7() {
  REG_PORT_OUTCLR0 = 0x00200000;
}

void RapidFireIOclass::ClearPin8() {
  REG_PORT_OUTCLR0 = 0x00000040;
}

void RapidFireIOclass::ClearPin9() {
  REG_PORT_OUTCLR0 = 0x00000080;
}

void RapidFireIOclass::ClearPin10() {
  REG_PORT_OUTCLR0 = 0x00040000;
}

void RapidFireIOclass::ClearPin11() {
  REG_PORT_OUTCLR0 = 0x00010000;
}

void RapidFireIOclass::ClearPin12() {
  REG_PORT_OUTCLR0 = 0x00080000;
}

void RapidFireIOclass::ClearPin13() {
  REG_PORT_OUTCLR0 = 0x00020000;
}

void RapidFireIOclass::ClearPinA0() {
  REG_PORT_OUTCLR0 = 0x00000004;
}

void RapidFireIOclass::ClearPinA1() {
  REG_PORT_OUTCLR1 = 0x00000100;
}

void RapidFireIOclass::ClearPinA2() {
  REG_PORT_OUTCLR1 = 0x00000200;
}

void RapidFireIOclass::ClearPinA3() {
  REG_PORT_OUTCLR0 = 0x00000010;
}

void RapidFireIOclass::ClearPinA4() {
  REG_PORT_OUTCLR0 = 0x00000020;
}

void RapidFireIOclass::ClearPinA5() {
  REG_PORT_OUTCLR1 = 0x00000004;
}

void RapidFireIOclass::TogglePin0() {
  REG_PORT_OUTTGL0 = 0x00000800;
}

void RapidFireIOclass::TogglePin1() {
  REG_PORT_OUTTGL0 = 0x00000400;
}

void RapidFireIOclass::TogglePin2() {
  REG_PORT_OUTTGL0 = 0x00004000;
}

void RapidFireIOclass::TogglePin3() {
  REG_PORT_OUTTGL0 = 0x00000200;
}

void RapidFireIOclass::TogglePin4() {
  REG_PORT_OUTTGL0 = 0x00000100;
}

void RapidFireIOclass::TogglePin5() {
  REG_PORT_OUTTGL0 = 0x00008000;
}

void RapidFireIOclass::TogglePin6() {
  REG_PORT_OUTTGL0 = 0x00100000;
}

void RapidFireIOclass::TogglePin7() {
  REG_PORT_OUTTGL0 = 0x00200000;
}

void RapidFireIOclass::TogglePin8() {
  REG_PORT_OUTTGL0 = 0x00000040;
}

void RapidFireIOclass::TogglePin9() {
  REG_PORT_OUTTGL0 = 0x00000080;
}

void RapidFireIOclass::TogglePin10() {
  REG_PORT_OUTTGL0 = 0x00040000;
}

void RapidFireIOclass::TogglePin11() {
  REG_PORT_OUTTGL0 = 0x00010000;
}

void RapidFireIOclass::TogglePin12() {
  REG_PORT_OUTTGL0 = 0x00080000;
}

void RapidFireIOclass::TogglePin13() {
  REG_PORT_OUTTGL0 = 0x00020000;
}

void RapidFireIOclass::TogglePinA0() {
  REG_PORT_OUTTGL0 = 0x00000004;
}

void RapidFireIOclass::TogglePinA1() {
  REG_PORT_OUTTGL1 = 0x00000100;
}

void RapidFireIOclass::TogglePinA2() {
  REG_PORT_OUTTGL1 = 0x00000200;
}

void RapidFireIOclass::TogglePinA3() {
  REG_PORT_OUTTGL0 = 0x00000010;
}

void RapidFireIOclass::TogglePinA4() {
  REG_PORT_OUTTGL0 = 0x00000020;
}

void RapidFireIOclass::TogglePinA5() {
  REG_PORT_OUTTGL1 = 0x00000004;
}

void RapidFireIOclass::SetInputStatePin0() {
  REG_PORT_DIRCLR0 = 0x00000800;
}

void RapidFireIOclass::SetInputStatePin1() {
  REG_PORT_DIRCLR0 = 0x00000400;
}

void RapidFireIOclass::SetInputStatePin2() {
  REG_PORT_DIRCLR0 = 0x00004000;
}

void RapidFireIOclass::SetInputStatePin3() {
  REG_PORT_DIRCLR0 = 0x00000200;
}

void RapidFireIOclass::SetInputStatePin4() {
  REG_PORT_DIRCLR0 = 0x00000100;
}

void RapidFireIOclass::SetInputStatePin5() {
  REG_PORT_DIRCLR0 = 0x00008000;
}

void RapidFireIOclass::SetInputStatePin6() {
  REG_PORT_DIRCLR0 = 0x00100000;
}

void RapidFireIOclass::SetInputStatePin7() {
  REG_PORT_DIRCLR0 = 0x00200000;
}

void RapidFireIOclass::SetInputStatePin8() {
  REG_PORT_DIRCLR0 = 0x00000040;
}

void RapidFireIOclass::SetInputStatePin9() {
  REG_PORT_DIRCLR0 = 0x00000080;
}

void RapidFireIOclass::SetInputStatePin10() {
  REG_PORT_DIRCLR0 = 0x00040000;
}

void RapidFireIOclass::SetInputStatePin11() {
  REG_PORT_DIRCLR0 = 0x00010000;
}

void RapidFireIOclass::SetInputStatePin12() {
  REG_PORT_DIRCLR0 = 0x00080000;
}

void RapidFireIOclass::SetInputStatePin13() {
  REG_PORT_DIRCLR0 = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinA0() {
  REG_PORT_DIRCLR0 = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinA1() {
  REG_PORT_DIRCLR1 = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinA2() {
  REG_PORT_DIRCLR1 = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinA3() {
  REG_PORT_DIRCLR0 = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinA4() {
  REG_PORT_DIRCLR0 = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinA5() {
  REG_PORT_DIRCLR1 = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePin0() {
  REG_PORT_DIRSET0 = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePin1() {
  REG_PORT_DIRSET0 = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePin2() {
  REG_PORT_DIRSET0 = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePin3() {
  REG_PORT_DIRSET0 = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePin4() {
  REG_PORT_DIRSET0 = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePin5() {
  REG_PORT_DIRSET0 = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePin6() {
  REG_PORT_DIRSET0 = 0x00100000;
}

void RapidFireIOclass::SetOutputStatePin7() {
  REG_PORT_DIRSET0 = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePin8() {
  REG_PORT_DIRSET0 = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePin9() {
  REG_PORT_DIRSET0 = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePin10() {
  REG_PORT_DIRSET0 = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePin11() {
  REG_PORT_DIRSET0 = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePin12() {
  REG_PORT_DIRSET0 = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePin13() {
  REG_PORT_DIRSET0 = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinA0() {
  REG_PORT_DIRSET0 = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinA1() {
  REG_PORT_DIRSET1 = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinA2() {
  REG_PORT_DIRSET1 = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinA3() {
  REG_PORT_DIRSET0 = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinA4() {
  REG_PORT_DIRSET0 = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinA5() {
  REG_PORT_DIRSET1 = 0x00000004;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  REG_PORT_DIRTGL0 = 0x00000800;
}

void RapidFireIOclass::ToggleIOstatePin1() {
  REG_PORT_DIRTGL0 = 0x00000400;
}

void RapidFireIOclass::ToggleIOstatePin2() {
  REG_PORT_DIRTGL0 = 0x00004000;
}

void RapidFireIOclass::ToggleIOstatePin3() {
  REG_PORT_DIRTGL0 = 0x00000200;
}

void RapidFireIOclass::ToggleIOstatePin4() {
  REG_PORT_DIRTGL0 = 0x00000100;
}

void RapidFireIOclass::ToggleIOstatePin5() {
  REG_PORT_DIRTGL0 = 0x00008000;
}

void RapidFireIOclass::ToggleIOstatePin6() {
  REG_PORT_DIRTGL0 = 0x00100000;
}

void RapidFireIOclass::ToggleIOstatePin7() {
  REG_PORT_DIRTGL0 = 0x00200000;
}

void RapidFireIOclass::ToggleIOstatePin8() {
  REG_PORT_DIRTGL0 = 0x00000040;
}

void RapidFireIOclass::ToggleIOstatePin9() {
  REG_PORT_DIRTGL0 = 0x00000080;
}

void RapidFireIOclass::ToggleIOstatePin10() {
  REG_PORT_DIRTGL0 = 0x00040000;
}

void RapidFireIOclass::ToggleIOstatePin11() {
  REG_PORT_DIRTGL0 = 0x00010000;
}

void RapidFireIOclass::ToggleIOstatePin12() {
  REG_PORT_DIRTGL0 = 0x00080000;
}

void RapidFireIOclass::ToggleIOstatePin13() {
  REG_PORT_DIRTGL0 = 0x00020000;
}

void RapidFireIOclass::ToggleIOstatePinA0() {
  REG_PORT_DIRTGL0 = 0x00000004;
}

void RapidFireIOclass::ToggleIOstatePinA1() {
  REG_PORT_DIRTGL1 = 0x00000100;
}

void RapidFireIOclass::ToggleIOstatePinA2() {
  REG_PORT_DIRTGL1 = 0x00000200;
}

void RapidFireIOclass::ToggleIOstatePinA3() {
  REG_PORT_DIRTGL0 = 0x00000010;
}

void RapidFireIOclass::ToggleIOstatePinA4() {
  REG_PORT_DIRTGL0 = 0x00000020;
}

void RapidFireIOclass::ToggleIOstatePinA5() {
  REG_PORT_DIRTGL1 = 0x00000004;
}

uint32_t RapidFireIOclass::ReadPin0() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPin1() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPin2() {
  uint32_t data = REG_PORT_IN0; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPin3() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPin4() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPin5() {
  uint32_t data = REG_PORT_IN0; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPin6() {
  uint32_t data = REG_PORT_IN0; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPin7() {
  uint32_t data = REG_PORT_IN0; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPin8() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPin9() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPin10() {
  uint32_t data = REG_PORT_IN0; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPin11() {
  uint32_t data = REG_PORT_IN0; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPin12() {
  uint32_t data = REG_PORT_IN0; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPin13() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000007;
}

uint32_t RapidFireIOclass::ReadPinA0() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinA1() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinA2() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinA3() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinA4() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinA5() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000004; return data;
}

void RapidFireIOclass::SetPinPA0() {
  REG_PORT_OUTSET0 = 0x00000001;
}

void RapidFireIOclass::SetPinPA1() {
  REG_PORT_OUTSET0 = 0x00000002;
}

void RapidFireIOclass::SetPinPA2() {
  REG_PORT_OUTSET0 = 0x00000004;
}

void RapidFireIOclass::SetPinPA3() {
  REG_PORT_OUTSET0 = 0x00000008;
}

void RapidFireIOclass::SetPinPA4() {
  REG_PORT_OUTSET0 = 0x00000010;
}

void RapidFireIOclass::SetPinPA5() {
  REG_PORT_OUTSET0 = 0x00000020;
}

void RapidFireIOclass::SetPinPA6() {
  REG_PORT_OUTSET0 = 0x00000040;
}

void RapidFireIOclass::SetPinPA7() {
  REG_PORT_OUTSET0 = 0x00000080;
}

void RapidFireIOclass::SetPinPA8() {
  REG_PORT_OUTSET0 = 0x00000100;
}

void RapidFireIOclass::SetPinPA9() {
  REG_PORT_OUTSET0 = 0x00000200;
}

void RapidFireIOclass::SetPinPA10() {
  REG_PORT_OUTSET0 = 0x00000400;
}

void RapidFireIOclass::SetPinPA11() {
  REG_PORT_OUTSET0 = 0x00000800;
}

void RapidFireIOclass::SetPinPA12() {
  REG_PORT_OUTSET0 = 0x00001000;
}

void RapidFireIOclass::SetPinPA13() {
  REG_PORT_OUTSET0 = 0x00002000;
}

void RapidFireIOclass::SetPinPA14() {
  REG_PORT_OUTSET0 = 0x00004000;
}

void RapidFireIOclass::SetPinPA15() {
  REG_PORT_OUTSET0 = 0x00008000;
}

void RapidFireIOclass::SetPinPA16() {
  REG_PORT_OUTSET0 = 0x00010000;
}

void RapidFireIOclass::SetPinPA17() {
  REG_PORT_OUTSET0 = 0x00020000;
}

void RapidFireIOclass::SetPinPA18() {
  REG_PORT_OUTSET0 = 0x00040000;
}

void RapidFireIOclass::SetPinPA19() {
  REG_PORT_OUTSET0 = 0x00080000;
}

void RapidFireIOclass::SetPinPA20() {
  REG_PORT_OUTSET0 = 0x00100000;
}

void RapidFireIOclass::SetPinPA21() {
  REG_PORT_OUTSET0 = 0x00200000;
}

void RapidFireIOclass::SetPinPA22() {
  REG_PORT_OUTSET0 = 0x00400000;
}

void RapidFireIOclass::SetPinPA23() {
  REG_PORT_OUTSET0 = 0x00800000;
}

void RapidFireIOclass::SetPinPA24() {
  REG_PORT_OUTSET0 = 0x01000000;
}

void RapidFireIOclass::SetPinPA25() {
  REG_PORT_OUTSET0 = 0x02000000;
}

void RapidFireIOclass::SetPinPA27() {
  REG_PORT_OUTSET0 = 0x08000000;
}

void RapidFireIOclass::SetPinPA28() {
  REG_PORT_OUTSET0 = 0x10000000;
}

void RapidFireIOclass::SetPinPA30() {
  REG_PORT_OUTSET0 = 0x40000000;
}

void RapidFireIOclass::SetPinPA31() {
  REG_PORT_OUTSET0 = 0x80000000;
}

void RapidFireIOclass::SetPinPB2() {
  REG_PORT_OUTSET1 = 0x00000004;
}

void RapidFireIOclass::SetPinPB3() {
  REG_PORT_OUTSET1 = 0x00000008;
}

void RapidFireIOclass::SetPinPB8() {
  REG_PORT_OUTSET1 = 0x00000100;
}

void RapidFireIOclass::SetPinPB9() {
  REG_PORT_OUTSET1 = 0x00000200;
}

void RapidFireIOclass::SetPinPB10() {
  REG_PORT_OUTSET1 = 0x00000400;
}

void RapidFireIOclass::SetPinPB11() {
  REG_PORT_OUTSET1 = 0x00000800;
}

void RapidFireIOclass::SetPinPB22() {
  REG_PORT_OUTSET1 = 0x00400000;
}

void RapidFireIOclass::SetPinPB23() {
  REG_PORT_OUTSET1 = 0x00800000;
}

void RapidFireIOclass::ClearPinPA0() {
  REG_PORT_OUTCLR0 = 0x00000001;
}

void RapidFireIOclass::ClearPinPA1() {
  REG_PORT_OUTCLR0 = 0x00000002;
}

void RapidFireIOclass::ClearPinPA2() {
  REG_PORT_OUTCLR0 = 0x00000004;
}

void RapidFireIOclass::ClearPinPA3() {
  REG_PORT_OUTCLR0 = 0x00000008;
}

void RapidFireIOclass::ClearPinPA4() {
  REG_PORT_OUTCLR0 = 0x00000010;
}

void RapidFireIOclass::ClearPinPA5() {
  REG_PORT_OUTCLR0 = 0x00000020;
}

void RapidFireIOclass::ClearPinPA6() {
  REG_PORT_OUTCLR0 = 0x00000040;
}

void RapidFireIOclass::ClearPinPA7() {
  REG_PORT_OUTCLR0 = 0x00000080;
}

void RapidFireIOclass::ClearPinPA8() {
  REG_PORT_OUTCLR0 = 0x00000100;
}

void RapidFireIOclass::ClearPinPA9() {
  REG_PORT_OUTCLR0 = 0x00000200;
}

void RapidFireIOclass::ClearPinPA10() {
  REG_PORT_OUTCLR0 = 0x00000400;
}

void RapidFireIOclass::ClearPinPA11() {
  REG_PORT_OUTCLR0 = 0x00000800;
}

void RapidFireIOclass::ClearPinPA12() {
  REG_PORT_OUTCLR0 = 0x00001000;
}

void RapidFireIOclass::ClearPinPA13() {
  REG_PORT_OUTCLR0 = 0x00002000;
}

void RapidFireIOclass::ClearPinPA14() {
  REG_PORT_OUTCLR0 = 0x00004000;
}

void RapidFireIOclass::ClearPinPA15() {
  REG_PORT_OUTCLR0 = 0x00008000;
}

void RapidFireIOclass::ClearPinPA16() {
  REG_PORT_OUTCLR0 = 0x00010000;
}

void RapidFireIOclass::ClearPinPA17() {
  REG_PORT_OUTCLR0 = 0x00020000;
}

void RapidFireIOclass::ClearPinPA18() {
  REG_PORT_OUTCLR0 = 0x00040000;
}

void RapidFireIOclass::ClearPinPA19() {
  REG_PORT_OUTCLR0 = 0x00080000;
}

void RapidFireIOclass::ClearPinPA20() {
  REG_PORT_OUTCLR0 = 0x00100000;
}

void RapidFireIOclass::ClearPinPA21() {
  REG_PORT_OUTCLR0 = 0x00200000;
}

void RapidFireIOclass::ClearPinPA22() {
  REG_PORT_OUTCLR0 = 0x00400000;
}

void RapidFireIOclass::ClearPinPA23() {
  REG_PORT_OUTCLR0 = 0x00800000;
}

void RapidFireIOclass::ClearPinPA24() {
  REG_PORT_OUTCLR0 = 0x01000000;
}

void RapidFireIOclass::ClearPinPA25() {
  REG_PORT_OUTCLR0 = 0x02000000;
}

void RapidFireIOclass::ClearPinPA27() {
  REG_PORT_OUTCLR0 = 0x08000000;
}

void RapidFireIOclass::ClearPinPA28() {
  REG_PORT_OUTCLR0 = 0x10000000;
}

void RapidFireIOclass::ClearPinPA30() {
  REG_PORT_OUTCLR0 = 0x40000000;
}

void RapidFireIOclass::ClearPinPA31() {
  REG_PORT_OUTCLR0 = 0x80000000;
}

void RapidFireIOclass::ClearPinPB2() {
  REG_PORT_OUTCLR1 = 0x00000004;
}

void RapidFireIOclass::ClearPinPB3() {
  REG_PORT_OUTCLR1 = 0x00000008;
}

void RapidFireIOclass::ClearPinPB8() {
  REG_PORT_OUTCLR1 = 0x00000100;
}

void RapidFireIOclass::ClearPinPB9() {
  REG_PORT_OUTCLR1 = 0x00000200;
}

void RapidFireIOclass::ClearPinPB10() {
  REG_PORT_OUTCLR1 = 0x00000400;
}

void RapidFireIOclass::ClearPinPB11() {
  REG_PORT_OUTCLR1 = 0x00000800;
}

void RapidFireIOclass::ClearPinPB22() {
  REG_PORT_OUTCLR1 = 0x00400000;
}

void RapidFireIOclass::ClearPinPB23() {
  REG_PORT_OUTCLR1 = 0x00800000;
}

void RapidFireIOclass::TogglePinPA0() {
  REG_PORT_OUTTGL0 = 0x00000001;
}

void RapidFireIOclass::TogglePinPA1() {
  REG_PORT_OUTTGL0 = 0x00000002;
}

void RapidFireIOclass::TogglePinPA2() {
  REG_PORT_OUTTGL0 = 0x00000004;
}

void RapidFireIOclass::TogglePinPA3() {
  REG_PORT_OUTTGL0 = 0x00000008;
}

void RapidFireIOclass::TogglePinPA4() {
  REG_PORT_OUTTGL0 = 0x00000010;
}

void RapidFireIOclass::TogglePinPA5() {
  REG_PORT_OUTTGL0 = 0x00000020;
}

void RapidFireIOclass::TogglePinPA6() {
  REG_PORT_OUTTGL0 = 0x00000040;
}

void RapidFireIOclass::TogglePinPA7() {
  REG_PORT_OUTTGL0 = 0x00000080;
}

void RapidFireIOclass::TogglePinPA8() {
  REG_PORT_OUTTGL0 = 0x00000100;
}

void RapidFireIOclass::TogglePinPA9() {
  REG_PORT_OUTTGL0 = 0x00000200;
}

void RapidFireIOclass::TogglePinPA10() {
  REG_PORT_OUTTGL0 = 0x00000400;
}

void RapidFireIOclass::TogglePinPA11() {
  REG_PORT_OUTTGL0 = 0x00000800;
}

void RapidFireIOclass::TogglePinPA12() {
  REG_PORT_OUTTGL0 = 0x00001000;
}

void RapidFireIOclass::TogglePinPA13() {
  REG_PORT_OUTTGL0 = 0x00002000;
}

void RapidFireIOclass::TogglePinPA14() {
  REG_PORT_OUTTGL0 = 0x00004000;
}

void RapidFireIOclass::TogglePinPA15() {
  REG_PORT_OUTTGL0 = 0x00008000;
}

void RapidFireIOclass::TogglePinPA16() {
  REG_PORT_OUTTGL0 = 0x00010000;
}

void RapidFireIOclass::TogglePinPA17() {
  REG_PORT_OUTTGL0 = 0x00020000;
}

void RapidFireIOclass::TogglePinPA18() {
  REG_PORT_OUTTGL0 = 0x00040000;
}

void RapidFireIOclass::TogglePinPA19() {
  REG_PORT_OUTTGL0 = 0x00080000;
}

void RapidFireIOclass::TogglePinPA20() {
  REG_PORT_OUTTGL0 = 0x00100000;
}

void RapidFireIOclass::TogglePinPA21() {
  REG_PORT_OUTTGL0 = 0x00200000;
}

void RapidFireIOclass::TogglePinPA22() {
  REG_PORT_OUTTGL0 = 0x00400000;
}

void RapidFireIOclass::TogglePinPA23() {
  REG_PORT_OUTTGL0 = 0x00800000;
}

void RapidFireIOclass::TogglePinPA24() {
  REG_PORT_OUTTGL0 = 0x01000000;
}

void RapidFireIOclass::TogglePinPA25() {
  REG_PORT_OUTTGL0 = 0x02000000;
}

void RapidFireIOclass::TogglePinPA27() {
  REG_PORT_OUTTGL0 = 0x08000000;
}

void RapidFireIOclass::TogglePinPA28() {
  REG_PORT_OUTTGL0 = 0x10000000;
}

void RapidFireIOclass::TogglePinPA30() {
  REG_PORT_OUTTGL0 = 0x40000000;
}

void RapidFireIOclass::TogglePinPA31() {
  REG_PORT_OUTTGL0 = 0x80000000;
}

void RapidFireIOclass::TogglePinPB2() {
  REG_PORT_OUTTGL1 = 0x00000004;
}

void RapidFireIOclass::TogglePinPB3() {
  REG_PORT_OUTTGL1 = 0x00000008;
}

void RapidFireIOclass::TogglePinPB8() {
  REG_PORT_OUTTGL1 = 0x00000100;
}

void RapidFireIOclass::TogglePinPB9() {
  REG_PORT_OUTTGL1 = 0x00000200;
}

void RapidFireIOclass::TogglePinPB10() {
  REG_PORT_OUTTGL1 = 0x00000400;
}

void RapidFireIOclass::TogglePinPB11() {
  REG_PORT_OUTTGL1 = 0x00000800;
}

void RapidFireIOclass::TogglePinPB22() {
  REG_PORT_OUTTGL1 = 0x00400000;
}

void RapidFireIOclass::TogglePinPB23() {
  REG_PORT_OUTTGL1 = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinPA0() {
  REG_PORT_DIRCLR0 = 0x00000001;
}

void RapidFireIOclass::SetInputStatePinPA1() {
  REG_PORT_DIRCLR0 = 0x00000002;
}

void RapidFireIOclass::SetInputStatePinPA2() {
  REG_PORT_DIRCLR0 = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPA3() {
  REG_PORT_DIRCLR0 = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPA4() {
  REG_PORT_DIRCLR0 = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinPA5() {
  REG_PORT_DIRCLR0 = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinPA6() {
  REG_PORT_DIRCLR0 = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinPA7() {
  REG_PORT_DIRCLR0 = 0x00000080;
}

void RapidFireIOclass::SetInputStatePinPA8() {
  REG_PORT_DIRCLR0 = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPA9() {
  REG_PORT_DIRCLR0 = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPA10() {
  REG_PORT_DIRCLR0 = 0x00000400;
}

void RapidFireIOclass::SetInputStatePinPA11() {
  REG_PORT_DIRCLR0 = 0x00000800;
}

void RapidFireIOclass::SetInputStatePinPA12() {
  REG_PORT_DIRCLR0 = 0x00001000;
}

void RapidFireIOclass::SetInputStatePinPA13() {
  REG_PORT_DIRCLR0 = 0x00002000;
}

void RapidFireIOclass::SetInputStatePinPA14() {
  REG_PORT_DIRCLR0 = 0x00004000;
}

void RapidFireIOclass::SetInputStatePinPA15() {
  REG_PORT_DIRCLR0 = 0x00008000;
}

void RapidFireIOclass::SetInputStatePinPA16() {
  REG_PORT_DIRCLR0 = 0x00010000;
}

void RapidFireIOclass::SetInputStatePinPA17() {
  REG_PORT_DIRCLR0 = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinPA18() {
  REG_PORT_DIRCLR0 = 0x00040000;
}

void RapidFireIOclass::SetInputStatePinPA19() {
  REG_PORT_DIRCLR0 = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPA20() {
  REG_PORT_DIRCLR0 = 0x00100000;
}

void RapidFireIOclass::SetInputStatePinPA21() {
  REG_PORT_DIRCLR0 = 0x00200000;
}

void RapidFireIOclass::SetInputStatePinPA22() {
  REG_PORT_DIRCLR0 = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinPA23() {
  REG_PORT_DIRCLR0 = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinPA24() {
  REG_PORT_DIRCLR0 = 0x01000000;
}

void RapidFireIOclass::SetInputStatePinPA25() {
  REG_PORT_DIRCLR0 = 0x02000000;
}

void RapidFireIOclass::SetInputStatePinPA27() {
  REG_PORT_DIRCLR0 = 0x08000000;
}

void RapidFireIOclass::SetInputStatePinPA28() {
  REG_PORT_DIRCLR0 = 0x10000000;
}

void RapidFireIOclass::SetInputStatePinPA30() {
  REG_PORT_DIRCLR0 = 0x40000000;
}

void RapidFireIOclass::SetInputStatePinPA31() {
  REG_PORT_DIRCLR0 = 0x80000000;
}

void RapidFireIOclass::SetInputStatePinPB2() {
  REG_PORT_DIRCLR1 = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPB3() {
  REG_PORT_DIRCLR1 = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPB8() {
  REG_PORT_DIRCLR1 = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPB9() {
  REG_PORT_DIRCLR1 = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPB10() {
  REG_PORT_DIRCLR1 = 0x00000400;
}

void RapidFireIOclass::SetInputStatePinPB11() {
  REG_PORT_DIRCLR1 = 0x00000800;
}

void RapidFireIOclass::SetInputStatePinPB22() {
  REG_PORT_DIRCLR1 = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinPB23() {
  REG_PORT_DIRCLR1 = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinPA0() {
  REG_PORT_DIRSET0 = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePinPA1() {
  REG_PORT_DIRSET0 = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePinPA2() {
  REG_PORT_DIRSET0 = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPA3() {
  REG_PORT_DIRSET0 = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPA4() {
  REG_PORT_DIRSET0 = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinPA5() {
  REG_PORT_DIRSET0 = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinPA6() {
  REG_PORT_DIRSET0 = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinPA7() {
  REG_PORT_DIRSET0 = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePinPA8() {
  REG_PORT_DIRSET0 = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPA9() {
  REG_PORT_DIRSET0 = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPA10() {
  REG_PORT_DIRSET0 = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPA11() {
  REG_PORT_DIRSET0 = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePinPA12() {
  REG_PORT_DIRSET0 = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePinPA13() {
  REG_PORT_DIRSET0 = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePinPA14() {
  REG_PORT_DIRSET0 = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePinPA15() {
  REG_PORT_DIRSET0 = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePinPA16() {
  REG_PORT_DIRSET0 = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePinPA17() {
  REG_PORT_DIRSET0 = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinPA18() {
  REG_PORT_DIRSET0 = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePinPA19() {
  REG_PORT_DIRSET0 = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPA20() {
  REG_PORT_DIRSET0 = 0x00100000;
}

void RapidFireIOclass::SetOutputStatePinPA21() {
  REG_PORT_DIRSET0 = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePinPA22() {
  REG_PORT_DIRSET0 = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinPA23() {
  REG_PORT_DIRSET0 = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinPA24() {
  REG_PORT_DIRSET0 = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePinPA25() {
  REG_PORT_DIRSET0 = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePinPA27() {
  REG_PORT_DIRSET0 = 0x08000000;
}

void RapidFireIOclass::SetOutputStatePinPA28() {
  REG_PORT_DIRSET0 = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePinPA30() {
  REG_PORT_DIRSET0 = 0x40000000;
}

void RapidFireIOclass::SetOutputStatePinPA31() {
  REG_PORT_DIRSET0 = 0x80000000;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  REG_PORT_DIRSET1 = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  REG_PORT_DIRSET1 = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPB8() {
  REG_PORT_DIRSET1 = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPB9() {
  REG_PORT_DIRSET1 = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPB10() {
  REG_PORT_DIRSET1 = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPB11() {
  REG_PORT_DIRSET1 = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePinPB22() {
  REG_PORT_DIRSET1 = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinPB23() {
  REG_PORT_DIRSET1 = 0x00800000;
}

void RapidFireIOclass::ToggleIOstatePinPA0() {
  REG_PORT_DIRTGL0 = 0x00000001;
}

void RapidFireIOclass::ToggleIOstatePinPA1() {
  REG_PORT_DIRTGL0 = 0x00000002;
}

void RapidFireIOclass::ToggleIOstatePinPA2() {
  REG_PORT_DIRTGL0 = 0x00000004;
}

void RapidFireIOclass::ToggleIOstatePinPA3() {
  REG_PORT_DIRTGL0 = 0x00000008;
}

void RapidFireIOclass::ToggleIOstatePinPA4() {
  REG_PORT_DIRTGL0 = 0x00000010;
}

void RapidFireIOclass::ToggleIOstatePinPA5() {
  REG_PORT_DIRTGL0 = 0x00000020;
}

void RapidFireIOclass::ToggleIOstatePinPA6() {
  REG_PORT_DIRTGL0 = 0x00000040;
}

void RapidFireIOclass::ToggleIOstatePinPA7() {
  REG_PORT_DIRTGL0 = 0x00000080;
}

void RapidFireIOclass::ToggleIOstatePinPA8() {
  REG_PORT_DIRTGL0 = 0x00000100;
}

void RapidFireIOclass::ToggleIOstatePinPA9() {
  REG_PORT_DIRTGL0 = 0x00000200;
}

void RapidFireIOclass::ToggleIOstatePinPA10() {
  REG_PORT_DIRTGL0 = 0x00000400;
}

void RapidFireIOclass::ToggleIOstatePinPA11() {
  REG_PORT_DIRTGL0 = 0x00000800;
}

void RapidFireIOclass::ToggleIOstatePinPA12() {
  REG_PORT_DIRTGL0 = 0x00001000;
}

void RapidFireIOclass::ToggleIOstatePinPA13() {
  REG_PORT_DIRTGL0 = 0x00002000;
}

void RapidFireIOclass::ToggleIOstatePinPA14() {
  REG_PORT_DIRTGL0 = 0x00004000;
}

void RapidFireIOclass::ToggleIOstatePinPA15() {
  REG_PORT_DIRTGL0 = 0x00008000;
}

void RapidFireIOclass::ToggleIOstatePinPA16() {
  REG_PORT_DIRTGL0 = 0x00010000;
}

void RapidFireIOclass::ToggleIOstatePinPA17() {
  REG_PORT_DIRTGL0 = 0x00020000;
}

void RapidFireIOclass::ToggleIOstatePinPA18() {
  REG_PORT_DIRTGL0 = 0x00040000;
}

void RapidFireIOclass::ToggleIOstatePinPA19() {
  REG_PORT_DIRTGL0 = 0x00080000;
}

void RapidFireIOclass::ToggleIOstatePinPA20() {
  REG_PORT_DIRTGL0 = 0x00100000;
}

void RapidFireIOclass::ToggleIOstatePinPA21() {
  REG_PORT_DIRTGL0 = 0x00200000;
}

void RapidFireIOclass::ToggleIOstatePinPA22() {
  REG_PORT_DIRTGL0 = 0x00400000;
}

void RapidFireIOclass::ToggleIOstatePinPA23() {
  REG_PORT_DIRTGL0 = 0x00800000;
}

void RapidFireIOclass::ToggleIOstatePinPA24() {
  REG_PORT_DIRTGL0 = 0x01000000;
}

void RapidFireIOclass::ToggleIOstatePinPA25() {
  REG_PORT_DIRTGL0 = 0x02000000;
}

void RapidFireIOclass::ToggleIOstatePinPA27() {
  REG_PORT_DIRTGL0 = 0x08000000;
}

void RapidFireIOclass::ToggleIOstatePinPA28() {
  REG_PORT_DIRTGL0 = 0x10000000;
}

void RapidFireIOclass::ToggleIOstatePinPA30() {
  REG_PORT_DIRTGL0 = 0x40000000;
}

void RapidFireIOclass::ToggleIOstatePinPA31() {
  REG_PORT_DIRTGL0 = 0x80000000;
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  REG_PORT_DIRTGL1 = 0x00000004;
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  REG_PORT_DIRTGL1 = 0x00000008;
}

void RapidFireIOclass::ToggleIOstatePinPB8() {
  REG_PORT_DIRTGL1 = 0x00000100;
}

void RapidFireIOclass::ToggleIOstatePinPB9() {
  REG_PORT_DIRTGL1 = 0x00000200;
}

void RapidFireIOclass::ToggleIOstatePinPB10() {
  REG_PORT_DIRTGL1 = 0x00000400;
}

void RapidFireIOclass::ToggleIOstatePinPB11() {
  REG_PORT_DIRTGL1 = 0x00000800;
}

void RapidFireIOclass::ToggleIOstatePinPB22() {
  REG_PORT_DIRTGL1 = 0x00400000;
}

void RapidFireIOclass::ToggleIOstatePinPB23() {
  REG_PORT_DIRTGL1 = 0x00800000;
}

uint32_t RapidFireIOclass::ReadPinPA0() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPinPA1() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPinPA2() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPA3() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPA4() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinPA5() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinPA6() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinPA7() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPinPA8() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPA9() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPA10() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPinPA11() {
  uint32_t data = REG_PORT_IN0; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPinPA12() {
  uint32_t data = REG_PORT_IN0; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA13() {
  uint32_t data = REG_PORT_IN0; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA14() {
  uint32_t data = REG_PORT_IN0; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA15() {
  uint32_t data = REG_PORT_IN0; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA16() {
  uint32_t data = REG_PORT_IN0; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA17() {
  uint32_t data = REG_PORT_IN0; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA18() {
  uint32_t data = REG_PORT_IN0; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA19() {
  uint32_t data = REG_PORT_IN0; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA20() {
  uint32_t data = REG_PORT_IN0; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA21() {
  uint32_t data = REG_PORT_IN0; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA22() {
  uint32_t data = REG_PORT_IN0; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA23() {
  uint32_t data = REG_PORT_IN0; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA24() {
  uint32_t data = REG_PORT_IN0; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA25() {
  uint32_t data = REG_PORT_IN0; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA27() {
  uint32_t data = REG_PORT_IN0; data &= 0x08000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA28() {
  uint32_t data = REG_PORT_IN0; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA30() {
  uint32_t data = REG_PORT_IN0; data &= 0x40000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA31() {
  uint32_t data = REG_PORT_IN0; data &= 0x80000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB2() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPB3() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPB8() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPB9() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPB10() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPinPB11() {
  uint32_t data = REG_PORT_IN1; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPinPB22() {
  uint32_t data = REG_PORT_IN1; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB23() {
  uint32_t data = REG_PORT_IN1; data &= 0x00800000; return data;
}

void RapidFireIOclass::init() {
  for (int i = 0; i <= 13; i++) {
    pinMode(i, INPUT);
  }
  for (int i = A0; i <= A5; i++) {
    pinMode(i, INPUT);
  }
}

// Due and derivatives
#elif defined(ARDUINO_SAM_DUE)

void RapidFireIOclass::SetPin0() { // PA8
  REG_PIOA_SODR = 0x00000100;
}

void RapidFireIOclass::SetPin1() { // PA9
  REG_PIOA_SODR = 0x00000200;
}

void RapidFireIOclass::SetPin2() { // PB25
  REG_PIOB_SODR = 0x02000000;
}

void RapidFireIOclass::SetPin3() { // PC28
  REG_PIOC_SODR = 0x10000000;
}

void RapidFireIOclass::SetPin4() { // PA29
  REG_PIOA_SODR = 0x20000000;
}

void RapidFireIOclass::SetPin5() { // PC25
  REG_PIOC_SODR = 0x02000000;
}

void RapidFireIOclass::SetPin6() { // PC24
  REG_PIOC_SODR = 0x01000000;
}

void RapidFireIOclass::SetPin7() { // PC23
  REG_PIOC_SODR = 0x00800000;
}

void RapidFireIOclass::SetPin8() { // PC22
  REG_PIOC_SODR = 0x00400000;
}

void RapidFireIOclass::SetPin9() { // PC21
  REG_PIOC_SODR = 0x00200000;
}

void RapidFireIOclass::SetPin10() { // PA28
  REG_PIOA_SODR = 0x10000000;
}

void RapidFireIOclass::SetPin11() { // PD7
  REG_PIOD_SODR = 0x00000080;
}

void RapidFireIOclass::SetPin12() { // PD8
  REG_PIOD_SODR = 0x00000100;
}

void RapidFireIOclass::SetPin13() { // PB27
  REG_PIOB_SODR = 0x08000000;
}

void RapidFireIOclass::SetPin14() { // PD4
  REG_PIOD_SODR = 0x00000010;
}

void RapidFireIOclass::SetPin15() { // PD5
  REG_PIOD_SODR = 0x00000020;
}

void RapidFireIOclass::SetPin16() { // PA13
  REG_PIOA_SODR = 0x00002000;
}

void RapidFireIOclass::SetPin17() { // PA12
  REG_PIOA_SODR = 0x00001000;
}

void RapidFireIOclass::SetPin18() { // PA11
  REG_PIOA_SODR = 0x00000800;
}

void RapidFireIOclass::SetPin19() { // PA10
  REG_PIOA_SODR = 0x00000400;
}

void RapidFireIOclass::SetPin20() { // PB12
  REG_PIOB_SODR = 0x00001000;
}

void RapidFireIOclass::SetPin21() { // PB13
  REG_PIOB_SODR = 0x00002000;
}

void RapidFireIOclass::SetPin22() { // PB26
  REG_PIOB_SODR = 0x04000000;
}

void RapidFireIOclass::SetPin23() { // PA14
  REG_PIOA_SODR = 0x00004000;
}

void RapidFireIOclass::SetPin24() { // PA15
  REG_PIOA_SODR = 0x00008000;
}

void RapidFireIOclass::SetPin25() { // PD0
  REG_PIOD_SODR = 0x00000001;
}

void RapidFireIOclass::SetPin26() { // PD1
  REG_PIOD_SODR = 0x00000002;
}

void RapidFireIOclass::SetPin27() { // PD2
  REG_PIOD_SODR = 0x00000004;
}

void RapidFireIOclass::SetPin28() { // PD3
  REG_PIOD_SODR = 0x00000008;
}

void RapidFireIOclass::SetPin29() { // PD6
  REG_PIOD_SODR = 0x00000040;
}

void RapidFireIOclass::SetPin30() { // PD9
  REG_PIOD_SODR = 0x00000200;
}

void RapidFireIOclass::SetPin31() { // PA7
  REG_PIOA_SODR = 0x00000080;
}

void RapidFireIOclass::SetPin32() { // PD10
  REG_PIOD_SODR = 0x00000400;
}

void RapidFireIOclass::SetPin33() { // PC1
  REG_PIOC_SODR = 0x00000002;
}

void RapidFireIOclass::SetPin34() { // PC2
  REG_PIOC_SODR = 0x00000004;
}

void RapidFireIOclass::SetPin35() { // PC3
  REG_PIOC_SODR = 0x00000008;
}

void RapidFireIOclass::SetPin36() { // PC4
  REG_PIOC_SODR = 0x00000010;
}

void RapidFireIOclass::SetPin37() { // PC5
  REG_PIOC_SODR = 0x00000020;
}

void RapidFireIOclass::SetPin38() { // PC6
  REG_PIOC_SODR = 0x00000040;
}

void RapidFireIOclass::SetPin39() { // PC7
  REG_PIOC_SODR = 0x00000080;
}

void RapidFireIOclass::SetPin40() { // PC8
  REG_PIOC_SODR = 0x00000100;
}

void RapidFireIOclass::SetPin41() { // PC9
  REG_PIOC_SODR = 0x00000200;
}

void RapidFireIOclass::SetPin42() { // PA19
  REG_PIOA_SODR = 0x00080000;
}

void RapidFireIOclass::SetPin43() { // PA20
  REG_PIOA_SODR = 0x00100000;
}

void RapidFireIOclass::SetPin44() { // PC19
  REG_PIOC_SODR = 0x00080000;
}

void RapidFireIOclass::SetPin45() { // PC18
  REG_PIOC_SODR = 0x00040000;
}

void RapidFireIOclass::SetPin46() { // PC17
  REG_PIOC_SODR = 0x00020000;
}

void RapidFireIOclass::SetPin47() { // PC16
  REG_PIOC_SODR = 0x00010000;
}

void RapidFireIOclass::SetPin48() { // PC15
  REG_PIOC_SODR = 0x00008000;
}

void RapidFireIOclass::SetPin49() { // PC14
  REG_PIOC_SODR = 0x00004000;
}

void RapidFireIOclass::SetPin50() { // PC13
  REG_PIOC_SODR = 0x00002000;
}

void RapidFireIOclass::SetPin51() { // PC12
  REG_PIOC_SODR = 0x00001000;
}

void RapidFireIOclass::SetPin52() { // PB21
  REG_PIOB_SODR = 0x00200000;
}

void RapidFireIOclass::SetPin53() { // PB14
  REG_PIOB_SODR = 0x00004000;
}

void RapidFireIOclass::SetPinA0() { // PA16
  REG_PIOA_SODR = 0x00010000;
}

void RapidFireIOclass::SetPinA1() { // PA24
  REG_PIOA_SODR = 0x01000000;
}

void RapidFireIOclass::SetPinA2() { // PA23
  REG_PIOA_SODR = 0x00800000;
}

void RapidFireIOclass::SetPinA3() { // PA22
  REG_PIOA_SODR = 0x00400000;
}

void RapidFireIOclass::SetPinA4() { // PA6
  REG_PIOA_SODR = 0x00000040;
}

void RapidFireIOclass::SetPinA5() { // PA4
  REG_PIOA_SODR = 0x00000010;
}

void RapidFireIOclass::SetPinA6() { // PA3
  REG_PIOA_SODR = 0x00000008;
}

void RapidFireIOclass::SetPinA7() { // PA2
  REG_PIOA_SODR = 0x00000004;
}

void RapidFireIOclass::SetPinA8() { // PB17
  REG_PIOB_SODR = 0x00020000;
}

void RapidFireIOclass::SetPinA9() { // PB18
  REG_PIOB_SODR = 0x00040000;
}

void RapidFireIOclass::SetPinA10() { // PB19
  REG_PIOB_SODR = 0x00080000;
}

void RapidFireIOclass::SetPinA11() { // PB20
  REG_PIOB_SODR = 0x00100000;
}

void RapidFireIOclass::ClearPin0() {
  REG_PIOA_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPin1() {
  REG_PIOA_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPin2() {
  REG_PIOB_CODR = 0x02000000;
}

void RapidFireIOclass::ClearPin3() {
  REG_PIOC_CODR = 0x10000000;
}

void RapidFireIOclass::ClearPin4() {
  REG_PIOA_CODR = 0x20000000;
}

void RapidFireIOclass::ClearPin5() {
  REG_PIOC_CODR = 0x02000000;
}

void RapidFireIOclass::ClearPin6() {
  REG_PIOC_CODR = 0x01000000;
}

void RapidFireIOclass::ClearPin7() {
  REG_PIOC_CODR = 0x00800000;
}

void RapidFireIOclass::ClearPin8() {
  REG_PIOC_CODR = 0x00400000;
}

void RapidFireIOclass::ClearPin9() {
  REG_PIOC_CODR = 0x00200000;
}

void RapidFireIOclass::ClearPin10() {
  REG_PIOA_CODR = 0x10000000;
}

void RapidFireIOclass::ClearPin11() {
  REG_PIOD_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPin12() {
  REG_PIOD_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPin13() {
  REG_PIOB_CODR = 0x08000000;
}

void RapidFireIOclass::ClearPin14() {
  REG_PIOD_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPin15() {
  REG_PIOD_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPin16() {
  REG_PIOA_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPin17() {
  REG_PIOA_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPin18() {
  REG_PIOA_CODR = 0x00000800;
}

void RapidFireIOclass::ClearPin19() {
  REG_PIOA_CODR = 0x00000400;
}

void RapidFireIOclass::ClearPin20() {
  REG_PIOB_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPin21() {
  REG_PIOB_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPin22() {
  REG_PIOB_CODR = 0x04000000;
}

void RapidFireIOclass::ClearPin23() {
  REG_PIOA_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPin24() {
  REG_PIOA_CODR = 0x00008000;
}

void RapidFireIOclass::ClearPin25() {
  REG_PIOD_CODR = 0x00000001;
}

void RapidFireIOclass::ClearPin26() {
  REG_PIOD_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPin27() {
  REG_PIOD_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPin28() {
  REG_PIOD_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPin29() {
  REG_PIOD_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPin30() {
  REG_PIOD_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPin31() {
  REG_PIOA_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPin32() {
  REG_PIOD_CODR = 0x00000400;
}

void RapidFireIOclass::ClearPin33() {
  REG_PIOC_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPin34() {
  REG_PIOC_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPin35() {
  REG_PIOC_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPin36() {
  REG_PIOC_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPin37() {
  REG_PIOC_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPin38() {
  REG_PIOC_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPin39() {
  REG_PIOC_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPin40() {
  REG_PIOC_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPin41() {
  REG_PIOC_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPin42() {
  REG_PIOA_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPin43() {
  REG_PIOA_CODR = 0x00100000;
}

void RapidFireIOclass::ClearPin44() {
  REG_PIOC_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPin45() {
  REG_PIOC_CODR = 0x00040000;
}

void RapidFireIOclass::ClearPin46() {
  REG_PIOC_CODR = 0x00020000;
}

void RapidFireIOclass::ClearPin47() {
  REG_PIOC_CODR = 0x00010000;
}

void RapidFireIOclass::ClearPin48() {
  REG_PIOC_CODR = 0x00008000;
}

void RapidFireIOclass::ClearPin49() {
  REG_PIOC_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPin50() {
  REG_PIOC_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPin51() {
  REG_PIOC_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPin52() {
  REG_PIOB_CODR = 0x00200000;
}

void RapidFireIOclass::ClearPin53() {
  REG_PIOB_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPinA0() {
  REG_PIOA_CODR = 0x00010000;
}

void RapidFireIOclass::ClearPinA1() {
  REG_PIOA_CODR = 0x01000000;
}

void RapidFireIOclass::ClearPinA2() {
  REG_PIOA_CODR = 0x00800000;
}

void RapidFireIOclass::ClearPinA3() {
  REG_PIOA_CODR = 0x00400000;
}

void RapidFireIOclass::ClearPinA4() {
  REG_PIOA_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPinA5() {
  REG_PIOA_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPinA6() {
  REG_PIOA_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPinA7() {
  REG_PIOA_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPinA8() {
  REG_PIOB_CODR = 0x00020000;
}

void RapidFireIOclass::ClearPinA9() {
  REG_PIOB_CODR = 0x00040000;
}

void RapidFireIOclass::ClearPinA10() {
  REG_PIOB_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPinA11() {
  REG_PIOB_CODR = 0x00100000;
}

void RapidFireIOclass::TogglePin0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOA_CODR = 0x00000100;
  } else {
    REG_PIOA_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePin1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOA_CODR = 0x00000200;
  } else {
    REG_PIOA_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePin2() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOB_CODR = 0x02000000;
  } else {
    REG_PIOB_SODR = 0x02000000;
  }
}

void RapidFireIOclass::TogglePin3() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOC_CODR = 0x10000000;
  } else {
    REG_PIOC_SODR = 0x10000000;
  }
}

void RapidFireIOclass::TogglePin4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOA_CODR = 0x20000000;
  } else {
    REG_PIOA_SODR = 0x20000000;
  }
}

void RapidFireIOclass::TogglePin5() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOC_CODR = 0x02000000;
  } else {
    REG_PIOC_SODR = 0x02000000;
  }
}

void RapidFireIOclass::TogglePin6() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOC_CODR = 0x01000000;
  } else {
    REG_PIOC_SODR = 0x01000000;
  }
}

void RapidFireIOclass::TogglePin7() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOC_CODR = 0x00800000;
  } else {
    REG_PIOC_SODR = 0x00800000;
  }
}

void RapidFireIOclass::TogglePin8() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOC_CODR = 0x00400000;
  } else {
    REG_PIOC_SODR = 0x00400000;
  }
}

void RapidFireIOclass::TogglePin9() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOC_CODR = 0x00200000;
  } else {
    REG_PIOC_SODR = 0x00200000;
  }
}

void RapidFireIOclass::TogglePin10() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOA_CODR = 0x10000000;
  } else {
    REG_PIOA_SODR = 0x10000000;
  }
}

void RapidFireIOclass::TogglePin11() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOD_CODR = 0x00000080;
  } else {
    REG_PIOD_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePin12() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOD_CODR = 0x00000100;
  } else {
    REG_PIOD_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePin13() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOB_CODR = 0x08000000;
  } else {
    REG_PIOB_SODR = 0x08000000;
  }
}

void RapidFireIOclass::TogglePin14() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOD_CODR = 0x00000010;
  } else {
    REG_PIOD_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePin15() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOD_CODR = 0x00000020;
  } else {
    REG_PIOD_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePin16() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOA_CODR = 0x00000000;
  } else {
    REG_PIOA_SODR = 0x00000000;
  }
}

void RapidFireIOclass::TogglePin17() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOA_CODR = 0x00001000;
  } else {
    REG_PIOA_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePin18() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOA_CODR = 0x00000800;
  } else {
    REG_PIOA_SODR = 0x00000800;
  }
}

void RapidFireIOclass::TogglePin19() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOA_CODR = 0x00000400;
  } else {
    REG_PIOA_SODR = 0x00000400;
  }
}

void RapidFireIOclass::TogglePin20() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOB_CODR = 0x00001000;
  } else {
    REG_PIOB_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePin21() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOB_CODR = 0x00002000;
  } else {
    REG_PIOB_SODR = 0x00002000;
  }
}

void RapidFireIOclass::TogglePin22() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOB_CODR = 0x04000000;
  } else {
    REG_PIOB_SODR = 0x04000000;
  }
}

void RapidFireIOclass::TogglePin23() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOA_CODR = 0x00004000;
  } else {
    REG_PIOA_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePin24() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOA_CODR = 0x00008000;
  } else {
    REG_PIOA_SODR = 0x00008000;
  }
}

void RapidFireIOclass::TogglePin25() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOD_CODR = 0x00000001;
  } else {
    REG_PIOD_SODR = 0x00000001;
  }
}

void RapidFireIOclass::TogglePin26() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOD_CODR = 0x00000002;
  } else {
    REG_PIOD_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePin27() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOD_CODR = 0x00000004;
  } else {
    REG_PIOD_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePin28() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOD_CODR = 0x00000008;
  } else {
    REG_PIOD_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePin29() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOD_CODR = 0x00000040;
  } else {
    REG_PIOD_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePin30() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOD_CODR = 0x00000200;
  } else {
    REG_PIOD_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePin31() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOA_CODR = 0x00000080;
  } else {
    REG_PIOA_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePin32() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOD_CODR = 0x00000400;
  } else {
    REG_PIOD_SODR = 0x00000400;
  }
}

void RapidFireIOclass::TogglePin33() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOC_CODR = 0x00000002;
  } else {
    REG_PIOC_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePin34() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOC_CODR = 0x00000004;
  } else {
    REG_PIOC_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePin35() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOC_CODR = 0x00000008;
  } else {
    REG_PIOC_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePin36() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOC_CODR = 0x00000010;
  } else {
    REG_PIOC_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePin37() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOC_CODR = 0x00000020;
  } else {
    REG_PIOC_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePin38() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOC_CODR = 0x00000040;
  } else {
    REG_PIOC_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePin39() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOC_CODR = 0x00000080;
  } else {
    REG_PIOC_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePin40() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOC_CODR = 0x00000100;
  } else {
    REG_PIOC_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePin41() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOC_CODR = 0x00000200;
  } else {
    REG_PIOC_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePin42() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOA_CODR = 0x00080000;
  } else {
    REG_PIOA_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePin43() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOA_CODR = 0x00100000;
  } else {
    REG_PIOA_SODR = 0x00100000;
  }
}

void RapidFireIOclass::TogglePin44() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOC_CODR = 0x00080000;
  } else {
    REG_PIOC_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePin45() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOC_CODR = 0x00040000;
  } else {
    REG_PIOC_SODR = 0x00040000;
  }
}

void RapidFireIOclass::TogglePin46() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOC_CODR = 0x00020000;
  } else {
    REG_PIOC_SODR = 0x00020000;
  }
}

void RapidFireIOclass::TogglePin47() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOC_CODR = 0x00010000;
  } else {
    REG_PIOC_SODR = 0x00010000;
  }
}

void RapidFireIOclass::TogglePin48() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOC_CODR = 0x00008000;
  } else {
    REG_PIOC_SODR = 0x00008000;
  }
}

void RapidFireIOclass::TogglePin49() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOC_CODR = 0x00004000;
  } else {
    REG_PIOC_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePin50() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOC_CODR = 0x00002000;
  } else {
    REG_PIOC_SODR = 0x00002000;
  }
}

void RapidFireIOclass::TogglePin51() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOC_CODR = 0x00001000;
  } else {
    REG_PIOC_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePin52() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOB_CODR = 0x00200000;
  } else {
    REG_PIOB_SODR = 0x00200000;
  }
}

void RapidFireIOclass::TogglePin53() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOB_CODR = 0x00004000;
  } else {
    REG_PIOB_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePinA0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOA_CODR = 0x00010000;
  } else {
    REG_PIOA_SODR = 0x00010000;
  }
}

void RapidFireIOclass::TogglePinA1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOA_CODR = 0x01000000;
  } else {
    REG_PIOA_SODR = 0x01000000;
  }
}

void RapidFireIOclass::TogglePinA2() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOA_CODR = 0x00800000;
  } else {
    REG_PIOA_SODR = 0x00800000;
  }
}

void RapidFireIOclass::TogglePinA3() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOA_CODR = 0x00400000;
  } else {
    REG_PIOA_SODR = 0x00400000;
  }
}

void RapidFireIOclass::TogglePinA4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOA_CODR = 0x00000040;
  } else {
    REG_PIOA_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePinA5() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOA_CODR = 0x00000010;
  } else {
    REG_PIOA_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePinA6() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOA_CODR = 0x00000008;
  } else {
    REG_PIOA_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePinA7() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOA_CODR = 0x00000004;
  } else {
    REG_PIOA_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePinA8() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOB_CODR = 0x00020000;
  } else {
    REG_PIOB_SODR = 0x00020000;
  }
}

void RapidFireIOclass::TogglePinA9() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOB_CODR = 0x00040000;
  } else {
    REG_PIOB_SODR = 0x00040000;
  }
}

void RapidFireIOclass::TogglePinA10() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOB_CODR = 0x00080000;
  } else {
    REG_PIOB_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePinA11() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOB_CODR = 0x00100000;
  } else {
    REG_PIOB_SODR = 0x00100000;
  }
}

void RapidFireIOclass::SetInputStatePin0() {
  REG_PIOA_ODR = 0x00000100; REG_PIOA_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePin1() {
  REG_PIOA_ODR = 0x00000200; REG_PIOA_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePin2() {
  REG_PIOB_ODR = 0x02000000; REG_PIOB_PDR = 0x02000000;
}

void RapidFireIOclass::SetInputStatePin3() {
  REG_PIOC_ODR = 0x10000000; REG_PIOC_PDR = 0x10000000;
}

void RapidFireIOclass::SetInputStatePin4() {
  REG_PIOA_ODR = 0x20000000; REG_PIOA_PDR = 0x20000000;
}

void RapidFireIOclass::SetInputStatePin5() {
  REG_PIOC_ODR = 0x02000000; REG_PIOC_PDR = 0x02000000;
}

void RapidFireIOclass::SetInputStatePin6() {
  REG_PIOC_ODR = 0x01000000; REG_PIOC_PDR = 0x01000000;
}

void RapidFireIOclass::SetInputStatePin7() {
  REG_PIOC_ODR = 0x00800000; REG_PIOC_PDR = 0x00800000;
}

void RapidFireIOclass::SetInputStatePin8() {
  REG_PIOC_ODR = 0x00400000; REG_PIOC_PDR = 0x00400000;
}

void RapidFireIOclass::SetInputStatePin9() {
  REG_PIOC_ODR = 0x00200000; REG_PIOC_PDR = 0x00200000;
}

void RapidFireIOclass::SetInputStatePin10() {
  REG_PIOA_ODR = 0x10000000; REG_PIOA_PDR = 0x10000000;
}

void RapidFireIOclass::SetInputStatePin11() {
  REG_PIOD_ODR = 0x00000080; REG_PIOD_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePin12() {
  REG_PIOD_ODR = 0x00000100; REG_PIOD_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePin13() {
  REG_PIOB_ODR = 0x08000000; REG_PIOB_PDR = 0x08000000;
}

void RapidFireIOclass::SetInputStatePin14() {
  REG_PIOD_ODR = 0x00000010; REG_PIOD_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePin15() {
  REG_PIOD_ODR = 0x00000020; REG_PIOD_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePin16() {
  REG_PIOA_ODR = 0x00002000; REG_PIOA_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePin17() {
  REG_PIOA_ODR = 0x00001000; REG_PIOA_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePin18() {
  REG_PIOA_ODR = 0x00000800; REG_PIOA_PDR = 0x00000800;
}

void RapidFireIOclass::SetInputStatePin19() {
  REG_PIOA_ODR = 0x00000400; REG_PIOA_PDR = 0x00000400;
}

void RapidFireIOclass::SetInputStatePin20() {
  REG_PIOB_ODR = 0x00001000; REG_PIOB_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePin21() {
  REG_PIOB_ODR = 0x00002000; REG_PIOB_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePin22() {
  REG_PIOB_ODR = 0x04000000; REG_PIOB_PDR = 0x04000000;
}

void RapidFireIOclass::SetInputStatePin23() {
  REG_PIOA_ODR = 0x00004000; REG_PIOA_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePin24() {
  REG_PIOA_ODR = 0x00008000; REG_PIOA_PDR = 0x00008000;
}

void RapidFireIOclass::SetInputStatePin25() {
  REG_PIOD_ODR = 0x00000001; REG_PIOD_PDR = 0x00000001;
}

void RapidFireIOclass::SetInputStatePin26() {
  REG_PIOD_ODR = 0x00000002; REG_PIOD_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePin27() {
  REG_PIOD_ODR = 0x00000004; REG_PIOD_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePin28() {
  REG_PIOD_ODR = 0x00000008; REG_PIOD_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePin29() {
  REG_PIOD_ODR = 0x00000040; REG_PIOD_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePin30() {
  REG_PIOD_ODR = 0x00000200; REG_PIOD_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePin31() {
  REG_PIOA_ODR = 0x00000080; REG_PIOA_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePin32() {
  REG_PIOD_ODR = 0x00000400; REG_PIOD_PDR = 0x00000400;
}

void RapidFireIOclass::SetInputStatePin33() {
  REG_PIOC_ODR = 0x00000002; REG_PIOC_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePin34() {
  REG_PIOC_ODR = 0x00000004; REG_PIOC_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePin35() {
  REG_PIOC_ODR = 0x00000008; REG_PIOC_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePin36() {
  REG_PIOC_ODR = 0x00000010; REG_PIOC_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePin37() {
  REG_PIOC_ODR = 0x00000020; REG_PIOC_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePin38() {
  REG_PIOC_ODR = 0x00000040; REG_PIOC_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePin39() {
  REG_PIOC_ODR = 0x00000080; REG_PIOC_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePin40() {
  REG_PIOC_ODR = 0x00000100; REG_PIOC_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePin41() {
  REG_PIOC_ODR = 0x00000200; REG_PIOC_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePin42() {
  REG_PIOA_ODR = 0x00080000; REG_PIOA_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePin43() {
  REG_PIOA_ODR = 0x00100000; REG_PIOA_PDR = 0x00100000;
}

void RapidFireIOclass::SetInputStatePin44() {
  REG_PIOC_ODR = 0x00080000; REG_PIOC_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePin45() {
  REG_PIOC_ODR = 0x00040000; REG_PIOC_PDR = 0x00040000;
}

void RapidFireIOclass::SetInputStatePin46() {
  REG_PIOC_ODR = 0x00020000; REG_PIOC_PDR = 0x00020000;
}

void RapidFireIOclass::SetInputStatePin47() {
  REG_PIOC_ODR = 0x00010000; REG_PIOC_PDR = 0x00010000;
}

void RapidFireIOclass::SetInputStatePin48() {
  REG_PIOC_ODR = 0x00008000; REG_PIOC_PDR = 0x00008000;
}

void RapidFireIOclass::SetInputStatePin49() {
  REG_PIOC_ODR = 0x00004000; REG_PIOC_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePin50() {
  REG_PIOC_ODR = 0x00002000; REG_PIOC_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePin51() {
  REG_PIOC_ODR = 0x00001000; REG_PIOC_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePin52() {
  REG_PIOB_ODR = 0x00200000; REG_PIOB_PDR = 0x00200000;
}

void RapidFireIOclass::SetInputStatePin53() {
  REG_PIOB_ODR = 0x00004000; REG_PIOB_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePinA0() {
  REG_PIOA_ODR = 0x00010000; REG_PIOA_PDR = 0x00010000;
}

void RapidFireIOclass::SetInputStatePinA1() {
  REG_PIOA_ODR = 0x01000000; REG_PIOA_PDR = 0x01000000;
}

void RapidFireIOclass::SetInputStatePinA2() {
  REG_PIOA_ODR = 0x00800000; REG_PIOA_PDR = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinA3() {
  REG_PIOA_ODR = 0x00400000; REG_PIOA_PDR = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinA4() {
  REG_PIOA_ODR = 0x00000040; REG_PIOA_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinA5() {
  REG_PIOA_ODR = 0x00000010; REG_PIOA_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinA6() {
  REG_PIOA_ODR = 0x00000008; REG_PIOA_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinA7() {
  REG_PIOA_ODR = 0x00000004; REG_PIOA_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinA8() {
  REG_PIOB_ODR = 0x00020000; REG_PIOB_PDR = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinA9() {
  REG_PIOB_ODR = 0x00040000; REG_PIOB_PDR = 0x00040000;
}

void RapidFireIOclass::SetInputStatePinA10() {
  REG_PIOB_ODR = 0x00080000; REG_PIOB_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinA11() {
  REG_PIOB_ODR = 0x00100000; REG_PIOB_PDR = 0x00100000;
}

void RapidFireIOclass::SetOutputStatePin0() {
  REG_PIOA_OER = 0x00000100; REG_PIOA_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePin1() {
  REG_PIOA_OER = 0x00000200; REG_PIOA_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePin2() {
  REG_PIOB_OER = 0x02000000; REG_PIOB_PER = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePin3() {
  REG_PIOC_OER = 0x10000000; REG_PIOC_PER = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePin4() {
  REG_PIOA_OER = 0x20000000; REG_PIOA_PER = 0x20000000;
}

void RapidFireIOclass::SetOutputStatePin5() {
  REG_PIOC_OER = 0x02000000; REG_PIOC_PER = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePin6() {
  REG_PIOC_OER = 0x01000000; REG_PIOC_PER = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePin7() {
  REG_PIOC_OER = 0x00800000; REG_PIOC_PER = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePin8() {
  REG_PIOC_OER = 0x00400000; REG_PIOC_PER = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePin9() {
  REG_PIOC_OER = 0x00200000; REG_PIOC_PER = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePin10() {
  REG_PIOA_OER = 0x10000000; REG_PIOA_PER = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePin11() {
  REG_PIOD_OER = 0x00000080; REG_PIOD_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePin12() {
  REG_PIOD_OER = 0x00000100; REG_PIOD_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePin13() {
  REG_PIOB_OER = 0x08000000; REG_PIOB_PER = 0x08000000;
}

void RapidFireIOclass::SetOutputStatePin14() {
  REG_PIOD_OER = 0x00000010; REG_PIOD_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePin15() {
  REG_PIOD_OER = 0x00000020; REG_PIOD_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePin16() {
  REG_PIOA_OER = 0x00002000; REG_PIOA_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePin17() {
  REG_PIOA_OER = 0x00001000; REG_PIOA_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePin18() {
  REG_PIOA_OER = 0x00000800; REG_PIOA_PER = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePin19() {
  REG_PIOA_OER = 0x00000400; REG_PIOA_PER = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePin20() {
  REG_PIOB_OER = 0x00001000; REG_PIOB_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePin21() {
  REG_PIOB_OER = 0x00002000; REG_PIOB_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePin22() {
  REG_PIOB_OER = 0x04000000; REG_PIOB_PER = 0x04000000;
}

void RapidFireIOclass::SetOutputStatePin23() {
  REG_PIOA_OER = 0x00004000; REG_PIOA_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePin24() {
  REG_PIOA_OER = 0x00008000; REG_PIOA_PER = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePin25() {
  REG_PIOD_OER = 0x00000001; REG_PIOD_PER = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePin26() {
  REG_PIOD_OER = 0x00000002; REG_PIOD_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePin27() {
  REG_PIOD_OER = 0x00000004; REG_PIOD_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePin28() {
  REG_PIOD_OER = 0x00000008; REG_PIOD_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePin29() {
  REG_PIOD_OER = 0x00000040; REG_PIOD_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePin30() {
  REG_PIOD_OER = 0x00000200; REG_PIOD_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePin31() {
  REG_PIOA_OER = 0x00000080; REG_PIOA_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePin32() {
  REG_PIOD_OER = 0x00000400; REG_PIOD_PER = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePin33() {
  REG_PIOC_OER = 0x00000002; REG_PIOC_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePin34() {
  REG_PIOC_OER = 0x00000004; REG_PIOC_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePin35() {
  REG_PIOC_OER = 0x00000008; REG_PIOC_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePin36() {
  REG_PIOC_OER = 0x00000010; REG_PIOC_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePin37() {
  REG_PIOC_OER = 0x00000020; REG_PIOC_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePin38() {
  REG_PIOC_OER = 0x00000040; REG_PIOC_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePin39() {
  REG_PIOC_OER = 0x00000080; REG_PIOC_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePin40() {
  REG_PIOC_OER = 0x00000100; REG_PIOC_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePin41() {
  REG_PIOC_OER = 0x00000200; REG_PIOC_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePin42() {
  REG_PIOA_OER = 0x00080000; REG_PIOA_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePin43() {
  REG_PIOA_OER = 0x00100000; REG_PIOA_PER = 0x00100000;
}

void RapidFireIOclass::SetOutputStatePin44() {
  REG_PIOC_OER = 0x00080000; REG_PIOC_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePin45() {
  REG_PIOC_OER = 0x00040000; REG_PIOC_PER = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePin46() {
  REG_PIOC_OER = 0x00020000; REG_PIOC_PER = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePin47() {
  REG_PIOC_OER = 0x00010000; REG_PIOC_PER = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePin48() {
  REG_PIOC_OER = 0x00008000; REG_PIOC_PER = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePin49() {
  REG_PIOC_OER = 0x00004000; REG_PIOC_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePin50() {
  REG_PIOC_OER = 0x00002000; REG_PIOC_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePin51() {
  REG_PIOC_OER = 0x00001000; REG_PIOC_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePin52() {
  REG_PIOB_OER = 0x00200000; REG_PIOB_PER = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePin53() {
  REG_PIOB_OER = 0x00004000; REG_PIOB_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePinA0() {
  REG_PIOA_OER = 0x00010000; REG_PIOA_PER = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePinA1() {
  REG_PIOA_OER = 0x01000000; REG_PIOA_PER = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePinA2() {
  REG_PIOA_OER = 0x00800000; REG_PIOA_PER = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinA3() {
  REG_PIOA_OER = 0x00400000; REG_PIOA_PER = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinA4() {
  REG_PIOA_OER = 0x00000040; REG_PIOA_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinA5() {
  REG_PIOA_OER = 0x00000010; REG_PIOA_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinA6() {
  REG_PIOA_OER = 0x00000008; REG_PIOA_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinA7() {
  REG_PIOA_OER = 0x00000004; REG_PIOA_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinA8() {
  REG_PIOB_OER = 0x00020000; REG_PIOB_PER = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinA9() {
  REG_PIOB_OER = 0x00040000; REG_PIOB_PER = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePinA10() {
  REG_PIOB_OER = 0x00080000; REG_PIOB_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinA11() {
  REG_PIOB_OER = 0x00100000; REG_PIOB_PER = 0x00100000;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000100; if (data != 0) {
    REG_PIOA_ODR = 0x00000100; REG_PIOA_PDR = 0x00000100;
  } else {
    REG_PIOA_OER = 0x00000100; REG_PIOA_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePin1() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000200; if (data != 0) {
    REG_PIOA_ODR = 0x00000200; REG_PIOA_PDR = 0x00000200;
  } else {
    REG_PIOA_OER = 0x00000200; REG_PIOA_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePin2() {
  uint32_t data = REG_PIOB_OSR; data &= 0x02000000; if (data != 0) {
    REG_PIOB_ODR = 0x02000000; REG_PIOB_PDR = 0x02000000;
  } else {
    REG_PIOB_OER = 0x02000000; REG_PIOB_PER = 0x02000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin3() {
  uint32_t data = REG_PIOC_OSR; data &= 0x10000000; if (data != 0) {
    REG_PIOC_ODR = 0x10000000; REG_PIOC_PDR = 0x10000000;
  } else {
    REG_PIOC_OER = 0x10000000; REG_PIOC_PER = 0x10000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin4() {
  uint32_t data = REG_PIOA_OSR; data &= 0x20000000; if (data != 0) {
    REG_PIOA_ODR = 0x20000000; REG_PIOA_PDR = 0x20000000;
  } else {
    REG_PIOA_OER = 0x20000000; REG_PIOA_PER = 0x20000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin5() {
  uint32_t data = REG_PIOC_OSR; data &= 0x02000000; if (data != 0) {
    REG_PIOC_ODR = 0x02000000; REG_PIOC_PDR = 0x02000000;
  } else {
    REG_PIOC_OER = 0x02000000; REG_PIOC_PER = 0x02000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin6() {
  uint32_t data = REG_PIOC_OSR; data &= 0x01000000; if (data != 0) {
    REG_PIOC_ODR = 0x01000000; REG_PIOC_PDR = 0x01000000;
  } else {
    REG_PIOC_OER = 0x01000000; REG_PIOC_PER = 0x01000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin7() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00800000; if (data != 0) {
    REG_PIOC_ODR = 0x00800000; REG_PIOC_PDR = 0x00800000;
  } else {
    REG_PIOC_OER = 0x00800000; REG_PIOC_PER = 0x00800000;
  }
}

void RapidFireIOclass::ToggleIOstatePin8() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00400000; if (data != 0) {
    REG_PIOC_ODR = 0x00400000; REG_PIOC_PDR = 0x00400000;
  } else {
    REG_PIOC_OER = 0x00400000; REG_PIOC_PER = 0x00400000;
  }
}

void RapidFireIOclass::ToggleIOstatePin9() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00200000; if (data != 0) {
    REG_PIOC_ODR = 0x00200000; REG_PIOC_PDR = 0x00200000;
  } else {
    REG_PIOC_OER = 0x00200000; REG_PIOC_PER = 0x00200000;
  }
}

void RapidFireIOclass::ToggleIOstatePin10() {
  uint32_t data = REG_PIOA_OSR; data &= 0x10000000; if (data != 0) {
    REG_PIOA_ODR = 0x10000000; REG_PIOA_PDR = 0x10000000;
  } else {
    REG_PIOA_OER = 0x10000000; REG_PIOA_PER = 0x10000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin11() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000080; if (data != 0) {
    REG_PIOD_ODR = 0x00000080; REG_PIOD_PDR = 0x00000080;
  } else {
    REG_PIOD_OER = 0x00000080; REG_PIOD_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePin12() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000100; if (data != 0) {
    REG_PIOD_ODR = 0x00000100; REG_PIOD_PDR = 0x00000100;
  } else {
    REG_PIOD_OER = 0x00000100; REG_PIOD_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePin13() {
  uint32_t data = REG_PIOB_OSR; data &= 0x08000000; if (data != 0) {
    REG_PIOB_ODR = 0x08000000; REG_PIOB_PDR = 0x08000000;
  } else {
    REG_PIOB_OER = 0x08000000; REG_PIOB_PER = 0x08000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin14() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000010; if (data != 0) {
    REG_PIOD_ODR = 0x00000010; REG_PIOD_PDR = 0x00000010;
  } else {
    REG_PIOD_OER = 0x00000010; REG_PIOD_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePin15() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000020; if (data != 0) {
    REG_PIOD_ODR = 0x00000020; REG_PIOD_PDR = 0x00000020;
  } else {
    REG_PIOD_OER = 0x00000020; REG_PIOD_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePin16() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00002000; if (data != 0) {
    REG_PIOA_ODR = 0x00002000; REG_PIOA_PDR = 0x00002000; 
  } else {
    REG_PIOA_OER = 0x00002000; REG_PIOA_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePin17() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00001000; if (data != 0) {
    REG_PIOA_ODR = 0x00001000; REG_PIOA_PDR = 0x00001000;
  } else {
    REG_PIOA_OER = 0x00001000; REG_PIOA_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePin18() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000800; if (data != 0) {
    REG_PIOA_ODR = 0x00000800; REG_PIOA_PDR = 0x00000800;
  } else {
    REG_PIOA_OER = 0x00000800; REG_PIOA_PER = 0x00000800;
  }
}

void RapidFireIOclass::ToggleIOstatePin19() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000400; if (data != 0) {
    REG_PIOA_ODR = 0x00000400; REG_PIOA_PDR = 0x00000400;
  } else {
    REG_PIOA_OER = 0x00000400; REG_PIOA_PER = 0x00000400;
  }
}

void RapidFireIOclass::ToggleIOstatePin20() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00001000; if (data != 0) {
    REG_PIOB_ODR = 0x00001000; REG_PIOB_PDR = 0x00001000;
  } else {
    REG_PIOB_OER = 0x00001000; REG_PIOB_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePin21() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00002000; if (data != 0) {
    REG_PIOB_ODR = 0x00002000; REG_PIOB_PDR = 0x00002000;
  } else {
    REG_PIOB_OER = 0x00002000; REG_PIOB_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePin22() {
  uint32_t data = REG_PIOB_OSR; data &= 0x04000000; if (data != 0) {
    REG_PIOB_ODR = 0x04000000; REG_PIOB_PDR = 0x04000000;
  } else {
    REG_PIOB_OER = 0x04000000; REG_PIOB_PER = 0x04000000;
  }
}

void RapidFireIOclass::ToggleIOstatePin23() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00004000; if (data != 0) {
    REG_PIOA_ODR = 0x00004000; REG_PIOA_PDR = 0x00004000;
  } else {
    REG_PIOA_OER = 0x00004000; REG_PIOA_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePin24() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00008000; if (data != 0) {
    REG_PIOA_ODR = 0x00008000; REG_PIOA_PDR = 0x00008000;
  } else {
    REG_PIOA_OER = 0x00008000; REG_PIOA_PER = 0x00008000;
  }
}

void RapidFireIOclass::ToggleIOstatePin25() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000001; if (data != 0) {
    REG_PIOD_ODR = 0x00000001; REG_PIOD_PDR = 0x00000001;
  } else {
    REG_PIOD_OER = 0x00000001; REG_PIOD_PER = 0x00000001;
  }
}

void RapidFireIOclass::ToggleIOstatePin26() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000002; if (data != 0) {
    REG_PIOD_ODR = 0x00000002; REG_PIOD_PDR = 0x00000002;
  } else {
    REG_PIOD_OER = 0x00000002; REG_PIOD_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePin27() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000004; if (data != 0) {
    REG_PIOD_ODR = 0x00000004; REG_PIOD_PDR = 0x00000004;
  } else {
    REG_PIOD_OER = 0x00000004; REG_PIOD_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePin28() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000008; if (data != 0) {
    REG_PIOD_ODR = 0x00000008; REG_PIOD_PDR = 0x00000008;
  } else {
    REG_PIOD_OER = 0x00000008; REG_PIOD_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePin29() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000040; if (data != 0) {
    REG_PIOD_ODR = 0x00000040; REG_PIOD_PDR = 0x00000040;
  } else {
    REG_PIOD_OER = 0x00000040; REG_PIOD_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePin30() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000200; if (data != 0) {
    REG_PIOD_ODR = 0x00000200; REG_PIOD_PDR = 0x00000200;
  } else {
    REG_PIOD_OER = 0x00000200; REG_PIOD_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePin31() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000080; if (data != 0) {
    REG_PIOA_ODR = 0x00000080; REG_PIOA_PDR = 0x00000080;
  } else {
    REG_PIOA_OER = 0x00000080; REG_PIOA_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePin32() {
  uint32_t data = REG_PIOD_OSR; data &= 0x00000400; if (data != 0) {
    REG_PIOD_ODR = 0x00000400; REG_PIOD_PDR = 0x00000400;
  } else {
    REG_PIOD_OER = 0x00000400; REG_PIOD_PER = 0x00000400;
  }
}

void RapidFireIOclass::ToggleIOstatePin33() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000002; if (data != 0) {
    REG_PIOC_ODR = 0x00000002; REG_PIOC_PDR = 0x00000002;
  } else {
    REG_PIOC_OER = 0x00000002; REG_PIOC_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePin34() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000004; if (data != 0) {
    REG_PIOC_ODR = 0x00000004; REG_PIOC_PDR = 0x00000004;
  } else {
    REG_PIOC_OER = 0x00000004; REG_PIOC_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePin35() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000008; if (data != 0) {
    REG_PIOC_ODR = 0x00000008; REG_PIOC_PDR = 0x00000008;
  } else {
    REG_PIOC_OER = 0x00000008; REG_PIOC_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePin36() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000010; if (data != 0) {
    REG_PIOC_ODR = 0x00000010; REG_PIOC_PDR = 0x00000010;
  } else {
    REG_PIOC_OER = 0x00000010; REG_PIOC_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePin37() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000020; if (data != 0) {
    REG_PIOC_ODR = 0x00000020; REG_PIOC_PDR = 0x00000020;
  } else {
    REG_PIOC_OER = 0x00000020; REG_PIOC_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePin38() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000040; if (data != 0) {
    REG_PIOC_ODR = 0x00000040; REG_PIOC_PDR = 0x00000040; 
  } else {
    REG_PIOC_OER = 0x00000040; REG_PIOC_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePin39() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000080; if (data != 0) {
    REG_PIOC_ODR = 0x00000080; REG_PIOC_PDR = 0x00000080;
  } else {
    REG_PIOC_OER = 0x00000080; REG_PIOC_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePin40() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000100; if (data != 0) {
    REG_PIOC_ODR = 0x00000100; REG_PIOC_PDR = 0x00000100;
  } else {
    REG_PIOC_OER = 0x00000100; REG_PIOC_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePin41() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00000200; if (data != 0) {
    REG_PIOC_ODR = 0x00000200; REG_PIOC_PDR = 0x00000200; 
  } else {
    REG_PIOC_OER = 0x00000200; REG_PIOC_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePin42() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00080000; if (data != 0) {
    REG_PIOA_ODR = 0x00080000; REG_PIOA_PDR = 0x00080000;
  } else {
    REG_PIOA_OER = 0x00080000; REG_PIOA_PER = 0x00080000;
  }
}

void RapidFireIOclass::ToggleIOstatePin43() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00100000; if (data != 0) {
    REG_PIOA_ODR = 0x00100000; REG_PIOA_PDR = 0x00100000;
  } else {
    REG_PIOA_OER = 0x00100000; REG_PIOA_PER = 0x00100000;
  }
}

void RapidFireIOclass::ToggleIOstatePin44() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00080000; if (data != 0) {
    REG_PIOC_ODR = 0x00080000; REG_PIOC_PDR = 0x00080000;
  } else {
    REG_PIOC_OER = 0x00080000; REG_PIOC_PER = 0x00080000;
  }
}

void RapidFireIOclass::ToggleIOstatePin45() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00040000; if (data != 0) {
    REG_PIOC_ODR = 0x00040000; REG_PIOC_PDR = 0x00040000;
  } else {
    REG_PIOC_OER = 0x00040000; REG_PIOC_PER = 0x00040000;
  }
}

void RapidFireIOclass::ToggleIOstatePin46() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00020000; if (data != 0) {
    REG_PIOC_ODR = 0x00020000; REG_PIOC_PDR = 0x00020000;
  } else {
    REG_PIOC_OER = 0x00020000; REG_PIOC_PER = 0x00020000;
  }
}

void RapidFireIOclass::ToggleIOstatePin47() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00010000; if (data != 0) {
    REG_PIOC_ODR = 0x00010000; REG_PIOC_PDR = 0x00010000;
  } else {
    REG_PIOC_OER = 0x00010000; REG_PIOC_PER = 0x00010000;
  }
}

void RapidFireIOclass::ToggleIOstatePin48() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00008000; if (data != 0) {
    REG_PIOC_ODR = 0x00008000; REG_PIOC_PDR = 0x00008000;
  } else {
    REG_PIOC_OER = 0x00008000; REG_PIOC_PER = 0x00008000;
  }
}

void RapidFireIOclass::ToggleIOstatePin49() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00004000; if (data != 0) {
    REG_PIOC_ODR = 0x00004000; REG_PIOC_PDR = 0x00004000;
  } else {
    REG_PIOC_OER = 0x00004000; REG_PIOC_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePin50() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00002000; if (data != 0) {
    REG_PIOC_ODR = 0x00002000; REG_PIOC_PDR = 0x00002000;
  } else {
    REG_PIOC_OER = 0x00002000; REG_PIOC_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePin51() {
  uint32_t data = REG_PIOC_OSR; data &= 0x00001000; if (data != 0) {
    REG_PIOC_ODR = 0x00001000; REG_PIOC_PDR = 0x00001000;
  } else {
    REG_PIOC_OER = 0x00001000; REG_PIOC_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePin52() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00200000; if (data != 0) {
    REG_PIOB_ODR = 0x00200000; REG_PIOB_PDR = 0x00200000;
  } else {
    REG_PIOB_OER = 0x00200000; REG_PIOB_PER = 0x00200000;
  }
}

void RapidFireIOclass::ToggleIOstatePin53() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00004000; if (data != 0) {
    REG_PIOB_ODR = 0x00004000; REG_PIOB_PDR = 0x00004000;
  } else {
    REG_PIOB_OER = 0x00004000; REG_PIOB_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA0() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00010000; if (data != 0) {
    REG_PIOA_ODR = 0x00010000; REG_PIOA_PDR = 0x00010000;
  } else {
    REG_PIOA_OER = 0x00010000; REG_PIOA_PER = 0x00010000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA1() {
  uint32_t data = REG_PIOA_OSR; data &= 0x01000000; if (data != 0) {
    REG_PIOA_ODR = 0x01000000; REG_PIOA_PDR = 0x01000000;
  } else {
    REG_PIOA_OER = 0x01000000; REG_PIOA_PER = 0x01000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA2() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00800000; if (data != 0) {
    REG_PIOA_ODR = 0x00800000; REG_PIOA_PDR = 0x00800000;
  } else {
    REG_PIOA_OER = 0x00800000; REG_PIOA_PER = 0x00800000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA3() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00400000; if (data != 0) {
    REG_PIOA_ODR = 0x00400000; REG_PIOA_PDR = 0x00400000;
  } else {
    REG_PIOA_OER = 0x00400000; REG_PIOA_PER = 0x00400000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA4() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000040; if (data != 0) {
    REG_PIOA_ODR = 0x00000040; REG_PIOA_PDR = 0x00000040;
  } else {
    REG_PIOA_OER = 0x00000040; REG_PIOA_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePinA5() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000010; if (data != 0) {
    REG_PIOA_ODR = 0x00000010; REG_PIOA_PDR = 0x00000010;
  } else {
    REG_PIOA_OER = 0x00000010; REG_PIOA_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePinA6() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000008; if (data != 0) {
    REG_PIOA_ODR = 0x00000008; REG_PIOA_PDR = 0x00000008;
  } else {
    REG_PIOA_OER = 0x00000008; REG_PIOA_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePinA7() {
  uint32_t data = REG_PIOA_OSR; data &= 0x00000004; if (data != 0) {
    REG_PIOA_ODR = 0x00000004; REG_PIOA_PDR = 0x00000004;
  } else {
    REG_PIOA_OER = 0x00000004; REG_PIOA_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePinA8() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00020000; if (data != 0) {
    REG_PIOB_ODR = 0x00020000; REG_PIOB_PDR = 0x00020000;
  } else {
    REG_PIOB_OER = 0x00020000; REG_PIOB_PER = 0x00020000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA9() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00040000; if (data != 0) {
    REG_PIOB_ODR = 0x00040000; REG_PIOB_PDR = 0x00040000;
  } else {
    REG_PIOB_OER = 0x00040000; REG_PIOB_PER = 0x00040000;
  }
}

void RapidFireIOclass::ToggleIOstatePinA10() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00080000; if (data != 0) {
    REG_PIOB_ODR = 0x00080000; REG_PIOB_PDR = 0x00080000;
  } else {
    REG_PIOB_OER = 0x00080000; REG_PIOB_PER = 0x00080000; 
  }
}

void RapidFireIOclass::ToggleIOstatePinA11() {
  uint32_t data = REG_PIOB_OSR; data &= 0x00100000; if (data != 0) {
    REG_PIOB_ODR = 0x00100000; REG_PIOB_PDR = 0x00100000;
  } else {
    REG_PIOB_OER = 0x00100000; REG_PIOB_PER = 0x00100000;
  }
}

uint32_t RapidFireIOclass::ReadPin0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPin1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPin2() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPin3() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPin4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x20000000; return data;
}

uint32_t RapidFireIOclass::ReadPin5() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPin6() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPin7() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPin8() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPin9() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPin10() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPin11() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPin12() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPin13() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x08000000; return data;
}

uint32_t RapidFireIOclass::ReadPin14() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPin15() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPin16() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPin17() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPin18() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPin19() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPin20() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPin21() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPin22() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x04000000; return data;
}

uint32_t RapidFireIOclass::ReadPin23() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPin24() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPin25() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPin26() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPin27() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPin28() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPin29() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPin30() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPin31() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPin32() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPin33() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPin34() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPin35() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPin36() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPin37() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPin38() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPin39() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPin40() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPin41() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPin42() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPin43() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPin44() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPin45() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPin46() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPin47() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPin48() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPin49() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPin50() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPin51() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPin52() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPin53() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPinA0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPinA1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPinA2() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPinA3() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinA4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinA5() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinA6() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinA7() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinA8() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPinA9() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPinA10() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPinA11() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00100000; return data;
}

void RapidFireIOclass::SetPinPA0() {
  REG_PIOA_SODR = 0x00000001;
}

void RapidFireIOclass::SetPinPA1() {
  REG_PIOA_SODR = 0x00000002;
}

void RapidFireIOclass::SetPinPA2() {
  REG_PIOA_SODR = 0x00000004;
}

void RapidFireIOclass::SetPinPA3() {
  REG_PIOA_SODR = 0x00000008;
}

void RapidFireIOclass::SetPinPA4() {
  REG_PIOA_SODR = 0x00000010;
}

void RapidFireIOclass::SetPinPA5() {
  REG_PIOA_SODR = 0x00000020;
}

void RapidFireIOclass::SetPinPA6() {
  REG_PIOA_SODR = 0x00000040;
}

void RapidFireIOclass::SetPinPA7() {
  REG_PIOA_SODR = 0x00000080;
}

void RapidFireIOclass::SetPinPA8() {
  REG_PIOA_SODR = 0x00000100;
}

void RapidFireIOclass::SetPinPA9() {
  REG_PIOA_SODR = 0x00000200;
}

void RapidFireIOclass::SetPinPA10() {
  REG_PIOA_SODR = 0x00000400;
}

void RapidFireIOclass::SetPinPA11() {
  REG_PIOA_SODR = 0x00000800;
}

void RapidFireIOclass::SetPinPA12() {
  REG_PIOA_SODR = 0x00001000;
}

void RapidFireIOclass::SetPinPA13() {
  REG_PIOA_SODR = 0x00002000;
}

void RapidFireIOclass::SetPinPA14() {
  REG_PIOA_SODR = 0x00004000;
}

void RapidFireIOclass::SetPinPA15() {
  REG_PIOA_SODR = 0x00008000;
}

void RapidFireIOclass::SetPinPA16() {
  REG_PIOA_SODR = 0x00010000;
}

void RapidFireIOclass::SetPinPA17() {
  REG_PIOA_SODR = 0x00020000;
}

void RapidFireIOclass::SetPinPA18() {
  REG_PIOA_SODR = 0x00040000;
}

void RapidFireIOclass::SetPinPA19() {
  REG_PIOA_SODR = 0x00080000;
}

void RapidFireIOclass::SetPinPA20() {
  REG_PIOA_SODR = 0x00100000;
}

void RapidFireIOclass::SetPinPA21() {
  REG_PIOA_SODR = 0x00200000;
}

void RapidFireIOclass::SetPinPA22() {
  REG_PIOA_SODR = 0x00400000;
}

void RapidFireIOclass::SetPinPA23() {
  REG_PIOA_SODR = 0x00800000;
}

void RapidFireIOclass::SetPinPA24() {
  REG_PIOA_SODR = 0x01000000;
}

void RapidFireIOclass::SetPinPA25() {
  REG_PIOA_SODR = 0x02000000;
}

void RapidFireIOclass::SetPinPA26() {
  REG_PIOA_SODR = 0x04000000;
}

void RapidFireIOclass::SetPinPA27() {
  REG_PIOA_SODR = 0x08000000;
}

void RapidFireIOclass::SetPinPA28() {
  REG_PIOA_SODR = 0x10000000;
}

void RapidFireIOclass::SetPinPA29() {
  REG_PIOA_SODR = 0x20000000;
}

void RapidFireIOclass::SetPinPB0() {
  REG_PIOB_SODR = 0x00000001;
}

void RapidFireIOclass::SetPinPB1() {
  REG_PIOB_SODR = 0x00000002;
}

void RapidFireIOclass::SetPinPB2() {
  REG_PIOB_SODR = 0x00000004;
}

void RapidFireIOclass::SetPinPB3() {
  REG_PIOB_SODR = 0x00000008;
}

void RapidFireIOclass::SetPinPB4() {
  REG_PIOB_SODR = 0x00000010;
}

void RapidFireIOclass::SetPinPB5() {
  REG_PIOB_SODR = 0x00000020;
}

void RapidFireIOclass::SetPinPB6() {
  REG_PIOB_SODR = 0x00000040;
}

void RapidFireIOclass::SetPinPB7() {
  REG_PIOB_SODR = 0x00000080;
}

void RapidFireIOclass::SetPinPB8() {
  REG_PIOB_SODR = 0x00000100;
}

void RapidFireIOclass::SetPinPB9() {
  REG_PIOB_SODR = 0x00000200;
}

void RapidFireIOclass::SetPinPB10() {
  REG_PIOB_SODR = 0x00000400;
}

void RapidFireIOclass::SetPinPB11() {
  REG_PIOB_SODR = 0x00000800;
}

void RapidFireIOclass::SetPinPB12() {
  REG_PIOB_SODR = 0x00001000;
}

void RapidFireIOclass::SetPinPB13() {
  REG_PIOB_SODR = 0x00002000;
}

void RapidFireIOclass::SetPinPB14() {
  REG_PIOB_SODR = 0x00004000;
}

void RapidFireIOclass::SetPinPB15() {
  REG_PIOB_SODR = 0x00008000;
}

void RapidFireIOclass::SetPinPB16() {
  REG_PIOB_SODR = 0x00010000;
}

void RapidFireIOclass::SetPinPB17() {
  REG_PIOB_SODR = 0x00020000;
}

void RapidFireIOclass::SetPinPB18() {
  REG_PIOB_SODR = 0x00040000;
}

void RapidFireIOclass::SetPinPB19() {
  REG_PIOB_SODR = 0x00080000;
}

void RapidFireIOclass::SetPinPB20() {
  REG_PIOB_SODR = 0x00100000;
}

void RapidFireIOclass::SetPinPB21() {
  REG_PIOB_SODR = 0x00200000;
}

void RapidFireIOclass::SetPinPB22() {
  REG_PIOB_SODR = 0x00400000;
}

void RapidFireIOclass::SetPinPB23() {
  REG_PIOB_SODR = 0x00800000;
}

void RapidFireIOclass::SetPinPB24() {
  REG_PIOB_SODR = 0x01000000;
}

void RapidFireIOclass::SetPinPB25() {
  REG_PIOB_SODR = 0x02000000;
}

void RapidFireIOclass::SetPinPB26() {
  REG_PIOB_SODR = 0x04000000;
}

void RapidFireIOclass::SetPinPB27() {
  REG_PIOB_SODR = 0x08000000;
}

void RapidFireIOclass::SetPinPB28() {
  REG_PIOB_SODR = 0x10000000;
}

void RapidFireIOclass::SetPinPB29() {
  REG_PIOB_SODR = 0x20000000;
}

void RapidFireIOclass::SetPinPB30() {
  REG_PIOB_SODR = 0x40000000;
}

void RapidFireIOclass::SetPinPB31() {
  REG_PIOB_SODR = 0x80000000;
}

void RapidFireIOclass::SetPinPC0() {
  REG_PIOC_SODR = 0x00000001;
}

void RapidFireIOclass::SetPinPC1() {
  REG_PIOC_SODR = 0x00000002;
}

void RapidFireIOclass::SetPinPC2() {
  REG_PIOC_SODR = 0x00000004;
}

void RapidFireIOclass::SetPinPC3() {
  REG_PIOC_SODR = 0x00000008;
}

void RapidFireIOclass::SetPinPC4() {
  REG_PIOC_SODR = 0x00000010;
}

void RapidFireIOclass::SetPinPC5() {
  REG_PIOC_SODR = 0x00000020;
}

void RapidFireIOclass::SetPinPC6() {
  REG_PIOC_SODR = 0x00000040;
}

void RapidFireIOclass::SetPinPC7() {
  REG_PIOC_SODR = 0x00000080;
}

void RapidFireIOclass::SetPinPC8() {
  REG_PIOC_SODR = 0x00000100;
}

void RapidFireIOclass::SetPinPC9() {
  REG_PIOC_SODR = 0x00000200;
}

void RapidFireIOclass::SetPinPC10() {
  REG_PIOC_SODR = 0x00000400;
}

void RapidFireIOclass::SetPinPC11() {
  REG_PIOC_SODR = 0x00000800;
}

void RapidFireIOclass::SetPinPC12() {
  REG_PIOC_SODR = 0x00001000;
}

void RapidFireIOclass::SetPinPC13() {
  REG_PIOC_SODR = 0x00002000;
}

void RapidFireIOclass::SetPinPC14() {
  REG_PIOC_SODR = 0x00004000;
}

void RapidFireIOclass::SetPinPC15() {
  REG_PIOC_SODR = 0x00008000;
}

void RapidFireIOclass::SetPinPC16() {
  REG_PIOC_SODR = 0x00010000;
}

void RapidFireIOclass::SetPinPC17() {
  REG_PIOC_SODR = 0x00020000;
}

void RapidFireIOclass::SetPinPC18() {
  REG_PIOC_SODR = 0x00040000;
}

void RapidFireIOclass::SetPinPC19() {
  REG_PIOC_SODR = 0x00080000;
}

void RapidFireIOclass::SetPinPC20() {
  REG_PIOC_SODR = 0x00100000;
}

void RapidFireIOclass::SetPinPC21() {
  REG_PIOC_SODR = 0x00200000;
}

void RapidFireIOclass::SetPinPC22() {
  REG_PIOC_SODR = 0x00400000;
}

void RapidFireIOclass::SetPinPC23() {
  REG_PIOC_SODR = 0x00800000;
}

void RapidFireIOclass::SetPinPC24() {
  REG_PIOC_SODR = 0x01000000;
}

void RapidFireIOclass::SetPinPC25() {
  REG_PIOC_SODR = 0x02000000;
}

void RapidFireIOclass::SetPinPC26() {
  REG_PIOC_SODR = 0x04000000;
}

void RapidFireIOclass::SetPinPC27() {
  REG_PIOC_SODR = 0x08000000;
}

void RapidFireIOclass::SetPinPC28() {
  REG_PIOC_SODR = 0x10000000;
}

void RapidFireIOclass::SetPinPC29() {
  REG_PIOC_SODR = 0x20000000;
}

void RapidFireIOclass::SetPinPC30() {
  REG_PIOC_SODR = 0x40000000;
}

void RapidFireIOclass::SetPinPD0() {
  REG_PIOD_SODR = 0x00000001;
}

void RapidFireIOclass::SetPinPD1() {
  REG_PIOD_SODR = 0x00000002;
}

void RapidFireIOclass::SetPinPD2() {
  REG_PIOD_SODR = 0x00000004;
}

void RapidFireIOclass::SetPinPD3() {
  REG_PIOD_SODR = 0x00000008;
}

void RapidFireIOclass::SetPinPD4() {
  REG_PIOD_SODR = 0x00000010;
}

void RapidFireIOclass::SetPinPD5() {
  REG_PIOD_SODR = 0x00000020;
}

void RapidFireIOclass::SetPinPD6() {
  REG_PIOD_SODR = 0x00000040;
}

void RapidFireIOclass::SetPinPD7() {
  REG_PIOD_SODR = 0x00000080;
}

void RapidFireIOclass::SetPinPD8() {
  REG_PIOD_SODR = 0x00000100;
}

void RapidFireIOclass::SetPinPD9() {
  REG_PIOD_SODR = 0x00000200;
}

void RapidFireIOclass::SetPinPD10() {
  REG_PIOD_SODR = 0x00000400;
}

void RapidFireIOclass::ClearPinPA0() {
  REG_PIOA_CODR = 0x00000001;
}

void RapidFireIOclass::ClearPinPA1() {
  REG_PIOA_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPinPA2() {
  REG_PIOA_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPinPA3() {
  REG_PIOA_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPinPA4() {
  REG_PIOA_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPinPA5() {
  REG_PIOA_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPinPA6() {
  REG_PIOA_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPinPA7() {
  REG_PIOA_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPinPA8() {
  REG_PIOA_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPinPA9() {
  REG_PIOA_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPinPA10() {
  REG_PIOA_CODR = 0x00000400;
}

void RapidFireIOclass::ClearPinPA11() {
  REG_PIOA_CODR = 0x00000800;
}

void RapidFireIOclass::ClearPinPA12() {
  REG_PIOA_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPinPA13() {
  REG_PIOA_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPinPA14() {
  REG_PIOA_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPinPA15() {
  REG_PIOA_CODR = 0x00008000;
}

void RapidFireIOclass::ClearPinPA16() {
  REG_PIOA_CODR = 0x00010000;
}

void RapidFireIOclass::ClearPinPA17() {
  REG_PIOA_CODR = 0x00020000;
}

void RapidFireIOclass::ClearPinPA18() {
  REG_PIOA_CODR = 0x00040000;
}

void RapidFireIOclass::ClearPinPA19() {
  REG_PIOA_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPinPA20() {
  REG_PIOA_CODR = 0x00100000;
}

void RapidFireIOclass::ClearPinPA21() {
  REG_PIOA_CODR = 0x00200000;
}

void RapidFireIOclass::ClearPinPA22() {
  REG_PIOA_CODR = 0x00400000;
}

void RapidFireIOclass::ClearPinPA23() {
  REG_PIOA_CODR = 0x00800000;
}

void RapidFireIOclass::ClearPinPA24() {
  REG_PIOA_CODR = 0x01000000;
}

void RapidFireIOclass::ClearPinPA25() {
  REG_PIOA_CODR = 0x02000000;
}

void RapidFireIOclass::ClearPinPA26() {
  REG_PIOA_CODR = 0x04000000;
}

void RapidFireIOclass::ClearPinPA27() {
  REG_PIOA_CODR = 0x08000000;
}

void RapidFireIOclass::ClearPinPA28() {
  REG_PIOA_CODR = 0x10000000;
}

void RapidFireIOclass::ClearPinPA29() {
  REG_PIOA_CODR = 0x20000000;
}

void RapidFireIOclass::ClearPinPB0() {
  REG_PIOB_CODR = 0x00000001;
}

void RapidFireIOclass::ClearPinPB1() {
  REG_PIOB_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPinPB2() {
  REG_PIOB_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPinPB3() {
  REG_PIOB_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPinPB4() {
  REG_PIOB_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPinPB5() {
  REG_PIOB_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPinPB6() {
  REG_PIOB_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPinPB7() {
  REG_PIOB_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPinPB8() {
  REG_PIOB_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPinPB9() {
  REG_PIOB_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPinPB10() {
  REG_PIOB_CODR = 0x00000400;
}

void RapidFireIOclass::ClearPinPB11() {
  REG_PIOB_CODR = 0x00000800;
}

void RapidFireIOclass::ClearPinPB12() {
  REG_PIOB_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPinPB13() {
  REG_PIOB_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPinPB14() {
  REG_PIOB_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPinPB15() {
  REG_PIOB_CODR = 0x00008000;
}

void RapidFireIOclass::ClearPinPB16() {
  REG_PIOB_CODR = 0x00010000;
}

void RapidFireIOclass::ClearPinPB17() {
  REG_PIOB_CODR = 0x00020000;
}

void RapidFireIOclass::ClearPinPB18() {
  REG_PIOB_CODR = 0x00040000;
}

void RapidFireIOclass::ClearPinPB19() {
  REG_PIOB_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPinPB20() {
  REG_PIOB_CODR = 0x00100000;
}

void RapidFireIOclass::ClearPinPB21() {
  REG_PIOB_CODR = 0x00200000;
}

void RapidFireIOclass::ClearPinPB22() {
  REG_PIOB_CODR = 0x00400000;
}

void RapidFireIOclass::ClearPinPB23() {
  REG_PIOB_CODR = 0x00800000;
}

void RapidFireIOclass::ClearPinPB24() {
  REG_PIOB_CODR = 0x01000000;
}

void RapidFireIOclass::ClearPinPB25() {
  REG_PIOB_CODR = 0x02000000;
}

void RapidFireIOclass::ClearPinPB26() {
  REG_PIOB_CODR = 0x04000000;
}

void RapidFireIOclass::ClearPinPB27() {
  REG_PIOB_CODR = 0x08000000;
}

void RapidFireIOclass::ClearPinPB28() {
  REG_PIOB_CODR = 0x10000000;
}

void RapidFireIOclass::ClearPinPB29() {
  REG_PIOB_CODR = 0x20000000;
}

void RapidFireIOclass::ClearPinPB30() {
  REG_PIOB_CODR = 0x40000000;
}

void RapidFireIOclass::ClearPinPB31() {
  REG_PIOB_CODR = 0x80000000;
}

void RapidFireIOclass::ClearPinPC0() {
  REG_PIOC_CODR = 0x00000001;
}

void RapidFireIOclass::ClearPinPC1() {
  REG_PIOC_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPinPC2() {
  REG_PIOC_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPinPC3() {
  REG_PIOC_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPinPC4() {
  REG_PIOC_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPinPC5() {
  REG_PIOC_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPinPC6() {
  REG_PIOC_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPinPC7() {
  REG_PIOC_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPinPC8() {
  REG_PIOC_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPinPC9() {
  REG_PIOC_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPinPC10() {
  REG_PIOC_CODR = 0x00000400;
}

void RapidFireIOclass::ClearPinPC11() {
  REG_PIOC_CODR = 0x00000800;
}

void RapidFireIOclass::ClearPinPC12() {
  REG_PIOC_CODR = 0x00001000;
}

void RapidFireIOclass::ClearPinPC13() {
  REG_PIOC_CODR = 0x00002000;
}

void RapidFireIOclass::ClearPinPC14() {
  REG_PIOC_CODR = 0x00004000;
}

void RapidFireIOclass::ClearPinPC15() {
  REG_PIOC_CODR = 0x00008000;
}

void RapidFireIOclass::ClearPinPC16() {
  REG_PIOC_CODR = 0x00010000;
}

void RapidFireIOclass::ClearPinPC17() {
  REG_PIOC_CODR = 0x00020000;
}

void RapidFireIOclass::ClearPinPC18() {
  REG_PIOC_CODR = 0x00040000;
}

void RapidFireIOclass::ClearPinPC19() {
  REG_PIOC_CODR = 0x00080000;
}

void RapidFireIOclass::ClearPinPC20() {
  REG_PIOC_CODR = 0x00100000;
}

void RapidFireIOclass::ClearPinPC21() {
  REG_PIOC_CODR = 0x00200000;
}

void RapidFireIOclass::ClearPinPC22() {
  REG_PIOC_CODR = 0x00400000;
}

void RapidFireIOclass::ClearPinPC23() {
  REG_PIOC_CODR = 0x00800000;
}

void RapidFireIOclass::ClearPinPC24() {
  REG_PIOC_CODR = 0x01000000;
}

void RapidFireIOclass::ClearPinPC25() {
  REG_PIOC_CODR = 0x02000000;
}

void RapidFireIOclass::ClearPinPC26() {
  REG_PIOC_CODR = 0x04000000;
}

void RapidFireIOclass::ClearPinPC27() {
  REG_PIOC_CODR = 0x08000000;
}

void RapidFireIOclass::ClearPinPC28() {
  REG_PIOC_CODR = 0x10000000;
}

void RapidFireIOclass::ClearPinPC29() {
  REG_PIOC_CODR = 0x20000000;
}

void RapidFireIOclass::ClearPinPC30() {
  REG_PIOC_CODR = 0x40000000;
}

void RapidFireIOclass::ClearPinPD0() {
  REG_PIOD_CODR = 0x00000001;
}

void RapidFireIOclass::ClearPinPD1() {
  REG_PIOD_CODR = 0x00000002;
}

void RapidFireIOclass::ClearPinPD2() {
  REG_PIOD_CODR = 0x00000004;
}

void RapidFireIOclass::ClearPinPD3() {
  REG_PIOD_CODR = 0x00000008;
}

void RapidFireIOclass::ClearPinPD4() {
  REG_PIOD_CODR = 0x00000010;
}

void RapidFireIOclass::ClearPinPD5() {
  REG_PIOD_CODR = 0x00000020;
}

void RapidFireIOclass::ClearPinPD6() {
  REG_PIOD_CODR = 0x00000040;
}

void RapidFireIOclass::ClearPinPD7() {
  REG_PIOD_CODR = 0x00000080;
}

void RapidFireIOclass::ClearPinPD8() {
  REG_PIOD_CODR = 0x00000100;
}

void RapidFireIOclass::ClearPinPD9() {
  REG_PIOD_CODR = 0x00000200;
}

void RapidFireIOclass::ClearPinPD10() {
  REG_PIOD_CODR = 0x00000400;
}

void RapidFireIOclass::TogglePinPA0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOA_CODR = 0x00000001;
  } else {
    REG_PIOA_SODR = 0x00000001;
  }
}

void RapidFireIOclass::TogglePinPA1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOA_CODR = 0x00000002;
  } else {
    REG_PIOA_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePinPA2() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOA_CODR = 0x00000004;
  } else {
    REG_PIOA_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePinPA3() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOA_CODR = 0x00000008;
  } else {
    REG_PIOA_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePinPA4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOA_CODR = 0x00000010;
  } else {
    REG_PIOA_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePinPA5() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOA_CODR = 0x00000020;
  } else {
    REG_PIOA_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePinPA6() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOA_CODR = 0x00000040;
  } else {
    REG_PIOA_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePinPA7() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOA_CODR = 0x00000080;
  } else {
    REG_PIOA_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePinPA8() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOA_CODR = 0x00000100;
  } else {
    REG_PIOA_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePinPA9() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOA_CODR = 0x00000200;
  } else {
    REG_PIOA_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePinPA10() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOA_CODR = 0x00000400;
  } else {
    REG_PIOA_SODR = 0x00000400;
  }
}

void RapidFireIOclass::TogglePinPA11() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOA_CODR = 0x00000800;
  } else {
    REG_PIOA_SODR = 0x00000800;
  }
}

void RapidFireIOclass::TogglePinPA12() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOA_CODR = 0x00001000;
  } else {
    REG_PIOA_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePinPA13() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOA_CODR = 0x00002000;
  } else {
    REG_PIOA_SODR = 0x00002000;
  }
}

void RapidFireIOclass::TogglePinPA14() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOA_CODR = 0x00004000;
  } else {
    REG_PIOA_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePinPA15() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOA_CODR = 0x00008000;
  } else {
    REG_PIOA_SODR = 0x00008000;
  }
}

void RapidFireIOclass::TogglePinPA16() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOA_CODR = 0x00010000;
  } else {
    REG_PIOA_SODR = 0x00010000;
  }
}

void RapidFireIOclass::TogglePinPA17() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOA_CODR = 0x00020000;
  } else {
    REG_PIOA_SODR = 0x00020000;
  }
}

void RapidFireIOclass::TogglePinPA18() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOA_CODR = 0x00040000;
  } else {
    REG_PIOA_SODR = 0x00040000;
  }
}

void RapidFireIOclass::TogglePinPA19() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOA_CODR = 0x00080000;
  } else {
    REG_PIOA_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePinPA20() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOA_CODR = 0x00100000;
  } else {
    REG_PIOA_SODR = 0x00100000;
  }
}

void RapidFireIOclass::TogglePinPA21() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOA_CODR = 0x00200000;
  } else {
    REG_PIOA_SODR = 0x00200000;
  }
}

void RapidFireIOclass::TogglePinPA22() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOA_CODR = 0x00400000;
  } else {
    REG_PIOA_SODR = 0x00400000;
  }
}

void RapidFireIOclass::TogglePinPA23() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOA_CODR = 0x00800000;
  } else {
    REG_PIOA_SODR = 0x00800000;
  }
}

void RapidFireIOclass::TogglePinPA24() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOA_CODR = 0x01000000;
  } else {
    REG_PIOA_SODR = 0x01000000;
  }
}

void RapidFireIOclass::TogglePinPA25() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOA_CODR = 0x02000000;
  } else {
    REG_PIOA_SODR = 0x02000000;
  }
}

void RapidFireIOclass::TogglePinPA26() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOA_CODR = 0x04000000;
  } else {
    REG_PIOA_SODR = 0x04000000;
  }
}

void RapidFireIOclass::TogglePinPA27() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOA_CODR = 0x08000000;
  } else {
    REG_PIOA_SODR = 0x08000000;
  }
}

void RapidFireIOclass::TogglePinPA28() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOA_CODR = 0x10000000;
  } else {
    REG_PIOA_SODR = 0x10000000;
  }
}

void RapidFireIOclass::TogglePinPA29() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOA_CODR = 0x20000000;
  } else {
    REG_PIOA_SODR = 0x20000000;
  }
}

void RapidFireIOclass::TogglePinPB0() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOB_CODR = 0x00000001;
  } else {
    REG_PIOB_SODR = 0x00000001;
  }
}

void RapidFireIOclass::TogglePinPB1() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOB_CODR = 0x00000002;
  } else {
    REG_PIOB_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePinPB2() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOB_CODR = 0x00000004;
  } else {
    REG_PIOB_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePinPB3() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOB_CODR = 0x00000008;
  } else {
    REG_PIOB_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePinPB4() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOB_CODR = 0x00000010;
  } else {
    REG_PIOB_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePinPB5() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOB_CODR = 0x00000020;
  } else {
    REG_PIOB_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePinPB6() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOB_CODR = 0x00000040;
  } else {
    REG_PIOB_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePinPB7() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOB_CODR = 0x00000080;
  } else {
    REG_PIOB_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePinPB8() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOB_CODR = 0x00000100;
  } else {
    REG_PIOB_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePinPB9() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOB_CODR = 0x00000200;
  } else {
    REG_PIOB_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePinPB10() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOB_CODR = 0x00000400;
  } else {
    REG_PIOB_SODR = 0x00000400;
  }
}

void RapidFireIOclass::TogglePinPB11() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOB_CODR = 0x00000800;
  } else {
    REG_PIOB_SODR = 0x00000800;
  }
}

void RapidFireIOclass::TogglePinPB12() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOB_CODR = 0x00001000;
  } else {
    REG_PIOB_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePinPB13() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOB_CODR = 0x00002000;
  } else {
    REG_PIOB_SODR = 0x00002000;
  }
}

void RapidFireIOclass::TogglePinPB14() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOB_CODR = 0x00004000;
  } else {
    REG_PIOB_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePinPB15() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOB_CODR = 0x00008000;
  } else {
    REG_PIOB_SODR = 0x00008000;
  }
}

void RapidFireIOclass::TogglePinPB16() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOB_CODR = 0x00010000;
  } else {
    REG_PIOB_SODR = 0x00010000;
  }
}

void RapidFireIOclass::TogglePinPB17() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOB_CODR = 0x00020000;
  } else {
    REG_PIOB_SODR = 0x00020000;
  }
}

void RapidFireIOclass::TogglePinPB18() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOB_CODR = 0x00040000;
  } else {
    REG_PIOB_SODR = 0x00040000;
  }
}

void RapidFireIOclass::TogglePinPB19() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOB_CODR = 0x00080000;
  } else {
    REG_PIOB_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePinPB20() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOB_CODR = 0x00100000;
  } else {
    REG_PIOB_SODR = 0x00100000;
  }
}

void RapidFireIOclass::TogglePinPB21() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOB_CODR = 0x00200000;
  } else {
    REG_PIOB_SODR = 0x00200000;
  }
}

void RapidFireIOclass::TogglePinPB22() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOB_CODR = 0x00400000;
  } else {
    REG_PIOB_SODR = 0x00400000;
  }
}

void RapidFireIOclass::TogglePinPB23() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOB_CODR = 0x00800000;
  } else {
    REG_PIOB_SODR = 0x00800000;
  }
}

void RapidFireIOclass::TogglePinPB24() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOB_CODR = 0x01000000;
  } else {
    REG_PIOB_SODR = 0x01000000;
  }
}

void RapidFireIOclass::TogglePinPB25() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOB_CODR = 0x02000000;
  } else {
    REG_PIOB_SODR = 0x02000000;
  }
}

void RapidFireIOclass::TogglePinPB26() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOB_CODR = 0x04000000;
  } else {
    REG_PIOB_SODR = 0x04000000;
  }
}

void RapidFireIOclass::TogglePinPB27() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOB_CODR = 0x08000000;
  } else {
    REG_PIOB_SODR = 0x08000000;
  }
}

void RapidFireIOclass::TogglePinPB28() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOB_CODR = 0x10000000;
  } else {
    REG_PIOB_SODR = 0x10000000;
  }
}

void RapidFireIOclass::TogglePinPB29() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOB_CODR = 0x20000000;
  } else {
    REG_PIOB_SODR = 0x20000000;
  }
}

void RapidFireIOclass::TogglePinPB30() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x40000000; if (data != 0) {
    REG_PIOB_CODR = 0x40000000;
  } else {
    REG_PIOB_SODR = 0x40000000;
  }
}

void RapidFireIOclass::TogglePinPB31() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x80000000; if (data != 0) {
    REG_PIOB_CODR = 0x80000000;
  } else {
    REG_PIOB_SODR = 0x80000000;
  }
}

void RapidFireIOclass::TogglePinPC0() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOC_CODR = 0x00000001;
  } else {
    REG_PIOC_SODR = 0x00000001;
  }
}

void RapidFireIOclass::TogglePinPC1() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOC_CODR = 0x00000002;
  } else {
    REG_PIOC_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePinPC2() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOC_CODR = 0x00000004;
  } else {
    REG_PIOC_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePinPC3() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOC_CODR = 0x00000008;
  } else {
    REG_PIOC_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePinPC4() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOC_CODR = 0x00000010;
  } else {
    REG_PIOC_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePinPC5() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOC_CODR = 0x00000020;
  } else {
    REG_PIOC_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePinPC6() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOC_CODR = 0x00000040;
  } else {
    REG_PIOC_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePinPC7() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOC_CODR = 0x00000080;
  } else {
    REG_PIOC_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePinPC8() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOC_CODR = 0x00000100;
  } else {
    REG_PIOC_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePinPC9() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOC_CODR = 0x00000200;
  } else {
    REG_PIOC_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePinPC10() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOC_CODR = 0x00000400;
  } else {
    REG_PIOC_SODR = 0x00000400;
  }
}

void RapidFireIOclass::TogglePinPC11() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOC_CODR = 0x00000800;
  } else {
    REG_PIOC_SODR = 0x00000800;
  }
}

void RapidFireIOclass::TogglePinPC12() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOC_CODR = 0x00001000;
  } else {
    REG_PIOC_SODR = 0x00001000;
  }
}

void RapidFireIOclass::TogglePinPC13() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOC_CODR = 0x00002000;
  } else {
    REG_PIOC_SODR = 0x00002000;
  }
}

void RapidFireIOclass::TogglePinPC14() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOC_CODR = 0x00004000;
  } else {
    REG_PIOC_SODR = 0x00004000;
  }
}

void RapidFireIOclass::TogglePinPC15() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOC_CODR = 0x00008000;
  } else {
    REG_PIOC_SODR = 0x00008000;
  }
}

void RapidFireIOclass::TogglePinPC16() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOC_CODR = 0x00010000;
  } else {
    REG_PIOC_SODR = 0x00010000;
  }
}

void RapidFireIOclass::TogglePinPC17() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOC_CODR = 0x00020000;
  } else {
    REG_PIOC_SODR = 0x00020000;
  }
}

void RapidFireIOclass::TogglePinPC18() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOC_CODR = 0x00040000;
  } else {
    REG_PIOC_SODR = 0x00040000;
  }
}

void RapidFireIOclass::TogglePinPC19() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOC_CODR = 0x00080000;
  } else {
    REG_PIOC_SODR = 0x00080000;
  }
}

void RapidFireIOclass::TogglePinPC20() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOC_CODR = 0x00100000;
  } else {
    REG_PIOC_SODR = 0x00100000;
  }
}

void RapidFireIOclass::TogglePinPC21() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOC_CODR = 0x00200000;
  } else {
    REG_PIOC_SODR = 0x00200000;
  }
}

void RapidFireIOclass::TogglePinPC22() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOC_CODR = 0x00400000;
  } else {
    REG_PIOC_SODR = 0x00400000;
  }
}

void RapidFireIOclass::TogglePinPC23() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOC_CODR = 0x00800000;
  } else {
    REG_PIOC_SODR = 0x00800000;
  }
}

void RapidFireIOclass::TogglePinPC24() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOC_CODR = 0x01000000;
  } else {
    REG_PIOC_SODR = 0x01000000;
  }
}

void RapidFireIOclass::TogglePinPC25() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOC_CODR = 0x02000000;
  } else {
    REG_PIOC_SODR = 0x02000000;
  }
}

void RapidFireIOclass::TogglePinPC26() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOC_CODR = 0x04000000;
  } else {
    REG_PIOC_SODR = 0x04000000;
  }
}

void RapidFireIOclass::TogglePinPC27() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOC_CODR = 0x08000000;
  } else {
    REG_PIOC_SODR = 0x08000000;
  }
}

void RapidFireIOclass::TogglePinPC28() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOC_CODR = 0x10000000;
  } else {
    REG_PIOC_SODR = 0x10000000;
  }
}

void RapidFireIOclass::TogglePinPC29() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOC_CODR = 0x20000000;
  } else {
    REG_PIOC_SODR = 0x20000000;
  }
}

void RapidFireIOclass::TogglePinPC30() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x40000000; if (data != 0) {
    REG_PIOC_CODR = 0x40000000;
  } else {
    REG_PIOC_SODR = 0x40000000;
  }
}

void RapidFireIOclass::TogglePinPD0() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOD_CODR = 0x00000001;
  } else {
    REG_PIOD_SODR = 0x00000001;
  }
}

void RapidFireIOclass::TogglePinPD1() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOD_CODR = 0x00000002;
  } else {
    REG_PIOD_SODR = 0x00000002;
  }
}

void RapidFireIOclass::TogglePinPD2() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOD_CODR = 0x00000004;
  } else {
    REG_PIOD_SODR = 0x00000004;
  }
}

void RapidFireIOclass::TogglePinPD3() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOD_CODR = 0x00000008;
  } else {
    REG_PIOD_SODR = 0x00000008;
  }
}

void RapidFireIOclass::TogglePinPD4() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOD_CODR = 0x00000010;
  } else {
    REG_PIOD_SODR = 0x00000010;
  }
}

void RapidFireIOclass::TogglePinPD5() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOD_CODR = 0x00000020;
  } else {
    REG_PIOD_SODR = 0x00000020;
  }
}

void RapidFireIOclass::TogglePinPD6() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOD_CODR = 0x00000040;
  } else {
    REG_PIOD_SODR = 0x00000040;
  }
}

void RapidFireIOclass::TogglePinPD7() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOD_CODR = 0x00000080;
  } else {
    REG_PIOD_SODR = 0x00000080;
  }
}

void RapidFireIOclass::TogglePinPD8() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOD_CODR = 0x00000100;
  } else {
    REG_PIOD_SODR = 0x00000100;
  }
}

void RapidFireIOclass::TogglePinPD9() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOD_CODR = 0x00000200;
  } else {
    REG_PIOD_SODR = 0x00000200;
  }
}

void RapidFireIOclass::TogglePinPD10() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOD_CODR = 0x00000400;
  } else {
    REG_PIOD_SODR = 0x00000400;
  }
}

void RapidFireIOclass::SetInputStatePinPA0() {
  REG_PIOA_ODR = 0x00000001; REG_PIOA_PDR = 0x00000001;
}

void RapidFireIOclass::SetInputStatePinPA1() {
  REG_PIOA_ODR = 0x00000002; REG_PIOA_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePinPA2() {
  REG_PIOA_ODR = 0x00000004; REG_PIOA_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPA3() {
  REG_PIOA_ODR = 0x00000008; REG_PIOA_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPA4() {
  REG_PIOA_ODR = 0x00000010; REG_PIOA_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinPA5() {
  REG_PIOA_ODR = 0x00000020; REG_PIOA_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinPA6() {
  REG_PIOA_ODR = 0x00000040; REG_PIOA_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinPA7() {
  REG_PIOA_ODR = 0x00000080; REG_PIOA_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePinPA8() {
  REG_PIOA_ODR = 0x00000100; REG_PIOA_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPA9() {
  REG_PIOA_ODR = 0x00000200; REG_PIOA_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPA10() {
  REG_PIOA_ODR = 0x00000400; REG_PIOA_PDR = 0x00000400;
}

void RapidFireIOclass::SetInputStatePinPA11() {
  REG_PIOA_ODR = 0x00000800; REG_PIOA_PDR = 0x00000800;
}

void RapidFireIOclass::SetInputStatePinPA12() {
  REG_PIOA_ODR = 0x00001000; REG_PIOA_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePinPA13() {
  REG_PIOA_ODR = 0x00002000; REG_PIOA_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePinPA14() {
  REG_PIOA_ODR = 0x00004000; REG_PIOA_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePinPA15() {
  REG_PIOA_ODR = 0x00008000; REG_PIOA_PDR = 0x00008000;
}

void RapidFireIOclass::SetInputStatePinPA16() {
  REG_PIOA_ODR = 0x00010000; REG_PIOA_PDR = 0x00010000;
}

void RapidFireIOclass::SetInputStatePinPA17() {
  REG_PIOA_ODR = 0x00020000; REG_PIOA_PDR = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinPA18() {
  REG_PIOA_ODR = 0x00040000; REG_PIOA_PDR = 0x00040000;
}

void RapidFireIOclass::SetInputStatePinPA19() {
  REG_PIOA_ODR = 0x00080000; REG_PIOA_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPA20() {
  REG_PIOA_ODR = 0x00080000; REG_PIOA_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPA21() {
  REG_PIOA_ODR = 0x00200000; REG_PIOA_PDR = 0x00200000;
}

void RapidFireIOclass::SetInputStatePinPA22() {
  REG_PIOA_ODR = 0x00400000; REG_PIOA_PDR = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinPA23() {
  REG_PIOA_ODR = 0x00800000; REG_PIOA_PDR = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinPA24() {
  REG_PIOA_ODR = 0x01000000; REG_PIOA_PDR = 0x01000000;
}

void RapidFireIOclass::SetInputStatePinPA25() {
  REG_PIOA_ODR = 0x02000000; REG_PIOA_PDR = 0x02000000;
}

void RapidFireIOclass::SetInputStatePinPA26() {
  REG_PIOA_ODR = 0x04000000; REG_PIOA_PDR = 0x04000000;
}

void RapidFireIOclass::SetInputStatePinPA27() {
  REG_PIOA_ODR = 0x08000000; REG_PIOA_PDR = 0x08000000;
}

void RapidFireIOclass::SetInputStatePinPA28() {
  REG_PIOA_ODR = 0x10000000; REG_PIOA_PDR = 0x10000000;
}

void RapidFireIOclass::SetInputStatePinPA29() {
  REG_PIOA_ODR = 0x20000000; REG_PIOA_PDR = 0x20000000;
}

void RapidFireIOclass::SetInputStatePinPB0() {
  REG_PIOB_ODR = 0x00000001; REG_PIOB_PDR = 0x00000001;
}

void RapidFireIOclass::SetInputStatePinPB1() {
  REG_PIOB_ODR = 0x00000002; REG_PIOB_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePinPB2() {
  REG_PIOB_ODR = 0x00000004; REG_PIOB_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPB3() {
  REG_PIOB_ODR = 0x00000008; REG_PIOB_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPB4() {
  REG_PIOB_ODR = 0x00000010; REG_PIOB_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinPB5() {
  REG_PIOB_ODR = 0x00000020; REG_PIOB_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinPB6() {
  REG_PIOB_ODR = 0x00000040; REG_PIOB_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinPB7() {
  REG_PIOB_ODR = 0x00000080; REG_PIOB_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePinPB8() {
  REG_PIOB_ODR = 0x00000100; REG_PIOB_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPB9() {
  REG_PIOB_ODR = 0x00000200; REG_PIOB_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPB10() {
  REG_PIOB_ODR = 0x00000400; REG_PIOB_PDR = 0x00000400;
}

void RapidFireIOclass::SetInputStatePinPB11() {
  REG_PIOB_ODR = 0x00000800; REG_PIOB_PDR = 0x00000800;
}

void RapidFireIOclass::SetInputStatePinPB12() {
  REG_PIOB_ODR = 0x00001000; REG_PIOB_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePinPB13() {
  REG_PIOB_ODR = 0x00002000; REG_PIOB_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePinPB14() {
  REG_PIOB_ODR = 0x00004000; REG_PIOB_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePinPB15() {
  REG_PIOB_ODR = 0x00008000; REG_PIOB_PDR = 0x00008000;
}

void RapidFireIOclass::SetInputStatePinPB16() {
  REG_PIOB_ODR = 0x00010000; REG_PIOB_PDR = 0x00010000;
}

void RapidFireIOclass::SetInputStatePinPB17() {
  REG_PIOB_ODR = 0x00020000; REG_PIOB_PDR = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinPB18() {
  REG_PIOB_ODR = 0x00040000; REG_PIOB_PDR = 0x00040000;
}

void RapidFireIOclass::SetInputStatePinPB19() {
  REG_PIOB_ODR = 0x00080000; REG_PIOB_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPB20() {
  REG_PIOB_ODR = 0x00080000; REG_PIOB_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPB21() {
  REG_PIOB_ODR = 0x00200000; REG_PIOB_PDR = 0x00200000;
}

void RapidFireIOclass::SetInputStatePinPB22() {
  REG_PIOB_ODR = 0x00400000; REG_PIOB_PDR = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinPB23() {
  REG_PIOB_ODR = 0x00800000; REG_PIOB_PDR = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinPB24() {
  REG_PIOB_ODR = 0x01000000; REG_PIOB_PDR = 0x01000000;
}

void RapidFireIOclass::SetInputStatePinPB25() {
  REG_PIOB_ODR = 0x02000000; REG_PIOB_PDR = 0x02000000;
}

void RapidFireIOclass::SetInputStatePinPB26() {
  REG_PIOB_ODR = 0x04000000; REG_PIOB_PDR = 0x04000000;
}

void RapidFireIOclass::SetInputStatePinPB27() {
  REG_PIOB_ODR = 0x08000000; REG_PIOB_PDR = 0x08000000;
}

void RapidFireIOclass::SetInputStatePinPB28() {
  REG_PIOB_ODR = 0x10000000; REG_PIOB_PDR = 0x10000000;
}

void RapidFireIOclass::SetInputStatePinPB29() {
  REG_PIOB_ODR = 0x20000000; REG_PIOB_PDR = 0x20000000;
}

void RapidFireIOclass::SetInputStatePinPB30() {
  REG_PIOB_ODR = 0x40000000; REG_PIOB_PDR = 0x40000000;
}

void RapidFireIOclass::SetInputStatePinPB31() {
  REG_PIOB_ODR = 0x40000000; REG_PIOB_PDR = 0x40000000;
}

void RapidFireIOclass::SetInputStatePinPC0() {
  REG_PIOC_ODR = 0x00000001; REG_PIOC_PDR = 0x00000001;
}

void RapidFireIOclass::SetInputStatePinPC1() {
  REG_PIOC_ODR = 0x00000002; REG_PIOC_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePinPC2() {
  REG_PIOC_ODR = 0x00000004; REG_PIOC_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPC3() {
  REG_PIOC_ODR = 0x00000008; REG_PIOC_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPC4() {
  REG_PIOC_ODR = 0x00000010; REG_PIOC_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinPC5() {
  REG_PIOC_ODR = 0x00000020; REG_PIOC_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinPC6() {
  REG_PIOC_ODR = 0x00000040; REG_PIOC_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinPC7() {
  REG_PIOC_ODR = 0x00000080; REG_PIOC_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePinPC8() {
  REG_PIOC_ODR = 0x00000100; REG_PIOC_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPC9() {
  REG_PIOC_ODR = 0x00000200; REG_PIOC_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPC10() {
  REG_PIOC_ODR = 0x00000400; REG_PIOC_PDR = 0x00000400;
}

void RapidFireIOclass::SetInputStatePinPC11() {
  REG_PIOC_ODR = 0x00000800; REG_PIOC_PDR = 0x00000800;
}

void RapidFireIOclass::SetInputStatePinPC12() {
  REG_PIOC_ODR = 0x00001000; REG_PIOC_PDR = 0x00001000;
}

void RapidFireIOclass::SetInputStatePinPC13() {
  REG_PIOC_ODR = 0x00002000; REG_PIOC_PDR = 0x00002000;
}

void RapidFireIOclass::SetInputStatePinPC14() {
  REG_PIOC_ODR = 0x00004000; REG_PIOC_PDR = 0x00004000;
}

void RapidFireIOclass::SetInputStatePinPC15() {
  REG_PIOC_ODR = 0x00008000; REG_PIOC_PDR = 0x00008000;
}

void RapidFireIOclass::SetInputStatePinPC16() {
  REG_PIOC_ODR = 0x00010000; REG_PIOC_PDR = 0x00010000;
}

void RapidFireIOclass::SetInputStatePinPC17() {
  REG_PIOC_ODR = 0x00020000; REG_PIOC_PDR = 0x00020000;
}

void RapidFireIOclass::SetInputStatePinPC18() {
  REG_PIOC_ODR = 0x00040000; REG_PIOC_PDR = 0x00040000;
}

void RapidFireIOclass::SetInputStatePinPC19() {
  REG_PIOC_ODR = 0x00080000; REG_PIOC_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPC20() {
  REG_PIOC_ODR = 0x00080000; REG_PIOC_PDR = 0x00080000;
}

void RapidFireIOclass::SetInputStatePinPC21() {
  REG_PIOC_ODR = 0x00200000; REG_PIOC_PDR = 0x00200000;
}

void RapidFireIOclass::SetInputStatePinPC22() {
  REG_PIOC_ODR = 0x00400000; REG_PIOC_PDR = 0x00400000;
}

void RapidFireIOclass::SetInputStatePinPC23() {
  REG_PIOC_ODR = 0x00800000; REG_PIOC_PDR = 0x00800000;
}

void RapidFireIOclass::SetInputStatePinPC24() {
  REG_PIOC_ODR = 0x01000000; REG_PIOC_PDR = 0x01000000;
}

void RapidFireIOclass::SetInputStatePinPC25() {
  REG_PIOC_ODR = 0x02000000; REG_PIOC_PDR = 0x02000000;
}

void RapidFireIOclass::SetInputStatePinPC26() {
  REG_PIOC_ODR = 0x04000000; REG_PIOC_PDR = 0x04000000;
}

void RapidFireIOclass::SetInputStatePinPC27() {
  REG_PIOC_ODR = 0x08000000; REG_PIOC_PDR = 0x08000000;
}

void RapidFireIOclass::SetInputStatePinPC28() {
  REG_PIOC_ODR = 0x10000000; REG_PIOC_PDR = 0x10000000;
}

void RapidFireIOclass::SetInputStatePinPC29() {
  REG_PIOC_ODR = 0x20000000; REG_PIOC_PDR = 0x20000000;
}

void RapidFireIOclass::SetInputStatePinPC30() {
  REG_PIOC_ODR = 0x40000000; REG_PIOC_PDR = 0x40000000;
}

void RapidFireIOclass::SetInputStatePinPD0() {
  REG_PIOD_ODR = 0x00000001; REG_PIOD_PDR = 0x00000001;
}

void RapidFireIOclass::SetInputStatePinPD1() {
  REG_PIOD_ODR = 0x00000002; REG_PIOD_PDR = 0x00000002;
}

void RapidFireIOclass::SetInputStatePinPD2() {
  REG_PIOD_ODR = 0x00000004; REG_PIOD_PDR = 0x00000004;
}

void RapidFireIOclass::SetInputStatePinPD3() {
  REG_PIOD_ODR = 0x00000008; REG_PIOD_PDR = 0x00000008;
}

void RapidFireIOclass::SetInputStatePinPD4() {
  REG_PIOD_ODR = 0x00000010; REG_PIOD_PDR = 0x00000010;
}

void RapidFireIOclass::SetInputStatePinPD5() {
  REG_PIOD_ODR = 0x00000020; REG_PIOD_PDR = 0x00000020;
}

void RapidFireIOclass::SetInputStatePinPD6() {
  REG_PIOD_ODR = 0x00000040; REG_PIOD_PDR = 0x00000040;
}

void RapidFireIOclass::SetInputStatePinPD7() {
  REG_PIOD_ODR = 0x00000080; REG_PIOD_PDR = 0x00000080;
}

void RapidFireIOclass::SetInputStatePinPD8() {
  REG_PIOD_ODR = 0x00000100; REG_PIOD_PDR = 0x00000100;
}

void RapidFireIOclass::SetInputStatePinPD9() {
  REG_PIOD_ODR = 0x00000200; REG_PIOD_PDR = 0x00000200;
}

void RapidFireIOclass::SetInputStatePinPD10() {
  REG_PIOD_ODR = 0x00000400; REG_PIOD_PDR = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPA0() {
  REG_PIOA_OER = 0x00000001; REG_PIOA_PER = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePinPA1() {
  REG_PIOA_OER = 0x00000002; REG_PIOA_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePinPA2() {
  REG_PIOA_OER = 0x00000004; REG_PIOA_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPA3() {
  REG_PIOA_OER = 0x00000008; REG_PIOA_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPA4() {
  REG_PIOA_OER = 0x00000010; REG_PIOA_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinPA5() {
  REG_PIOA_OER = 0x00000020; REG_PIOA_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinPA6() {
  REG_PIOA_OER = 0x00000040; REG_PIOA_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinPA7() {
  REG_PIOA_OER = 0x00000080; REG_PIOA_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePinPA8() {
  REG_PIOA_OER = 0x00000100; REG_PIOA_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPA9() {
  REG_PIOA_OER = 0x00000200; REG_PIOA_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPA10() {
  REG_PIOA_OER = 0x00000400; REG_PIOA_PER = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPA11() {
  REG_PIOA_OER = 0x00000800; REG_PIOA_PER = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePinPA12() {
  REG_PIOA_OER = 0x00001000; REG_PIOA_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePinPA13() {
  REG_PIOA_OER = 0x00002000; REG_PIOA_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePinPA14() {
  REG_PIOA_OER = 0x00004000; REG_PIOA_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePinPA15() {
  REG_PIOA_OER = 0x00008000; REG_PIOA_PER = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePinPA16() {
  REG_PIOA_OER = 0x00010000; REG_PIOA_PER = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePinPA17() {
  REG_PIOA_OER = 0x00020000; REG_PIOA_PER = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinPA18() {
  REG_PIOA_OER = 0x00040000; REG_PIOA_PER = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePinPA19() {
  REG_PIOA_OER = 0x00080000; REG_PIOA_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPA20() {
  REG_PIOA_OER = 0x00080000; REG_PIOA_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPA21() {
  REG_PIOA_OER = 0x00200000; REG_PIOA_PER = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePinPA22() {
  REG_PIOA_OER = 0x00400000; REG_PIOA_PER = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinPA23() {
  REG_PIOA_OER = 0x00800000; REG_PIOA_PER = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinPA24() {
  REG_PIOA_OER = 0x01000000; REG_PIOA_PER = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePinPA25() {
  REG_PIOA_OER = 0x02000000; REG_PIOA_PER = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePinPA26() {
  REG_PIOA_OER = 0x04000000; REG_PIOA_PER = 0x04000000;
}

void RapidFireIOclass::SetOutputStatePinPA27() {
  REG_PIOA_OER = 0x08000000; REG_PIOA_PER = 0x08000000;
}

void RapidFireIOclass::SetOutputStatePinPA28() {
  REG_PIOA_OER = 0x10000000; REG_PIOA_PER = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePinPA29() {
  REG_PIOA_OER = 0x20000000; REG_PIOA_PER = 0x20000000;
}

void RapidFireIOclass::SetOutputStatePinPB0() {
  REG_PIOB_OER = 0x00000001; REG_PIOB_PER = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePinPB1() {
  REG_PIOB_OER = 0x00000002; REG_PIOB_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  REG_PIOB_OER = 0x00000004; REG_PIOB_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  REG_PIOB_OER = 0x00000008; REG_PIOB_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPB4() {
  REG_PIOB_OER = 0x00000010; REG_PIOB_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinPB5() {
  REG_PIOB_OER = 0x00000020; REG_PIOB_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinPB6() {
  REG_PIOB_OER = 0x00000040; REG_PIOB_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinPB7() {
  REG_PIOB_OER = 0x00000080; REG_PIOB_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePinPB8() {
  REG_PIOB_OER = 0x00000100; REG_PIOB_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPB9() {
  REG_PIOB_OER = 0x00000200; REG_PIOB_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPB10() {
  REG_PIOB_OER = 0x00000400; REG_PIOB_PER = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPB11() {
  REG_PIOB_OER = 0x00000800; REG_PIOB_PER = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePinPB12() {
  REG_PIOB_OER = 0x00001000; REG_PIOB_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePinPB13() {
  REG_PIOB_OER = 0x00002000; REG_PIOB_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePinPB14() {
  REG_PIOB_OER = 0x00004000; REG_PIOB_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePinPB15() {
  REG_PIOB_OER = 0x00008000; REG_PIOB_PER = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePinPB16() {
  REG_PIOB_OER = 0x00010000; REG_PIOB_PER = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePinPB17() {
  REG_PIOB_OER = 0x00020000; REG_PIOB_PER = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinPB18() {
  REG_PIOB_OER = 0x00040000; REG_PIOB_PER = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePinPB19() {
  REG_PIOB_OER = 0x00080000; REG_PIOB_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPB20() {
  REG_PIOB_OER = 0x00080000; REG_PIOB_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPB21() {
  REG_PIOB_OER = 0x00200000; REG_PIOB_PER = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePinPB22() {
  REG_PIOB_OER = 0x00400000; REG_PIOB_PER = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinPB23() {
  REG_PIOB_OER = 0x00800000; REG_PIOB_PER = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinPB24() {
  REG_PIOB_OER = 0x01000000; REG_PIOB_PER = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePinPB25() {
  REG_PIOB_OER = 0x02000000; REG_PIOB_PER = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePinPB26() {
  REG_PIOB_OER = 0x04000000; REG_PIOB_PER = 0x04000000;
}

void RapidFireIOclass::SetOutputStatePinPB27() {
  REG_PIOB_OER = 0x08000000; REG_PIOB_PER = 0x08000000;
}

void RapidFireIOclass::SetOutputStatePinPB28() {
  REG_PIOB_OER = 0x10000000; REG_PIOB_PER = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePinPB29() {
  REG_PIOB_OER = 0x20000000; REG_PIOB_PER = 0x20000000;
}

void RapidFireIOclass::SetOutputStatePinPB30() {
  REG_PIOB_OER = 0x40000000; REG_PIOB_PER = 0x40000000;
}

void RapidFireIOclass::SetOutputStatePinPB31() {
  REG_PIOB_OER = 0x40000000; REG_PIOB_PER = 0x40000000;
}

void RapidFireIOclass::SetOutputStatePinPC0() {
  REG_PIOC_OER = 0x00000001; REG_PIOC_PER = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePinPC1() {
  REG_PIOC_OER = 0x00000002; REG_PIOC_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePinPC2() {
  REG_PIOC_OER = 0x00000004; REG_PIOC_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPC3() {
  REG_PIOC_OER = 0x00000008; REG_PIOC_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPC4() {
  REG_PIOC_OER = 0x00000010; REG_PIOC_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinPC5() {
  REG_PIOC_OER = 0x00000020; REG_PIOC_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinPC6() {
  REG_PIOC_OER = 0x00000040; REG_PIOC_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinPC7() {
  REG_PIOC_OER = 0x00000080; REG_PIOC_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePinPC8() {
  REG_PIOC_OER = 0x00000100; REG_PIOC_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPC9() {
  REG_PIOC_OER = 0x00000200; REG_PIOC_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPC10() {
  REG_PIOC_OER = 0x00000400; REG_PIOC_PER = 0x00000400;
}

void RapidFireIOclass::SetOutputStatePinPC11() {
  REG_PIOC_OER = 0x00000800; REG_PIOC_PER = 0x00000800;
}

void RapidFireIOclass::SetOutputStatePinPC12() {
  REG_PIOC_OER = 0x00001000; REG_PIOC_PER = 0x00001000;
}

void RapidFireIOclass::SetOutputStatePinPC13() {
  REG_PIOC_OER = 0x00002000; REG_PIOC_PER = 0x00002000;
}

void RapidFireIOclass::SetOutputStatePinPC14() {
  REG_PIOC_OER = 0x00004000; REG_PIOC_PER = 0x00004000;
}

void RapidFireIOclass::SetOutputStatePinPC15() {
  REG_PIOC_OER = 0x00008000; REG_PIOC_PER = 0x00008000;
}

void RapidFireIOclass::SetOutputStatePinPC16() {
  REG_PIOC_OER = 0x00010000; REG_PIOC_PER = 0x00010000;
}

void RapidFireIOclass::SetOutputStatePinPC17() {
  REG_PIOC_OER = 0x00020000; REG_PIOC_PER = 0x00020000;
}

void RapidFireIOclass::SetOutputStatePinPC18() {
  REG_PIOC_OER = 0x00040000; REG_PIOC_PER = 0x00040000;
}

void RapidFireIOclass::SetOutputStatePinPC19() {
  REG_PIOC_OER = 0x00080000; REG_PIOC_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPC20() {
  REG_PIOC_OER = 0x00080000; REG_PIOC_PER = 0x00080000;
}

void RapidFireIOclass::SetOutputStatePinPC21() {
  REG_PIOC_OER = 0x00200000; REG_PIOC_PER = 0x00200000;
}

void RapidFireIOclass::SetOutputStatePinPC22() {
  REG_PIOC_OER = 0x00400000; REG_PIOC_PER = 0x00400000;
}

void RapidFireIOclass::SetOutputStatePinPC23() {
  REG_PIOC_OER = 0x00800000; REG_PIOC_PER = 0x00800000;
}

void RapidFireIOclass::SetOutputStatePinPC24() {
  REG_PIOC_OER = 0x01000000; REG_PIOC_PER = 0x01000000;
}

void RapidFireIOclass::SetOutputStatePinPC25() {
  REG_PIOC_OER = 0x02000000; REG_PIOC_PER = 0x02000000;
}

void RapidFireIOclass::SetOutputStatePinPC26() {
  REG_PIOC_OER = 0x04000000; REG_PIOC_PER = 0x04000000;
}

void RapidFireIOclass::SetOutputStatePinPC27() {
  REG_PIOC_OER = 0x08000000; REG_PIOC_PER = 0x08000000;
}

void RapidFireIOclass::SetOutputStatePinPC28() {
  REG_PIOC_OER = 0x10000000; REG_PIOC_PER = 0x10000000;
}

void RapidFireIOclass::SetOutputStatePinPC29() {
  REG_PIOC_OER = 0x20000000; REG_PIOC_PER = 0x20000000;
}

void RapidFireIOclass::SetOutputStatePinPC30() {
  REG_PIOC_OER = 0x40000000; REG_PIOC_PER = 0x40000000;
}

void RapidFireIOclass::SetOutputStatePinPD0() {
  REG_PIOD_OER = 0x00000001; REG_PIOD_PER = 0x00000001;
}

void RapidFireIOclass::SetOutputStatePinPD1() {
  REG_PIOD_OER = 0x00000002; REG_PIOD_PER = 0x00000002;
}

void RapidFireIOclass::SetOutputStatePinPD2() {
  REG_PIOD_OER = 0x00000004; REG_PIOD_PER = 0x00000004;
}

void RapidFireIOclass::SetOutputStatePinPD3() {
  REG_PIOD_OER = 0x00000008; REG_PIOD_PER = 0x00000008;
}

void RapidFireIOclass::SetOutputStatePinPD4() {
  REG_PIOD_OER = 0x00000010; REG_PIOD_PER = 0x00000010;
}

void RapidFireIOclass::SetOutputStatePinPD5() {
  REG_PIOD_OER = 0x00000020; REG_PIOD_PER = 0x00000020;
}

void RapidFireIOclass::SetOutputStatePinPD6() {
  REG_PIOD_OER = 0x00000040; REG_PIOD_PER = 0x00000040;
}

void RapidFireIOclass::SetOutputStatePinPD7() {
  REG_PIOD_OER = 0x00000080; REG_PIOD_PER = 0x00000080;
}

void RapidFireIOclass::SetOutputStatePinPD8() {
  REG_PIOD_OER = 0x00000100; REG_PIOD_PER = 0x00000100;
}

void RapidFireIOclass::SetOutputStatePinPD9() {
  REG_PIOD_OER = 0x00000200; REG_PIOD_PER = 0x00000200;
}

void RapidFireIOclass::SetOutputStatePinPD10() {
  REG_PIOD_OER = 0x00000400; REG_PIOD_PER = 0x00000400;
}

void RapidFireIOclass::ToggleIOstatePinPA0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOA_ODR = 0x00000001; REG_PIOA_PDR = 0x00000001;
  } else {
    REG_PIOA_OER = 0x00000001; REG_PIOA_PER = 0x00000001;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOA_ODR = 0x00000002; REG_PIOA_PDR = 0x00000002;
  } else {
    REG_PIOA_OER = 0x00000002; REG_PIOA_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA2() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOA_ODR = 0x00000004; REG_PIOA_PDR = 0x00000004;
  } else {
    REG_PIOA_OER = 0x00000004; REG_PIOA_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA3() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOA_ODR = 0x00000008; REG_PIOA_PDR = 0x00000008;
  } else {
    REG_PIOA_OER = 0x00000008; REG_PIOA_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOA_ODR = 0x00000010; REG_PIOA_PDR = 0x00000010;
  } else {
    REG_PIOA_OER = 0x00000010; REG_PIOA_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA5() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOA_ODR = 0x00000020; REG_PIOA_PDR = 0x00000020;
  } else {
    REG_PIOA_OER = 0x00000020; REG_PIOA_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA6() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOA_ODR = 0x00000040; REG_PIOA_PDR = 0x00000040;
  } else {
    REG_PIOA_OER = 0x00000040; REG_PIOA_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA7() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOA_ODR = 0x00000080; REG_PIOA_PDR = 0x00000080;
  } else {
    REG_PIOA_OER = 0x00000080; REG_PIOA_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA8() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOA_ODR = 0x00000100; REG_PIOA_PDR = 0x00000100;
  } else {
    REG_PIOA_OER = 0x00000100; REG_PIOA_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA9() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOA_ODR = 0x00000200; REG_PIOA_PDR = 0x00000200;
  } else {
    REG_PIOA_OER = 0x00000200; REG_PIOA_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA10() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOA_ODR = 0x00000400; REG_PIOA_PDR = 0x00000400;
  } else {
    REG_PIOA_OER = 0x00000400; REG_PIOA_PER = 0x00000400;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA11() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOA_ODR = 0x00000800; REG_PIOA_PDR = 0x00000800;
  } else {
    REG_PIOA_OER = 0x00000800; REG_PIOA_PER = 0x00000800;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA12() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOA_ODR = 0x00001000; REG_PIOA_PDR = 0x00001000;
  } else {
    REG_PIOA_OER = 0x00001000; REG_PIOA_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA13() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOA_ODR = 0x00002000; REG_PIOA_PDR = 0x00002000;
  } else {
    REG_PIOA_OER = 0x00002000; REG_PIOA_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA14() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOA_ODR = 0x00004000; REG_PIOA_PDR = 0x00004000;
  } else {
    REG_PIOA_OER = 0x00004000; REG_PIOA_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA15() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOA_ODR = 0x00008000; REG_PIOA_PDR = 0x00008000;
  } else {
    REG_PIOA_OER = 0x00008000; REG_PIOA_PER = 0x00008000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA16() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOA_ODR = 0x00010000; REG_PIOA_PDR = 0x00010000;
  } else {
    REG_PIOA_OER = 0x00010000; REG_PIOA_PER = 0x00010000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA17() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOA_ODR = 0x00020000; REG_PIOA_PDR = 0x00020000;
  } else {
    REG_PIOA_OER = 0x00020000; REG_PIOA_PER = 0x00020000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA18() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOA_ODR = 0x00040000; REG_PIOA_PDR = 0x00040000;
  } else {
    REG_PIOA_OER = 0x00040000; REG_PIOA_PER = 0x00040000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA19() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOA_ODR = 0x00080000; REG_PIOA_PDR = 0x00080000;
  } else {
    REG_PIOA_OER = 0x00080000; REG_PIOA_PER = 0x00080000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA20() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOA_ODR = 0x00100000; REG_PIOA_PDR = 0x00100000;
  } else {
    REG_PIOA_OER = 0x00100000; REG_PIOA_PER = 0x00100000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA21() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOA_ODR = 0x00200000; REG_PIOA_PDR = 0x00200000;
  } else {
    REG_PIOA_OER = 0x00200000; REG_PIOA_PER = 0x00200000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA22() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOA_ODR = 0x00400000; REG_PIOA_PDR = 0x00400000;
  } else {
    REG_PIOA_OER = 0x00400000; REG_PIOA_PER = 0x00400000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA23() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOA_ODR = 0x00800000; REG_PIOA_PDR = 0x00800000;
  } else {
    REG_PIOA_OER = 0x00800000; REG_PIOA_PER = 0x00800000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA24() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOA_ODR = 0x01000000; REG_PIOA_PDR = 0x01000000;
  } else {
    REG_PIOA_OER = 0x01000000; REG_PIOA_PER = 0x01000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA25() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOA_ODR = 0x02000000; REG_PIOA_PDR = 0x02000000;
  } else {
    REG_PIOA_OER = 0x02000000; REG_PIOA_PER = 0x02000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA26() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOA_ODR = 0x04000000; REG_PIOA_PDR = 0x04000000;
  } else {
    REG_PIOA_OER = 0x04000000; REG_PIOA_PER = 0x04000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA27() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOA_ODR = 0x08000000; REG_PIOA_PDR = 0x08000000;
  } else {
    REG_PIOA_OER = 0x08000000; REG_PIOA_PER = 0x08000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA28() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOA_ODR = 0x10000000; REG_PIOA_PDR = 0x10000000;
  } else {
    REG_PIOA_OER = 0x10000000; REG_PIOA_PER = 0x10000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPA29() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOA_ODR = 0x20000000; REG_PIOA_PDR = 0x20000000;
  } else {
    REG_PIOA_OER = 0x20000000; REG_PIOA_PER = 0x20000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB0() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOB_ODR = 0x00000001; REG_PIOB_PDR = 0x00000001;
  } else {
    REG_PIOB_OER = 0x00000001; REG_PIOB_PER = 0x00000001;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB1() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOB_ODR = 0x00000002; REG_PIOB_PDR = 0x00000002;
  } else {
    REG_PIOB_OER = 0x00000002; REG_PIOB_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOB_ODR = 0x00000004; REG_PIOB_PDR = 0x00000004;
  } else {
    REG_PIOB_OER = 0x00000004; REG_PIOB_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOB_ODR = 0x00000008; REG_PIOB_PDR = 0x00000008;
  } else {
    REG_PIOB_OER = 0x00000008; REG_PIOB_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB4() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOB_ODR = 0x00000010; REG_PIOB_PDR = 0x00000010;
  } else {
    REG_PIOB_OER = 0x00000010; REG_PIOB_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB5() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOB_ODR = 0x00000020; REG_PIOB_PDR = 0x00000020;
  } else {
    REG_PIOB_OER = 0x00000020; REG_PIOB_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB6() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOB_ODR = 0x00000040; REG_PIOB_PDR = 0x00000040;
  } else {
    REG_PIOB_OER = 0x00000040; REG_PIOB_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB7() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOB_ODR = 0x00000080; REG_PIOB_PDR = 0x00000080;
  } else {
    REG_PIOB_OER = 0x00000080; REG_PIOB_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB8() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOB_ODR = 0x00000100; REG_PIOB_PDR = 0x00000100;
  } else {
    REG_PIOB_OER = 0x00000100; REG_PIOB_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB9() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOB_ODR = 0x00000200; REG_PIOB_PDR = 0x00000200;
  } else {
    REG_PIOB_OER = 0x00000200; REG_PIOB_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB10() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOB_ODR = 0x00000400; REG_PIOB_PDR = 0x00000400;
  } else {
    REG_PIOB_OER = 0x00000400; REG_PIOB_PER = 0x00000400;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB11() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOB_ODR = 0x00000800; REG_PIOB_PDR = 0x00000800;
  } else {
    REG_PIOB_OER = 0x00000800; REG_PIOB_PER = 0x00000800;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB12() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOB_ODR = 0x00001000; REG_PIOB_PDR = 0x00001000;
  } else {
    REG_PIOB_OER = 0x00001000; REG_PIOB_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB13() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOB_ODR = 0x00002000; REG_PIOB_PDR = 0x00002000;
  } else {
    REG_PIOB_OER = 0x00002000; REG_PIOB_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB14() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOB_ODR = 0x00004000; REG_PIOB_PDR = 0x00004000;
  } else {
    REG_PIOB_OER = 0x00004000; REG_PIOB_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB15() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOB_ODR = 0x00008000; REG_PIOB_PDR = 0x00008000;
  } else {
    REG_PIOB_OER = 0x00008000; REG_PIOB_PER = 0x00008000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB16() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOB_ODR = 0x00010000; REG_PIOB_PDR = 0x00010000;
  } else {
    REG_PIOB_OER = 0x00010000; REG_PIOB_PER = 0x00010000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB17() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOB_ODR = 0x00020000; REG_PIOB_PDR = 0x00020000;
  } else {
    REG_PIOB_OER = 0x00020000; REG_PIOB_PER = 0x00020000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB18() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOB_ODR = 0x00040000; REG_PIOB_PDR = 0x00040000;
  } else {
    REG_PIOB_OER = 0x00040000; REG_PIOB_PER = 0x00040000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB19() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOB_ODR = 0x00080000; REG_PIOB_PDR = 0x00080000;
  } else {
    REG_PIOB_OER = 0x00080000; REG_PIOB_PER = 0x00080000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB20() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOB_ODR = 0x00100000; REG_PIOB_PDR = 0x00100000;
  } else {
    REG_PIOB_OER = 0x00100000; REG_PIOB_PER = 0x00100000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB21() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOB_ODR = 0x00200000; REG_PIOB_PDR = 0x00200000;
  } else {
    REG_PIOB_OER = 0x00200000; REG_PIOB_PER = 0x00200000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB22() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOB_ODR = 0x00400000; REG_PIOB_PDR = 0x00400000;
  } else {
    REG_PIOB_OER = 0x00400000; REG_PIOB_PER = 0x00400000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB23() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOB_ODR = 0x00800000; REG_PIOB_PDR = 0x00800000;
  } else {
    REG_PIOB_OER = 0x00800000; REG_PIOB_PER = 0x00800000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB24() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOB_ODR = 0x01000000; REG_PIOB_PDR = 0x01000000;
  } else {
    REG_PIOB_OER = 0x01000000; REG_PIOB_PER = 0x01000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB25() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOB_ODR = 0x02000000; REG_PIOB_PDR = 0x02000000;
  } else {
    REG_PIOB_OER = 0x02000000; REG_PIOB_PER = 0x02000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB26() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOB_ODR = 0x04000000; REG_PIOB_PDR = 0x04000000;
  } else {
    REG_PIOB_OER = 0x04000000; REG_PIOB_PER = 0x04000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB27() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOB_ODR = 0x08000000; REG_PIOB_PDR = 0x08000000;
  } else {
    REG_PIOB_OER = 0x08000000; REG_PIOB_PER = 0x08000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB28() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOB_ODR = 0x10000000; REG_PIOB_PDR = 0x10000000;
  } else {
    REG_PIOB_OER = 0x10000000; REG_PIOB_PER = 0x10000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB29() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOB_ODR = 0x20000000; REG_PIOB_PDR = 0x20000000;
  } else {
    REG_PIOB_OER = 0x20000000; REG_PIOB_PER = 0x20000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB30() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x40000000; if (data != 0) {
    REG_PIOB_ODR = 0x40000000; REG_PIOB_PDR = 0x40000000;
  } else {
    REG_PIOB_OER = 0x40000000; REG_PIOB_PER = 0x40000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPB31() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x80000000; if (data != 0) {
    REG_PIOB_ODR = 0x80000000; REG_PIOB_PDR = 0x80000000;
  } else {
    REG_PIOB_OER = 0x80000000; REG_PIOB_PER = 0x80000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC0() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOC_ODR = 0x00000001; REG_PIOC_PDR = 0x00000001;
  } else {
    REG_PIOC_OER = 0x00000001; REG_PIOC_PER = 0x00000001;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC1() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOC_ODR = 0x00000002; REG_PIOC_PDR = 0x00000002;
  } else {
    REG_PIOC_OER = 0x00000002; REG_PIOC_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC2() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOC_ODR = 0x00000004; REG_PIOC_PDR = 0x00000004;
  } else {
    REG_PIOC_OER = 0x00000004; REG_PIOC_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC3() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOC_ODR = 0x00000008; REG_PIOC_PDR = 0x00000008;
  } else {
    REG_PIOC_OER = 0x00000008; REG_PIOC_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC4() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOC_ODR = 0x00000010; REG_PIOC_PDR = 0x00000010;
  } else {
    REG_PIOC_OER = 0x00000010; REG_PIOC_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC5() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOC_ODR = 0x00000020; REG_PIOC_PDR = 0x00000020;
  } else {
    REG_PIOC_OER = 0x00000020; REG_PIOC_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC6() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOC_ODR = 0x00000040; REG_PIOC_PDR = 0x00000040;
  } else {
    REG_PIOC_OER = 0x00000040; REG_PIOC_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC7() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOC_ODR = 0x00000080; REG_PIOC_PDR = 0x00000080;
  } else {
    REG_PIOC_OER = 0x00000080; REG_PIOC_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC8() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOC_ODR = 0x00000100; REG_PIOC_PDR = 0x00000100;
  } else {
    REG_PIOC_OER = 0x00000100; REG_PIOC_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC9() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOC_ODR = 0x00000200; REG_PIOC_PDR = 0x00000200;
  } else {
    REG_PIOC_OER = 0x00000200; REG_PIOC_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC10() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOC_ODR = 0x00000400; REG_PIOC_PDR = 0x00000400;
  } else {
    REG_PIOC_OER = 0x00000400; REG_PIOC_PER = 0x00000400;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC11() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000800; if (data != 0) {
    REG_PIOC_ODR = 0x00000800; REG_PIOC_PDR = 0x00000800;
  } else {
    REG_PIOC_OER = 0x00000800; REG_PIOC_PER = 0x00000800;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC12() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00001000; if (data != 0) {
    REG_PIOC_ODR = 0x00001000; REG_PIOC_PDR = 0x00001000;
  } else {
    REG_PIOC_OER = 0x00001000; REG_PIOC_PER = 0x00001000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC13() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00002000; if (data != 0) {
    REG_PIOC_ODR = 0x00002000; REG_PIOC_PDR = 0x00002000;
  } else {
    REG_PIOC_OER = 0x00002000; REG_PIOC_PER = 0x00002000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC14() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00004000; if (data != 0) {
    REG_PIOC_ODR = 0x00004000; REG_PIOC_PDR = 0x00004000;
  } else {
    REG_PIOC_OER = 0x00004000; REG_PIOC_PER = 0x00004000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC15() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00008000; if (data != 0) {
    REG_PIOC_ODR = 0x00008000; REG_PIOC_PDR = 0x00008000;
  } else {
    REG_PIOC_OER = 0x00008000; REG_PIOC_PER = 0x00008000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC16() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00010000; if (data != 0) {
    REG_PIOC_ODR = 0x00010000; REG_PIOC_PDR = 0x00010000;
  } else {
    REG_PIOC_OER = 0x00010000; REG_PIOC_PER = 0x00010000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC17() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00020000; if (data != 0) {
    REG_PIOC_ODR = 0x00020000; REG_PIOC_PDR = 0x00020000;
  } else {
    REG_PIOC_OER = 0x00020000; REG_PIOC_PER = 0x00020000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC18() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00040000; if (data != 0) {
    REG_PIOC_ODR = 0x00040000; REG_PIOC_PDR = 0x00040000;
  } else {
    REG_PIOC_OER = 0x00040000; REG_PIOC_PER = 0x00040000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC19() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00080000; if (data != 0) {
    REG_PIOC_ODR = 0x00080000; REG_PIOC_PDR = 0x00080000;
  } else {
    REG_PIOC_OER = 0x00080000; REG_PIOC_PER = 0x00080000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC20() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00100000; if (data != 0) {
    REG_PIOC_ODR = 0x00100000; REG_PIOC_PDR = 0x00100000;
  } else {
    REG_PIOC_OER = 0x00100000; REG_PIOC_PER = 0x00100000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC21() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00200000; if (data != 0) {
    REG_PIOC_ODR = 0x00200000; REG_PIOC_PDR = 0x00200000;
  } else {
    REG_PIOC_OER = 0x00200000; REG_PIOC_PER = 0x00200000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC22() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00400000; if (data != 0) {
    REG_PIOC_ODR = 0x00400000; REG_PIOC_PDR = 0x00400000;
  } else {
    REG_PIOC_OER = 0x00400000; REG_PIOC_PER = 0x00400000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC23() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00800000; if (data != 0) {
    REG_PIOC_ODR = 0x00800000; REG_PIOC_PDR = 0x00800000;
  } else {
    REG_PIOC_OER = 0x00800000; REG_PIOC_PER = 0x00800000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC24() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x01000000; if (data != 0) {
    REG_PIOC_ODR = 0x01000000; REG_PIOC_PDR = 0x01000000;
  } else {
    REG_PIOC_OER = 0x01000000; REG_PIOC_PER = 0x01000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC25() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x02000000; if (data != 0) {
    REG_PIOC_ODR = 0x02000000; REG_PIOC_PDR = 0x02000000;
  } else {
    REG_PIOC_OER = 0x02000000; REG_PIOC_PER = 0x02000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC26() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x04000000; if (data != 0) {
    REG_PIOC_ODR = 0x04000000; REG_PIOC_PDR = 0x04000000;
  } else {
    REG_PIOC_OER = 0x04000000; REG_PIOC_PER = 0x04000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC27() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x08000000; if (data != 0) {
    REG_PIOC_ODR = 0x08000000; REG_PIOC_PDR = 0x08000000;
  } else {
    REG_PIOC_OER = 0x08000000; REG_PIOC_PER = 0x08000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC28() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x10000000; if (data != 0) {
    REG_PIOC_ODR = 0x10000000; REG_PIOC_PDR = 0x10000000;
  } else {
    REG_PIOC_OER = 0x10000000; REG_PIOC_PER = 0x10000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC29() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x20000000; if (data != 0) {
    REG_PIOC_ODR = 0x20000000; REG_PIOC_PDR = 0x20000000;
  } else {
    REG_PIOC_OER = 0x20000000; REG_PIOC_PER = 0x20000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPC30() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x40000000; if (data != 0) {
    REG_PIOC_ODR = 0x40000000; REG_PIOC_PDR = 0x40000000;
  } else {
    REG_PIOC_OER = 0x40000000; REG_PIOC_PER = 0x40000000;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD0() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000001; if (data != 0) {
    REG_PIOD_ODR = 0x00000001; REG_PIOD_PDR = 0x00000001;
  } else {
    REG_PIOD_OER = 0x00000001; REG_PIOD_PER = 0x00000001;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD1() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000002; if (data != 0) {
    REG_PIOD_ODR = 0x00000002; REG_PIOD_PDR = 0x00000002;
  } else {
    REG_PIOD_OER = 0x00000002; REG_PIOD_PER = 0x00000002;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD2() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000004; if (data != 0) {
    REG_PIOD_ODR = 0x00000004; REG_PIOD_PDR = 0x00000004;
  } else {
    REG_PIOD_OER = 0x00000004; REG_PIOD_PER = 0x00000004;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD3() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000008; if (data != 0) {
    REG_PIOD_ODR = 0x00000008; REG_PIOD_PDR = 0x00000008;
  } else {
    REG_PIOD_OER = 0x00000008; REG_PIOD_PER = 0x00000008;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD4() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000010; if (data != 0) {
    REG_PIOD_ODR = 0x00000010; REG_PIOD_PDR = 0x00000010;
  } else {
    REG_PIOD_OER = 0x00000010; REG_PIOD_PER = 0x00000010;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD5() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000020; if (data != 0) {
    REG_PIOD_ODR = 0x00000020; REG_PIOD_PDR = 0x00000020;
  } else {
    REG_PIOD_OER = 0x00000020; REG_PIOD_PER = 0x00000020;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD6() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000040; if (data != 0) {
    REG_PIOD_ODR = 0x00000040; REG_PIOD_PDR = 0x00000040;
  } else {
    REG_PIOD_OER = 0x00000040; REG_PIOD_PER = 0x00000040;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD7() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000080; if (data != 0) {
    REG_PIOD_ODR = 0x00000080; REG_PIOD_PDR = 0x00000080;
  } else {
    REG_PIOD_OER = 0x00000080; REG_PIOD_PER = 0x00000080;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD8() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000100; if (data != 0) {
    REG_PIOD_ODR = 0x00000100; REG_PIOD_PDR = 0x00000100;
  } else {
    REG_PIOD_OER = 0x00000100; REG_PIOD_PER = 0x00000100;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD9() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000200; if (data != 0) {
    REG_PIOD_ODR = 0x00000200; REG_PIOD_PDR = 0x00000200;
  } else {
    REG_PIOD_OER = 0x00000200; REG_PIOD_PER = 0x00000200;
  }
}

void RapidFireIOclass::ToggleIOstatePinPD10() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000400; if (data != 0) {
    REG_PIOD_ODR = 0x00000400; REG_PIOD_PDR = 0x00000400;
  } else {
    REG_PIOD_OER = 0x00000400; REG_PIOD_PER = 0x00000400;
  }
}

uint32_t RapidFireIOclass::ReadPinPA0() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPinPA1() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPinPA2() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPA3() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPA4() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinPA5() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinPA6() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinPA7() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPinPA8() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPA9() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPA10() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPinPA11() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPinPA12() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA13() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA14() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA15() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA16() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA17() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA18() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA19() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA20() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA21() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA22() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA23() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA24() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA25() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA26() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x04000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA27() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x08000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA28() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPA29() {
  uint32_t data = REG_PIOA_PDSR; data &= 0x20000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB0() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPinPB1() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPinPB2() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPB3() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPB4() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinPB5() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinPB6() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinPB7() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPinPB8() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPB9() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPB10() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPinPB11() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPinPB12() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB13() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB14() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB15() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB16() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB17() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB18() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB19() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB20() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB21() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB22() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB23() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB24() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB25() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB26() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x04000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB27() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x08000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB28() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB29() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x20000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB30() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x40000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPB31() {
  uint32_t data = REG_PIOB_PDSR; data &= 0x80000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC0() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPinPC1() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPinPC2() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPC3() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPC4() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinPC5() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinPC6() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinPC7() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPinPC8() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPC9() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPC10() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000400; return data;
}

uint32_t RapidFireIOclass::ReadPinPC11() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00000800; return data;
}

uint32_t RapidFireIOclass::ReadPinPC12() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00001000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC13() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00002000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC14() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00004000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC15() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00008000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC16() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00010000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC17() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00020000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC18() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00040000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC19() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00080000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC20() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00100000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC21() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00200000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC22() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00400000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC23() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x00800000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC24() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x01000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC25() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x02000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC26() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x04000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC27() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x08000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC28() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x10000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC29() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x20000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPC30() {
  uint32_t data = REG_PIOC_PDSR; data &= 0x40000000; return data;
}

uint32_t RapidFireIOclass::ReadPinPD0() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000001; return data;
}

uint32_t RapidFireIOclass::ReadPinPD1() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000002; return data;
}

uint32_t RapidFireIOclass::ReadPinPD2() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000004; return data;
}

uint32_t RapidFireIOclass::ReadPinPD3() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000008; return data;
}

uint32_t RapidFireIOclass::ReadPinPD4() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000010; return data;
}

uint32_t RapidFireIOclass::ReadPinPD5() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000020; return data;
}

uint32_t RapidFireIOclass::ReadPinPD6() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000040; return data;
}

uint32_t RapidFireIOclass::ReadPinPD7() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000080; return data;
}

uint32_t RapidFireIOclass::ReadPinPD8() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000100; return data;
}

uint32_t RapidFireIOclass::ReadPinPD9() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000200; return data;
}

uint32_t RapidFireIOclass::ReadPinPD10() {
  uint32_t data = REG_PIOD_PDSR; data &= 0x00000400; return data;
}

void RapidFireIOclass::init() {
  for (int i = 0; i <= 53; i++) {
    pinMode(i, INPUT);
  }
  for (int i = A0; i <= A11; i++) {
    pinMode(i, INPUT);
  }
}

// ATtiny25/45/85 e.g. Gemma
#elif defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)

void RapidFireIOclass::SetPin0() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPin1() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPin2() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPin3() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPin4() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPin5() {
  PORTB |= 0x20;
}

void RapidFireIOclass::ClearPin0() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPin1() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPin2() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPin3() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPin4() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPin5() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::TogglePin0() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePin1() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePin2() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePin3() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePin4() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePin5() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::SetInputStatePin0() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePin1() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePin2() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePin3() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePin4() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePin5() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetOutputStatePin0() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePin1() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePin2() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePin3() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePin4() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePin5() {
  DDRB |= 0x20;
}

void RapidFireIOclass::ToggleIOstatePin0() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePin1() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePin2() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePin3() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePin4() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePin5() {
  DDRB ^= 0x20;
}

uint8_t RapidFireIOclass::ReadPin0() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPin1() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPin2() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPin3() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPin4() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPin5() {
  uint8_t data = PINB; data &= 0x20; return data;
}

void RapidFireIOclass::SetPinPB0() {
  PORTB |= 0x01;
}

void RapidFireIOclass::SetPinPB1() {
  PORTB |= 0x02;
}

void RapidFireIOclass::SetPinPB2() {
  PORTB |= 0x04;
}

void RapidFireIOclass::SetPinPB3() {
  PORTB |= 0x08;
}

void RapidFireIOclass::SetPinPB4() {
  PORTB |= 0x10;
}

void RapidFireIOclass::SetPinPB5() {
  PORTB |= 0x20;
}

void RapidFireIOclass::ClearPinPB0() {
  PORTB &= (~0x01);
}

void RapidFireIOclass::ClearPinPB1() {
  PORTB &= (~0x02);
}

void RapidFireIOclass::ClearPinPB2() {
  PORTB &= (~0x04);
}

void RapidFireIOclass::ClearPinPB3() {
  PORTB &= (~0x08);
}

void RapidFireIOclass::ClearPinPB4() {
  PORTB &= (~0x10);
}

void RapidFireIOclass::ClearPinPB5() {
  PORTB &= (~0x20);
}

void RapidFireIOclass::TogglePinPB0() {
  PORTB ^= 0x01;
}

void RapidFireIOclass::TogglePinPB1() {
  PORTB ^= 0x02;
}

void RapidFireIOclass::TogglePinPB2() {
  PORTB ^= 0x04;
}

void RapidFireIOclass::TogglePinPB3() {
  PORTB ^= 0x08;
}

void RapidFireIOclass::TogglePinPB4() {
  PORTB ^= 0x10;
}

void RapidFireIOclass::TogglePinPB5() {
  PORTB ^= 0x20;
}

void RapidFireIOclass::SetInputStatePinPB0() {
  DDRB &= (~0x01);
}

void RapidFireIOclass::SetInputStatePinPB1() {
  DDRB &= (~0x02);
}

void RapidFireIOclass::SetInputStatePinPB2() {
  DDRB &= (~0x04);
}

void RapidFireIOclass::SetInputStatePinPB3() {
  DDRB &= (~0x08);
}

void RapidFireIOclass::SetInputStatePinPB4() {
  DDRB &= (~0x10);
}

void RapidFireIOclass::SetInputStatePinPB5() {
  DDRB &= (~0x20);
}

void RapidFireIOclass::SetOutputStatePinPB0() {
  DDRB |= 0x01;
}

void RapidFireIOclass::SetOutputStatePinPB1() {
  DDRB |= 0x02;
}

void RapidFireIOclass::SetOutputStatePinPB2() {
  DDRB |= 0x04;
}

void RapidFireIOclass::SetOutputStatePinPB3() {
  DDRB |= 0x08;
}

void RapidFireIOclass::SetOutputStatePinPB4() {
  DDRB |= 0x10;
}

void RapidFireIOclass::SetOutputStatePinPB5() {
  DDRB |= 0x20;
}

void RapidFireIOclass::ToggleIOstatePinPB0() {
  DDRB ^= 0x01;
}

void RapidFireIOclass::ToggleIOstatePinPB1() {
  DDRB ^= 0x02;
}

void RapidFireIOclass::ToggleIOstatePinPB2() {
  DDRB ^= 0x04;
}

void RapidFireIOclass::ToggleIOstatePinPB3() {
  DDRB ^= 0x08;
}

void RapidFireIOclass::ToggleIOstatePinPB4() {
  DDRB ^= 0x10;
}

void RapidFireIOclass::ToggleIOstatePinPB5() {
  DDRB ^= 0x20;
}

uint8_t RapidFireIOclass::ReadPinPB0() {
  uint8_t data = PINB; data &= 0x01; return data;
}

uint8_t RapidFireIOclass::ReadPinPB1() {
  uint8_t data = PINB; data &= 0x02; return data;
}

uint8_t RapidFireIOclass::ReadPinPB2() {
  uint8_t data = PINB; data &= 0x04; return data;
}

uint8_t RapidFireIOclass::ReadPinPB3() {
  uint8_t data = PINB; data &= 0x08; return data;
}

uint8_t RapidFireIOclass::ReadPinPB4() {
  uint8_t data = PINB; data &= 0x10; return data;
}

uint8_t RapidFireIOclass::ReadPinPB5() {
  uint8_t data = PINB; data &= 0x20; return data;
}

void RapidFireIOclass::init() {
}

#endif

RapidFireIOclass RapidFireIO;