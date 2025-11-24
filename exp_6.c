
/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: FUNCTION CALL COUNTER USING STATIC VARIABLE
*/
#include <stdio.h>

void counter() {
    static int c = 0;   // static retains value
    c++;
    printf("Function called %d times\n", c);
}

int main() {
    for(int i=0; i<5; i++)
        counter();
    return 0;
}
