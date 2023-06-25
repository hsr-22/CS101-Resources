#include <stdio.h>
#include <string.h>
#include <ctype.h>

int testPalindrome(char s[], int l, int r);
int main(void) {
    char string[100];
    printf("Enter a string: ");
    scanf("%99s", string);

    //char *s = "race car";

    if(testPalindrome(string, 0, strlen(string)-1)) {
        printf("Success\n");
    }
}

int testPalindrome(char s[], int l, int r) {
    if(l>=r) {
        return 1;
    }
    if(!isalpha(s[l])) {
        return testPalindrome(s, l+1, r);
    }
    if(!isalpha(s[r])) {
        return testPalindrome(s, l, r-1);
    }
    if(s[l] == s[r]) {
        return testPalindrome(s, l+1, r-1);
    }
    else {
        return 0;
    }
}