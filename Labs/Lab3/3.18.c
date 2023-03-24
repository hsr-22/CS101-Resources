/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    while(1){
        float sales;
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if(sales == -1){
            return 0;
        }
        float salary = 200 + (float)9/100 * sales;
        printf("Salary is: $%0.2f\n\n", salary);
    }
    return 0;
}