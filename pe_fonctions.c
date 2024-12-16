//  Created by Mert Samet Kayacıoğlu

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "pe_fonctions.h"

bool isPrime(long number) {
    if (number <= 1) return false;

    if (number == 2 || number == 3) return true;

    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }

    return true; 
}

bool isPalindromicNumber(int number) {
    if (number < 0) return 0;

    int original = number;
    int reversed = 0;

    while (number != 0) {
	int digit = number % 10;
	reversed = reversed * 10 + digit;
	number /= 10;
    }

    return original == reversed;
}
