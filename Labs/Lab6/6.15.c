/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void) {
    int set1[10], set2[10];
    int unique[10];
    int num_unique = 0;

    // read in the first set of numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter a number for set 1: ");
        scanf("%d", &set1[i]);
    }

    // read in the second set of numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter a number for set 2: ");
        scanf("%d", &set2[i]);
    }

    // find unique elements in both sets
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (set1[i] == set2[j]) {
                int k;
                for(k = 0; k < num_unique; k++) {
                    if (set1[i] == unique[k]) {
                        break;
                    }
                }
                if (k == num_unique) {
                    unique[num_unique] = set1[i];
                    num_unique++;
                }
            }
        }
    }

    // display unique elements
    printf("Intersection of Sets: ");
    for (int i = 0; i < num_unique; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

}
