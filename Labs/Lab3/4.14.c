/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n = 1;
    int i = 1;
    int fact = 1;

    printf("n\tn!\n\n");

    while(n >= 1 && n <= 5){
        while(i <= n){
            fact = fact * i;
            i++;
        }        
        printf("%d\t%d\n", n, fact);
        n++;
    }

    return 0;
}