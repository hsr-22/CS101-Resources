#include <stdio.h>

int main(void){
    float u;
    float a;
    float t;

    printf("Enter initial velocity(m/s): ");
    scanf("%f", &u);
    printf("Enter acceleration(m/s^2): ");
    scanf("%f", &a);
    printf("Enter time elapsed(s): ");
    scanf("%f", &t);

    float v = u + a*t;
    printf("Final velocity is %0.2f m/s\n", v);

    float s = u*t + ((float)1/2)*a*t*t ;
    printf("Distance traversed is %0.2f m\n", s);
}