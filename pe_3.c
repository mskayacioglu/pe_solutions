// Largest Prime Factor
// Problem 3

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  long number = 600851475143;
  long prime_factor = 2;

  while (prime_factor <= number) {
    if (number % prime_factor == 0) {
      if (is_prime(prime_factor))
        number /= prime_factor;
    } else
      prime_factor++;
  }

  printf("%ld\n", prime_factor);

  return 0;
}
