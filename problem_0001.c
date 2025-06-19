// Multiples of 3 or 5
// Problem 1
// https://projecteuler.net/problem=1

#include "pe_functions.h"
#include <stdio.h>

int main(void) {
  int sum = 0;

  for (int i = 3; i < 1000; i++) {
    if (i % 3 == 0)
      sum += i;
    else if (i % 5 == 0)
      sum += i;
  }

  printf("%d\n", sum);

  return 0;
}
