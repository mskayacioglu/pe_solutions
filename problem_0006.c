// Sum Square Difference
// Problem 6
// https://projecteuler.net/problem=6

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  long sum_squares = 0, square_sums = 0;

  for (long i = 1; i <= 100; i++) {
    sum_squares += (i * i);
    square_sums += i;
  }
  square_sums *= square_sums;

  printf("%ld", (square_sums - sum_squares));
  return 0;
}
