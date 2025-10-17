// 1000-digit Fibonacci Number
// Problem 25
// https://projecteuler.net/problem=25

#include <stdio.h>

int main() {
  int fib[1000] = {0}, temp[1000] = {0}, next_fib[1000] = {0};
  fib[0] = 1;  // F1
  temp[0] = 1; // F2
  unsigned int digit_count = 1;

  for (int i = 3; digit_count < 1000; i++) {
    int carry = 0;

    for (int j = 0; j < 1000; j++) {
      int sum = fib[j] + temp[j] + carry;
      next_fib[j] = sum % 10;
      carry = sum / 10;
    }

    for (int j = 0; j < 1000; j++) {
      fib[j] = temp[j];
      temp[j] = next_fib[j];
    }

    for (int j = 999; j >= 0; j--) {
      if (temp[j] != 0) {
        digit_count = j + 1;
        break;
      }
    }

    if (digit_count >= 1000) {
      printf("> %d\n", i);
      break;
    }
  }

  return 0;
}