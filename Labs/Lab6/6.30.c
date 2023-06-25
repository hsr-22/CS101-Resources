#include <stdio.h>
#include <math.h>

#define SIZE 1000

int main(void) {
    int a[1000];

    for (int i = 0; i < SIZE; i++) {
        a[i] = 1;
    }

    for (int i = 2; i < sqrt(SIZE); i++) {
        if (a[i] == 1) {
            for (int j = i*i; j < SIZE; j += i) {
                a[j] = 0;
            }
        }
    }

    printf("Prime numbers between 2 and %d: ", SIZE);
    for (int i = 2; i < SIZE; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    puts("");

}