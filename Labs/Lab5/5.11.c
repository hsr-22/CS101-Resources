/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <math.h>

float roundToInteger(float x);
float roundToTenths(float x);
float roundToHundreths(float x);
float roundToThousandths(float x);

int main(void){
    float n;
    printf("Please oblige and give a number: ");
    scanf("%f", &n);

    printf("%0.0f\n", roundToInteger(n));
    printf("%0.1f\n", roundToTenths(n));
    printf("%0.2f\n", roundToHundreths(n));
    printf("%0.3f\n", roundToThousandths(n));
    printf("%f", n);
}

float roundToInteger(float x){
    float y = floor(x + .5);
    return y;
}
float roundToTenths(float x){
    float y = floor(x*10 + .5) / 10;
    return y;
}
float roundToHundreths(float x){
    float y = floor(x*100 + .5) / 100;
    return y;
}
float roundToThousandths(float x){
    float y = floor(x*1000 + 0.5) / 1000;
    return y;
}
