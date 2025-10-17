// Largest Prime Factor
// Problem 3
// https://projecteuler.net/problem=3

#include <stdbool.h>
#include <stdio.h>

bool is_prime(long number);

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

  printf("> %ld\n", prime_factor);

  return 0;
}

bool is_prime(long number) {
  if (number <= 1)
    return false;

  if (number == 2 || number == 3)
    return true;

  if (number % 2 == 0)
    return false;

  for (int i = 3; i * i <= number; i += 2) {
    if (number % i == 0)
      return false;
  }

  return true;
}