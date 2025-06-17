# Multiples of 3 or 5

> Problem 1  

**Link:** [Multiples of 3 or 5](https://projecteuler.net/problem=1)

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.  
Find the sum of all the multiples of 3 or 5 below 1000.

**Answer:** 233168

## Solution

* [For Loop in C](https://www.tutorialspoint.com/cprogramming/c_for_loop.htm)  
* [C - The if-else Statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)

### Code:

<pre>
// Multiples of 3 or 5
// Problem 1

#include "pe_functions.h"
#include <stdio.h>

int main(void) {
  int sum = 0;

  for (int i = 3; i < 1000; i++) {
    if (i % 3 == 0)
      sum += i;
    else if (i % 5 == 0)
      sum += i;
  }

  printf("%d\n", sum);

  return 0;
}
</pre>
