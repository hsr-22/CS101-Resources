#include <stdio.h>

int main(void){
    int time;
    printf("Please input time in seconds since your birth: ");
    scanf("%d", &time);

    int s_time = time % 60;
    int m_time = (time % 3600)/60;
    int h_time = time / 3600;
    
    printf("%d:%d:%d", h_time, m_time, s_time);
}