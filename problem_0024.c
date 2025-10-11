// Lexicographic Permutations
// Problem 24
// https://projecteuler.net/problem=24

#include "pe_functions.h"
#include <stdio.h>

int next_permutation(int *a, int n) {
    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1]) i--;
    if (i < 0) return 0;

    int j = n - 1;
    while (a[j] <= a[i]) j--;

    // swap a[i] and a[j]
    int t = a[i]; 
    a[i] = a[j]; 
    a[j] = t;

    // reverse
    int k = i + 1, l = n - 1;
    while (k < l) {
        t = a[k]; 
        a[k] = a[l]; 
        a[l] = t;
        k++; 
        l--;
    }

    return 1;
}

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    size_t count = 1;

    while (count < 1000000) {
        if (!next_permutation(a, n)) break;
        count++;
    }

    printf("\n%s", "> ");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    printf("\n\n");
    return 0;
}
