#include <stdio.h>

int main(void){
    int n;
    
    printf("Enter a noobmer: ");
    scanf("%d", &n);

    int d5 = n%10;
    int d4 = (n%100)/10;
    int d3 = (n%1000)/100;
    int d2 = (n%10000)/1000;
    int d1 = n/10000;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
}