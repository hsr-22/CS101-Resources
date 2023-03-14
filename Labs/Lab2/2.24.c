#include <stdio.h>

int main(void){
    int n;
    printf("Please enter your fear (needs to be an int): ");
    scanf("%d", &n);

    if(n % 2 != 0){
        printf("You are so oddly determined");
    }
    if(n % 2 == 0){
        printf("You are evenly distributed");
    }

    return 0;
}