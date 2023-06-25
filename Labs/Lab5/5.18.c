/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int isEven(int n);

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        if(isEven(n)){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
        printf("Enter a number: ");
        scanf("%d", &n);
    }
}

int isEven(int n){
    if(n%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
