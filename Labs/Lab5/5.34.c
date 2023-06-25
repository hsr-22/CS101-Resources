/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

float power(float base, int exponent);

int main(void){
    float base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%f %d", &base, &exponent);

    printf("%f to the power of %d is %f", base, exponent, power(base, exponent));
}

float power(float base, int exponent){
    if (exponent == 1){
        return base;
    }
    return base * power(base, exponent-1);
}
