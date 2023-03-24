/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void){
    int i = 1;
    int j = 1;
    while(i <= 8){
        while(j <= 8){
            if(i % 2 != 0){
                printf("%s", "* ");
            }
            else{
                printf("%s", " ");
                printf("%s", "*");
            }
            ++j;
        }
        j = 1;
        puts("");
        ++i;
    }
    return 0;
}
/*int main(void){
    int row = 1;
    while(row <=8){
        if(row % 2 == 0){

        }
    }
}*/
/*int main(void){
    int row = 1;
    int column = 1;
    while(row <= 8){
        while(column <= 8){
            printf("%s", "* ");
            ++column;
        }
        puts("");
        printf("%s", " ");
        while(column <= 8){
            printf("%s", "* ");
            ++column;
        }
        ++row;
    }
}*/
