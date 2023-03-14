#include <stdio.h>

int main(void){
    float high_rain;
    float curr_rain;

    printf("Enter highest rainfall ever:");
    scanf("%f", &high_rain);

    printf("Enter current rainfall:");
    scanf("%f", &curr_rain);

    if(curr_rain > high_rain){
        printf("New high milestone achieved. Life sustains with %0.2f rainfall\n", curr_rain);
        high_rain = curr_rain;
    }
}