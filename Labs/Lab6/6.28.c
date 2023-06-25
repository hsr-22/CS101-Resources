/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void) {
    int nums[SIZE];
    int unique[SIZE];
    int num_unique = 0;

    // seed the random number generator
    srand(time(NULL));

    // generate 20 random numbers between 1 and 20
    for (int i = 0; i < SIZE; i++) {
        nums[i] = 1 + rand() % 20;
    }

    // find non-duplicate values
    for (int i = 0; i < SIZE; i++) {
        int j;
        for (j = 0; j < num_unique; j++) {
            if (nums[i] == unique[j]) {
                break;
            }
        }
        if (j == num_unique) {
            unique[num_unique++] = nums[i];
        }
    }

    // display non-duplicate values
    printf("Non-duplicate values: ");
    for (int i = 0; i < num_unique; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

}
