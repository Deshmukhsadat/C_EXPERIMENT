/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: CALCULATOR USING GOTO AND SWITCH
*/

#include <stdio.h>

int main()
{
    float a, b;
    int c, d, e;
    repeat:
    printf("ENETR FIRST NUMBER:\n");
    scanf("%f", &a);
    printf("ENETR SECOND NUMBER:\n");
    scanf("%f", &b);

    printf("PRESS 1 FOR SUMMATION.\n");
    printf("PRESS 2 FOR SUBTRACTION.\n");
    printf("PRESS 3 FOR MULTIPLICATION.\n");
    printf("PRESS 4 FOR DIVISION.\n");
    printf("PRESS 5 FOR MODULUS.\n");
    printf("PRESS 6 FOR EXIT.\n");

    printf("ENTER THE NUMBER WHICH ARITHMATIC OPERATION WOULD YOU LIKE TO PERFORM? \n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("SUMMATION OF %f AND %f IS:%f \n", a, b, a + b);
        goto repeat;

    case 2:
        printf("SUBTRACTION OF %f AND %f IS:%f \n", a, b, a - b);
        goto repeat;
    case 3:
        printf("MULTIPLICATION OF %f AND %f IS:%f \n", a, b, a * b);
        goto repeat;
    case 4:
        printf("DIVISION OF %f AND %f IS:%f \n", a, b, a / b);
        goto repeat;
    case 5:
        d = a;
        e = b;
        printf("MODULUS OF %d AND %d IS:%d \n", d, e, d % e);
        goto repeat;
    case 6:
        printf("YOU ARE EXIT!!!!");
        break;

    default:
        printf("ENTER VALID INPUT");
    }

    return 0;
}