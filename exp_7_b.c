/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: ADDITION OF TWO MATRICES
*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & cols: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], S[r][c];

    printf("Enter matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &B[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            S[i][j] = A[i][j] + B[i][j];

    printf("Sum Matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)
            printf("%d ", S[i][j]);
        printf("\n");
    }

    return 0;
}