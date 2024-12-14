//  Created by Mert Samet Kayacıoğlu

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "pe_fonctions.h"

#include <stdio.h>
#include <stdbool.h>

bool isPrime(long number) {
    if (number <= 1) {
        return false;
    }

    if (number == 2 || number == 3) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }

    return true; 
}
