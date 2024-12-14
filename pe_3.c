//Largest Prime Factor

#include <stdio.h>
#include <stdbool.h>
#include "pe_fonctions.h"

int main(void){
    long number = 600851475143;
    long prime_factor = 2;
    
    while(prime_factor <= number){
    	if(number % prime_factor == 0){
            if(isPrime(prime_factor)){
                number /= prime_factor;
            }
        }else prime_factor++;
    }
    printf("%ld\n", prime_factor);
    
    return 0;
}

