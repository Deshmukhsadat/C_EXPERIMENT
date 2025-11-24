/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: FIND LARGEST ELEMENT IN AN ARRAY
*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}