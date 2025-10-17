// Summation of Primes
// Problem 10
// https://projecteuler.net/problem=10

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_prime(long number);

int main(void) {
  long sum = 0;
  for (long i = 2; i < 2000000; i++) {
    if (is_prime(i)) {
      sum += i;
    }
  }
  printf("> %ld\n", sum);
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