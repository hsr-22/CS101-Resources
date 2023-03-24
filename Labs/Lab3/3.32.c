/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n;
    int i = 0;
    int j = 0;

    printf("Enter side of square: ");
    scanf("%d", &n);

    while(i < n){
        while(j < n){
            printf("*");
            j++;
        }
        j = 0;
        puts("");
        i++;
    }

    return 0;
}