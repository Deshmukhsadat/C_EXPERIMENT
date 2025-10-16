/*
NAME:DESHMUKH SADAT ANWARA AHMAD
UIN: 251P056
BRANCH: COMPUTER ENGNEERING
DIVISION: C
BATCH:C-3
*/

// EXP-2 -- TASK-2

#include <stdio.h>
int main()
{   int a, b, c, i;
    int sum = 0;
    printf("ENTER A NUMBETR: \n");
    scanf("%d", &a);

    printf("ENTER GREATER NUMBER FROM PREVIUOS: \n");
    scanf("%d", &b);
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }
      
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            i++;
            printf("%3d ",i);
            sum = i + sum;
        }
        else
        {
            printf("%3d ",i);
            sum = sum + i;
        }
      
    }

    printf("\nTHE SUM OF ODD NUMBER BTW %d AND %d IS %d \n", a, b, sum);

    return 0;
}