// Factorial Digit Sum
// Problem 20
// https://projecteuler.net/problem=20

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
} Node;

Node *createNode(int data);

void push_back(Node **head, Node **tail, int digit);

void insertNumberReversed(Node **head, Node **tail, const char *number);

void multiplyListByInt(Node **head, Node **tail, int multiplier);

int sumOfDigits(Node *head);

int main(void) {
  Node *head = NULL, *tail = NULL;

  insertNumberReversed(&head, &tail, "3628800");

  for (int i = 11; i <= 100; i++) {
    multiplyListByInt(&head, &tail, i);
  }

  printf("%d\n", sumOfDigits(head));

  return 0;
}

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

void insertNumberReversed(Node **head, Node **tail, const char *number) {
  for (int i = strlen(number) - 1; i >= 0; --i) {
    push_back(head, tail, number[i] - '0');
  }
}

void multiplyListByInt(Node **head, Node **tail, int multiplier) {
  Node *curr = *head;
  int carry = 0;

  while (curr) {
    int product = curr->data * multiplier + carry;
    curr->data = product % 10;
    carry = product / 10;

    if (curr->next == NULL)
      break;
    curr = curr->next;
  }

  while (carry) {
    int digit = carry % 10;
    push_back(head, tail, digit);
    carry /= 10;
  }
}

int sumOfDigits(Node *head) {
  int sum = 0;
  for (Node *curr = head; curr != NULL; curr = curr->next) {
    sum += curr->data;
  }
  return sum;
}