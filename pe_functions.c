//  Created by Mert Samet Kayacıoğlu

#include "pe_functions.h"
#include <stdlib.h>

Node *createNode(int data) {
  Node *new_node = malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;
  new_node->prev = NULL;
  return new_node;
}

void push_back(Node **head, Node **tail, int digit) {
  Node *n = createNode(digit);
  n->prev = *tail;
  if (*tail)
    (*tail)->next = n;
  else
    *head = n;
  *tail = n;
}

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

bool is_divisor(long num, long div) { return num % div == 0; }

long factorial(int n) {
  if (n < 0) {
    printf("Error: The factorial value cannot be calculated for negative "
           "numbers.\n");
    return -1;
  }
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

unsigned long long lattice_path(int a, int b) {
  int n = a + b;
  int r = a < b ? a : b;
  unsigned long long result = 1;

  for (int i = 1; i <= r; i++) {
    result *= (n - r + i);
    result /= i;
  }

  return result;
}

bool is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

long linear_search(long arr[], long size, long goal)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == goal)
            return i;
    return -1;
}
