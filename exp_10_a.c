/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: SUM OF TWO NUMBERS USING POINTERS  
*/
#include <stdio.h>

int main() {
    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum = %d", (*p + *q));
    return 0;
}