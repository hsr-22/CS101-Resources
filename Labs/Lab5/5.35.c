/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void){
    int n;
    printf("n: ");
    scanf("%u", &n);

    printf("nth fibonacci: %llu\n", fibonacci(n));
}

unsigned long long int fibonacci(unsigned int n){
    int i = 1;
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
