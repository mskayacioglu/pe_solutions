// Lattice Paths
// Problem 15
// https://projecteuler.net/problem=15

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long lattice_path(int a, int b);

int main(void) {
  printf("> %llu\n", lattice_path(20, 20));
  return 0;
}

unsigned long long lattice_path(int a, int b) {
  int n = a + b;
  int r = a < b ? a : b;
  unsigned long long result = 1;

  for (int i = 1; i <= r; i++) {
    result *= (n - r + i);
    result /= i;
  }

  return result;
}