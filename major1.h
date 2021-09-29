#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

double endian ( double x );

bool parity(unsigned long value);

int rotate(unsigned long myint, int n);

void clz(int x);

#endif
