//  Created by Mert Samet Kayacıoğlu

#ifndef PE_FUNCTIONS_H
#define PE_FUNCTIONS_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

// * Linked List Struct ------------------------------- *

typedef struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
} Node;

Node *createNode(int data);

void push_back(Node **head, Node **tail, int digit);

// * ------------------------------------------------- *

long sum_multiples(long k, long limit);

bool is_prime(long number);

bool is_palindrome(int number);

long gcd(long a, long b);

long lcm(long a, long b);

bool is_divisor(long num, long div);

long factorial(int n);

unsigned long long lattice_path(int a, int b);

bool is_leap_year(int year);

long linear_search(long arr[], long size, long goal);

#endif // PE_FUNCTIONS_H
