// Largest Palindrome Product
// Problem 4
// https://projecteuler.net/problem=4

#include <stdbool.h>
#include <stdio.h>

bool is_palindrome(int number);

int main(void) {
  int largest_palindrome = 0, number_1, number_2;

  for (number_1 = 100; number_1 <= 999; number_1++) {
    for (number_2 = number_1; number_2 <= 999; number_2++) {
      int product = number_1 * number_2;

      if (is_palindrome(product) && product > largest_palindrome)
        largest_palindrome = product;
    }
  }

  printf("> %d\n", largest_palindrome);

  return 0;
}

bool is_palindrome(int number) {
  if (number < 0)
    return 0;

  int original = number, reversed = 0;

  while (number != 0) {
    int digit = number % 10;
    reversed = reversed * 10 + digit;
    number /= 10;
  }

  return original == reversed;
}