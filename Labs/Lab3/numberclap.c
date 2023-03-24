/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int N;
    int i = 1;
    printf("Enter N:");
    scanf("%d", &N);
    while(i <= N){
        if(i % 7 == 0){
            printf("CLAP\n");
        }
        else if(i / 10 == 7 || i % 10 == 7){
            printf("CLAP\n");
        }
        else{
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}