// 10 001st Prime
// Problem 7

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  long count = 0, num = 1;

  while (count < 10001) {
    num++;
    if (is_prime(num))
      count++;
  }

  printf("%ld", num);
  return 0;
}
