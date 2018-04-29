// Cycles16.h - Library for measuring clock cycles with a 16 bit counter.
//
// Copyright © 2018 Felix E. Klee <felix.klee@inka.de>
//
// This work is free. You can redistribute it and/or modify it under the terms
// of the Do What The Fuck You Want To Public License, Version 2, as published
// by Sam Hocevar. See the COPYING file for more details.

#ifndef Cycles16_h
#define Cycles16_h

#include "Arduino.h"

class Cycles16 {
private:
  static void startTimer2();
public:
  static void begin();
  static uint16_t now();
  static uint16_t elapsed(uint16_t, uint16_t);
  static uint16_t elapsedTillNow(uint16_t);
};

#endif
