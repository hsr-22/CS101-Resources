/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n = 1;
    printf("N\tN^2\tN^3\tN^4\n\n");
    while(n <= 10){
        printf("%d\t%d\t%d\t%d\n", n, n*n, n*n*n, n*n*n*n);
        n++;
    }

    return 0;
}