// Smallest Multiple
// Problem 5

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  long result = 1;
  for (long i = 2; i <= 20; i++) {
    result = lcm(result, i);
  }
  printf("%ld\n", result);
  return 0;
}
