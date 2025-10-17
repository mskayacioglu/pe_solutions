// Non-Abundant Sums
// Problem 23
// https://projecteuler.net/problem=23

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 28124

int is_abundant(int n);

int main(void) {
  bool abundant[LIMIT] = {false};
  bool can_be_written[LIMIT] = {false};
  int abundants[7000];
  int count = 0;

  for (int i = 1; i < LIMIT; i++) {
    if (is_abundant(i)) {
      abundant[i] = true;
      abundants[count++] = i;
    }
  }

  for (int i = 0; i < count; i++) {
    for (int j = i; j < count; j++) {
      int sum = abundants[i] + abundants[j];
      if (sum < LIMIT)
        can_be_written[sum] = true;
    }
  }

  int result = 0;
  for (int i = 1; i < LIMIT; i++) {
    if (!can_be_written[i])
      result += i;
  }

  printf("%d\n", result);
  return 0;
}

int is_abundant(int num) {
    if (num < 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }
    return sum > num;
}