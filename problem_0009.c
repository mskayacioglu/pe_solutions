// Special Pythagorean Triplet
// Problem 9
// https://projecteuler.net/problem=9

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  // a + b + c = 1000
  // c = 1000 - a - b
  // a**2 + b**2 = c**2
  // a**2 + b**2 = (1000 - a - b)**2

  int a, b, c;

  for (a = 1; a < 1000; a++) {
    for (b = a + 1; b < 1000 - a; b++) {
      c = 1000 - a - b;
      if (a * a + b * b == c * c) {
        goto done;
      }
    }
  }
done:
  printf("%d", a * b * c);
  return 0;
}
