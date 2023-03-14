#include <stdio.h>
int main(void){
    float num1;
    float num2;
    printf("Enter first number:");
    scanf("%f", &num1);
    printf("Enter second number:");
    scanf("%f", &num2);
    
    //Sum
    float sum = num1 + num2;
    printf("Sum is %0.2f\n", sum);
    
    //Product
    float prod = num1*num2;
    printf("Product is %0.2f\n", prod);

    //Difference
    float diff = num1 - num2;
    printf("Difference is %0.2f\n", diff);
    
    //Quotient 
    int q = num1/num2;
    printf("Quotient is %d\n", q);

    //Remainder
    float r = (int) num1% (int) num2;
    printf("Remainder is %0.2f\n", r);

    return 0;
}