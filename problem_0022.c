// Names Scores
// Problem 22
// https://projecteuler.net/problem=22

#include "pe_functions.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
  char *s1 = *(char **)a;
  char *s2 = *(char **)b;
  return strcmp(s1, s2);
}

int name_value(const char *name) {
  int sum = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    sum += name[i] - 'A' + 1;
  }
  return sum;
}

int main(void) {
  FILE *fp = fopen("names.txt", "r");
  if (fp == NULL) {
    perror("File open failed");
    return 1;
  }

  char buffer[100000];
  size_t nread = fread(buffer, 1, sizeof(buffer) - 1, fp);
  buffer[nread] = '\0';

  char **names = malloc(6000 * sizeof(char *));
  int count = 0;

  char *token = strtok(buffer, ",");

  while (token != NULL) {
    size_t len = strlen(token);
    if (token[0] == '"' && token[len - 1] == '"') {
      token[len - 1] = '\0';
      token++;
    }

    char *name = malloc(strlen(token) + 1);
    strcpy(name, token);
    names[count++] = name;

    token = strtok(NULL, ",");
  }

  qsort(names, count, sizeof(char *), cmp_str);

  long long total = 0;
  for (int i = 0; i < count; i++) {
    int value = name_value(names[i]);
    int position = i + 1;
    total += (long long)position * value;
  }

  printf("%lld\n", total);

  for (int i = 0; i < count; i++) {
    free(names[i]);
  }
  free(names);
  fclose(fp);
  return 0;
}
