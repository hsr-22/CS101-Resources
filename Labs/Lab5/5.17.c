/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int triplet(int s1, int s2, int s3);

int main(void){
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(triplet(n1, n2, n3)){
        printf("Yes");
    }
    else
        printf("No");
}

int triplet(int s1, int s2, int s3){
    if(s1*s1+s2*s2==s3*s3 || s2*s2+s3*s3==s1*s1 || s3*s3+s1*s1==s2*s2){
        return 1;
    }
    else{
        return 0;
    }
}
