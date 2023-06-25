/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <math.h>

//Solves quadratic equations if you input the coefficients. Don't cry if it's complex.
int main(void){
    float a, b, c;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    float D = b*b-4*a*c;
    if(D >= 0){
        float x1 = (float)(-b + pow(D, 0.5))/(2*a);
        float x2 = (float)(-b - pow(D, 0.5))/(2*a);
        printf("The real roots of the equation are: %0.2f and %0.2f\n", x1, x2);
    }
    else{
        printf("Hehe, lol! It's complex.\n");
    }
}
