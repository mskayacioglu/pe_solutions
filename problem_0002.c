// Even Fibonacci Numbers
// Problem 2

#include "pe_functions.h"
#include <stdio.h>

int main(void) {
  int sum = 1, fib_num1 = 1, fib_num2 = 2, temp;

  while (fib_num2 < 4000000) {
    if (fib_num2 % 2 != 0)
      sum += fib_num2;

    temp = fib_num2;
    fib_num2 += fib_num1;
    fib_num1 = temp;
  }

  printf("%d\n", sum);

  return 0;
}
