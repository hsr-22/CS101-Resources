/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n;
    int i = 2;
    int flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 1){
        while(i <= n/2){
            if(n % i == 0){
                flag = 1;
                break;
            }
            ++i;
        }
    }
    else{
        flag = 1;
    }

    if(flag == 0){
        printf("It's a prime\n");
    }
    else{
        printf("Not a prime\n");
    }

    return 0;
}