// Highly Divisible Triangular Number
// Problem 12
// https://projecteuler.net/problem=12

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  long triangle_number = 0;
  int n = 1;

  while (true) {
    triangle_number += n;
    n++;

    int count = 0;

    for (long i = 1; i * i <= triangle_number; i++) {
      if (is_divisor(triangle_number, i)) {
        if (i * i == triangle_number)
          count++;
        else
          count += 2;
      }
    }

    if (count > 500) {
      printf("%ld\n", triangle_number);
      break;
    }
  }

  return 0;
}
