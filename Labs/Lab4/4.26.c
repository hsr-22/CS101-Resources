/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    double pi = 4;
    for(int i = 1; i<=12500000; i++){
        if(i%2 != 0){
            pi -= (float)4/(2*i+1);
        }
        else{
            pi += (float)4/(2*i+1);
        }
        printf("(%d) %0.9f\n", i, pi);
    }
}