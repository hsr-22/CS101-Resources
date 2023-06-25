/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int p;
    int b;
    int h;
    int count = 0;
    for(h = 1; h <= 500; h++){
        for(p = 1; p < h; p++){
            for(b = 1; b < h; b++){
                if(p*p + b*b == h*h){
                    printf("%d\t%d\t%d\n", p, b, h);
                    count++;
                }
            }
        }
    }
    printf("Total number of unique pythagorean triplets: %d\n", count);
}