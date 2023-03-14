#include <stdio.h>

int main(void){
    int n1;
    int n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if(n1 % n2 == 0){
        printf("You just multipled! Congrats\n");
    }
}