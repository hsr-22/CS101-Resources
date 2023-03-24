/*
Author : Harsh Sanjay Roniyar
*/

#include <stdio.h>

int main(void){
    unsigned int counter = 0;
    int number;
    int largest;

    largest = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    while(counter >= 0 && counter < 9){
        if(number > largest){
            largest = number;
        }
        printf("Enter number: ");
        scanf("%d", &number);
        ++counter;
    }

    printf("%d\n", largest);
    return 0;
}