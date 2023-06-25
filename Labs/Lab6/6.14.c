#include <stdio.h>

int main(void) {
    int set1[10], set2[10];
    int unique[20];
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
        int j;
        for (j = 0; j < num_unique; j++) {
            if (set1[i] == unique[j]) {
                break;
            }
        }
        if (j == num_unique) {
            unique[num_unique++] = set1[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < num_unique; j++) {
            if (set2[i] == unique[j]) {
                break;
            }
        }
        if (j == num_unique) {
            unique[num_unique++] = set2[i];
        }
    }

    // display unique elements
    printf("Union of the two sets: ");
    for (int i = 0; i < num_unique; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

}