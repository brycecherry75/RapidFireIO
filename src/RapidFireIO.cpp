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

void RapidFireIOclass::init() {
}

#endif

RapidFireIOclass RapidFireIO;