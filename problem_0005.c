// Smallest Multiple
// Problem 5
// https://projecteuler.net/problem=5

#include <stdbool.h>
#include <stdio.h>

long lcm(long a, long b);

long gcd(long a, long b);

int main(void) {
  long result = 1;
  for (long i = 2; i <= 20; i++) {
    result = lcm(result, i);
  }
  printf("> %ld\n", result);
  return 0;
}

long lcm(long a, long b) { 
  return a * b / gcd(a, b); 
}

long gcd(long a, long b) {
  while (b != 0) {
    long tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}