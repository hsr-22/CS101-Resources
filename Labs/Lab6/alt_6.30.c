/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void sieve_of_eratosthenes(int limit) {
    bool* is_prime = (bool*) malloc((limit + 1) * sizeof(bool)); // allocate memory for array of bools
    int i, j;

    // set all elements to true
    for (i = 0; i <= limit; i++) {
        is_prime[i] = true;
    }

    // mark multiples of primes as non-prime
    for (i = 2; i <= sqrt(limit); i++) {
        if (is_prime[i]) {
            for (j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // print out all prime numbers
    for (i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }

    free(is_prime); // free dynamically allocated memory
}

int main() {
    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d: ", limit);
    sieve_of_eratosthenes(limit);

    return 0;
}
