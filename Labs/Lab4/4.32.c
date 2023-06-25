/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int num;
    printf("Enter an odd n: ");
    scanf("%d", &num);
    int n = (num+1)/2;
    for(int i = 1; i <= n; i++){
        for(int b = 1; b<=n-i; b++){ //Left Top Triangular part with ' '
            printf(" ");
        }
        for(int c = 1; c<=2*i-1; c++){ //Central Pyramid with *
            printf("*");
        }
        puts("");
    }

    for(int i = n-1; i >= 1; i--){
        for(int b = 1; b<=n-i; b++){ //Left Top Triangular part with ' '
            printf(" ");
        }
        for(int c = 1; c<=2*i-1; c++){ //Central Pyramid with *
            printf("*");
        }
        puts("");
    }
}