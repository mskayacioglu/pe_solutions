// Amicable Numbers
// Problem 21
// https://projecteuler.net/problem=21

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_divisor(long num, long div);

int main(void) {
  long nums[10000] = {0};
  long sum = 0;

  for (long i = 2; i < 10000; i++) {
    long divisor_sum = 0;
    for (long j = 1; j <= i / 2; j++) {
      if (is_divisor(i, j))
        divisor_sum += j;
    }
    nums[i] = divisor_sum;
  }

  for (int i = 2; i < 10000; i++) {
    if (nums[i] == 0)
      continue;
    if (nums[i] >= 10000)
      continue;
    if (i == nums[nums[i]] && i != nums[i]) {
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}

bool is_divisor(long num, long div) { return num % div == 0; }