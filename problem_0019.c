// Counting Sundays
// Problem 19
// https://projecteuler.net/problem=19

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_leap_year(int year);

int main(void) {
  int day_of_week = 1; // Start from 1 Jan 1900
  int sunday_count = 0;

  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for (int year = 1900; year < 1901; year++) {
    for (int month = 0; month < 12; month++) {
      int days = days_in_month[month];
      if (month == 1 && is_leap_year(year))
        days = 29;
      day_of_week = (day_of_week + days) % 7;
    }
  }

  for (int year = 1901; year <= 2000; year++) {
    for (int month = 0; month < 12; month++) {
      if (day_of_week == 0) {
        sunday_count++;
      }
      int days = days_in_month[month];
      if (month == 1 && is_leap_year(year))
        days = 29;
      day_of_week = (day_of_week + days) % 7;
    }
  }

  printf("%d\n", sunday_count);
  return 0;
}

bool is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}