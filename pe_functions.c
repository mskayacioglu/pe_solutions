//  Created by Mert Samet Kayacıoğlu

#include "pe_functions.h"

bool is_prime(long number) {
  if (number <= 1)
    return false;

  if (number == 2 || number == 3)
    return true;

  if (number % 2 == 0)
    return false;

  for (int i = 3; i * i <= number; i += 2) {
    if (number % i == 0)
      return false;
  }

  return true;
}

bool is_palindrome(int number) {
  if (number < 0)
    return 0;

  int original = number, reversed = 0;

  while (number != 0) {
    int digit = number % 10;
    reversed = reversed * 10 + digit;
    number /= 10;
  }

  return original == reversed;
}

long gcd(long a, long b) {
  while (b != 0) {
    long tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}

long lcm(long a, long b) { return a * b / gcd(a, b); }

bool is_divisor(long num, long div){
    return num % div == 0;
}
