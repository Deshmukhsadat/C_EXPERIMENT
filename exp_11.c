/*
NAME: DESHMUKH SADAT ANWAR AHMAD
UIN: 251P056
BRANCH: COMPUTER SCIENCE
DIC:C
DATE: 12/09/2023
PROGRAM NAME: STORE EMPLOYEE DETAILS IN FILE
*/
#include <stdio.h>

struct emp {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct emp e;
    FILE *f;
    int n;

    f = fopen("emp.txt", "w");

    printf("How many employees? ");
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        printf("\nEnter ID: ");
        scanf("%d", &e.id);
        printf("Enter Name: ");
        scanf("%s", e.name);
        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fprintf(f, "%d %s %.2f\n", e.id, e.name, e.salary);
    }

    fclose(f);

    printf("\nData Saved in emp.txt");
    return 0;
}