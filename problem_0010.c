// Summation of Primes
// Problem 10

#include "pe_functions.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    long sum = 0;
    for (long i = 2; i < 2000000; i++){
        if (is_prime(i)) {
            sum += i;
        }
    }
    printf("%ld", sum);
  return 0;
}
