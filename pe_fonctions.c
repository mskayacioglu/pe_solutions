//  Created by Mert Samet Kayacıoğlu

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "pe_fonctions.h"

#include <stdio.h>
#include <stdbool.h>

bool isPrime(long num) {
    if (num <= 1) {
        return false;
    }

    if (num == 2 || num == 3) {
        return true;
    }

    if (num % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true; 
}
