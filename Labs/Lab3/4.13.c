/*
Author : Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int n;
    int i = 1;
    int s1 = 0; //sum
    int s2 = 0; //square sum
    int s3 = 0; //cubed sum
    printf("n: ");
    scanf("%d", &n);

    while(i <= n){
        s1 += i;
        s2 += i*i;
        s3 += i*i*i;
        i++;
    }
    printf("Sum: %d\nSquared Sum: %d\nCubed Sum: %d\n", s1, s2, s3);

    return 0;
}