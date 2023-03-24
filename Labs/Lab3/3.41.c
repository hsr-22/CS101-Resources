/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    float pi = 3.14159;
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float d = 2*r;
    float circum = 2*pi*r;
    float area = pi*r*r;

    printf("Diameter: %0.2f\nCircumference: %0.2f\nArea: %0.2f\n", d, circum, area);
}