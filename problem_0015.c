// Lattice Paths
// Problem 15
// https://projecteuler.net/problem=15

#include "pe_functions.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("%llu\n", lattice_path(20, 20));
  return 0;
}
