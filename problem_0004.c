// Largest Palindrome Product
// Problem 4
// https://projecteuler.net/problem=4

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int largest_palindrome = 0, number_1, number_2;

  for (number_1 = 100; number_1 <= 999; number_1++) {
    for (number_2 = number_1; number_2 <= 999; number_2++) {
      int product = number_1 * number_2;

      if (is_palindrome(product) && product > largest_palindrome)
        largest_palindrome = product;
    }
  }

  printf("%d\n", largest_palindrome);

  return 0;
}
