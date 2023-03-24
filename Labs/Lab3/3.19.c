/*
Author : Harsh Sanjay Roniyar
*/

#include <stdio.h>

int main(void){
    float p;
    float r;
    float d;

    float interest = p*r*d/365;
    p = 0;
    while(1){
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &p);
        if(p == -1){
            return 0;
        }
        printf("Enter interest rate: ");
        scanf("%f", &r);
        printf("Enter term of the loan in days: ");
        scanf("%f", &d);

        float interest = p*r*d/365;

        printf("The interest charge is $%0.2f\n\n", interest);
    }

    return 0;
}