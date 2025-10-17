// 10 001st Prime
// Problem 7
// https://projecteuler.net/problem=7

#include <stdbool.h>
#include <stdio.h>

bool is_prime(long number);

int main(void) {
  long count = 0, num = 1;

  while (count < 10001) {
    num++;
    if (is_prime(num))
      count++;
  }

  printf("> %ld\n", num);
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