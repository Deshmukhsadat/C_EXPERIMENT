/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: FIND LENGTH OF STRING
*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}