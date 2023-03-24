/*
Author : Harsh Sanjay Roniyar
*/

#include <stdio.h>
int main(void){
    int n;
    int num;
    int counter = 0;
    float sum = 0;

    printf("Input: ");
    scanf("%d", &n);
    
    while(counter < n){
        scanf("%d", &num);
        sum += num;
        ++counter;
    }

    float average = sum / n;
    printf("Sum is: %0.2f\n", sum);
    printf("Average is: %0.2f\n", average);
}