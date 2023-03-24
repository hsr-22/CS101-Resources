/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n; 
    int i = 1;
    int j = 1;

    printf("Side: ");
    scanf("%d", &n);

    while(i <= n){
        while(j <= n){
            if(i == 1 || j == 1){
                printf("*");
            }
            else if(i == n || j == n){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        j = 1;
        puts("");
        i++;
    }

    return 0;
}