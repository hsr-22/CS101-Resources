#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char s[100];

    printf("Input text: ");
    scanf("%99s", s);

    for (int i = 0; s[i]!='\0'; i++){
        if(i%2 == 0) {
            printf("%c", toupper(s[i]));
        }
        else{
            printf("%c", tolower(s[i]));
        }
        
    }
    puts("");
}