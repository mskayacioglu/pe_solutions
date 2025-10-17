// Number Letter Counts
// Problem 17
// https://projecteuler.net/problem=17

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  const char *units[] = {"",     "one", "two",   "three", "four",
                         "five", "six", "seven", "eight", "nine"};
  const char *teens[] = {"ten",      "eleven",  "twelve",  "thirteen",
                         "fourteen", "fifteen", "sixteen", "seventeen",
                         "eighteen", "nineteen"};
  const char *tens[] = {"",      "",      "twenty",  "thirty", "forty",
                        "fifty", "sixty", "seventy", "eighty", "ninety"};

  int counter = 0;

  for (int i = 1; i <= 1000; i++) {
    if (i == 1000) {
      counter += 11; // one thousand
      break;
    }

    if (i / 100 != 0) {
      counter += strlen(units[i / 100]);
      counter += strlen("hundred");
      if (i % 100 != 0) {
        counter += strlen("and");
      }
    }

    if (i % 100 < 20 && i % 100 >= 10) {
      counter += strlen(teens[(i % 100) - 10]);
    } else {
      counter += strlen(tens[(i % 100) / 10]);
      counter += strlen(units[i % 10]);
    }
  }
  printf("> %d\n", counter);
  return 0;
}
