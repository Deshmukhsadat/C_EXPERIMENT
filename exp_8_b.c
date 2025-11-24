/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: CHECKING PALINDROME STRING
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++);
    i--;

    j = 0;
    while(j < i) {
        if(str[j] != str[i]) {
            printf("Not Palindrome");
            return 0;
        }
        j++;
        i--;
    }

    printf("Palindrome");
    return 0;
}