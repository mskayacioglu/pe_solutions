// Power Digit Sum
// Problem 16
// https://projecteuler.net/problem=16

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 500

int main(void) {
  int digits[MAX_DIGITS];
  memset(digits, 0, sizeof(digits));
  digits[0] = 1;
  int size = 1;

  for (int i = 0; i < 1000; i++) {
    int carry = 0;
    for (int j = 0; j < size; j++) {
      int product = digits[j] * 2 + carry;
      digits[j] = product % 10;
      carry = product / 10;      
    }

    while (carry) {
      digits[size] = carry % 10;
      carry /= 10;
      size++;
    }
  }

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += digits[i];
  }

  printf("%d\n", sum);
  return 0;
}
