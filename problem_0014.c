// Longest Collatz Sequence
// Probem 14
// https://projecteuler.net/problem=14

#include "pe_functions.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_chain_length(long n) {
    int steps = 0;
    
    while (n != 1) {
        steps++;
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    return steps;
}

int main(void) {
    int max_length = 0, result = 0;
    
    for (int i = 2; i < 1000000; i++) {
        if (get_chain_length(i) > max_length) {
            max_length = get_chain_length(i);
            result = i;
        }
    }
    printf("%d", result);
    
    return 0;
}
