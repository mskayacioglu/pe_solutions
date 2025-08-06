// Factorial Digit Sum
// Probem 20
// https://projecteuler.net/problem=20

#include "pe_functions.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(void) {
  Node *head = NULL, *tail = NULL;

  insertNumberReversed(&head, &tail, "3628800");

  for (int i = 11; i <= 100; i++) {
    multiplyListByInt(&head, &tail, i);
  }

  printf("%d\n", sumOfDigits(head));

  return 0;
}
