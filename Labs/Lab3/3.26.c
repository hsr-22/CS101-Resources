/*
Author : Harsh Sanjay Roniyar
*/

#include <stdio.h>

int main(void){
    unsigned int counter = 0;
    int number;
    int largest1 = 0;
    int largest2 = -2;

    printf("Enter number: ");
    scanf("%d", &number);
    
    while(counter >= 0 && counter < 9){
        printf("Enter number: ");
        scanf("%d", &number);
    
        if(number > largest2){
            largest2 = number;
            if(number > largest1){
                largest2 = largest1;
                largest1 = number;
            }
        }
        counter++;
    }

    printf("%d %d\n", largest1, largest2);
    return 0;
}