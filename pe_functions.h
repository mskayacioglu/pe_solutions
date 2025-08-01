//  Created by Mert Samet Kayacıoğlu

#ifndef PE_FUNCTIONS_H
#define PE_FUNCTIONS_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

long sum_multiples(long k, long limit);

bool is_prime(long number);

bool is_palindrome(int number);

long gcd(long a, long b);

long lcm(long a, long b);

bool is_divisor(long num, long div);

long factorial(int n);

unsigned long long lattice_path(int a, int b);

#endif // PE_FUNCTIONS_H
