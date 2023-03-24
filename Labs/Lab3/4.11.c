/*
Author : Harsh Sanjay Roniyar*/
#include <stdio.h>

int main(void){
    int sum = 0;
    int n = 1;
    while(n * 7 <= 100){
        sum += n * 7;
        n++;
    }
    printf("%d", sum);

    return 0;
}