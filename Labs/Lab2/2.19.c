#include <stdio.h>

int main(void){
    int n1;
    int n2;
    int n3;

    printf("Enter three different integers: ");
    scanf(" %d %d %d", &n1, &n2, &n3);

    //Sum
    int sum = n1 + n2 + n3;
    printf("Sum is %d\n", sum);

    //Average
    float avg = (n1 + n2 +n3)/3;
    printf("Average is %0.0f\n", avg);

    //Product
    int prod = n1*n2*n3;
    printf("Product is %d\n", prod);

    //Smallest and Largest
    int s;
    int l;
    if (n1 < n2 && n1 < n3){
        s = n1;
    }
    if (n2 < n3 && n2 < n1){
        s = n2;
    }
    if (n3 < n1 && n3 < n2){
        s = n3;
    }
    if (n1 > n2 && n1 > n3){
        l = n1;
    }
    if (n2 > n3 && n2 > n1){
        l = n2;
    }
    if (n3 > n1 && n3 > n2){
        l = n3;
    }
    printf("Smallest is %d\n", s);
    printf("Largest is %d\n", l);

    return 0;
}