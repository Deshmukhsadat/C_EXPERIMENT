#include<stdio.h>
int main()
{

    /*
    NAME:  DESHMUKH SADAT ANWAR AHMAD
     UIN:  251P056
   CLASS:  COMPUTER ENGNEERING
DIVISION:  C
   BATCH:  C-3
    */
int num1,num2,num3;

printf("\t ENTER PHYSICS MARKS: \n");
scanf(" %d",&num1);

printf("\t ENTER CHEMISTRY MARKS: \n");
scanf(" %d",&num2);

printf("\t ENTER MATHS MARKS: \n");
scanf(" %d", &num3);


printf("\t PHYSICS MARKS: %d\n",num1);
printf("\t CHEMISTRY MARKS: %d\n",num2);
printf("\t MATHS MARKS: %d \n",num3);

float avg= (num1+num2+num3)/3.0;

printf("\t PERCENTAGE IS: %f \n",avg);

printf(avg>=50?"YOU ARE ELIGIBLE FOR ADMISSION!!!":"YOU ARE NOT ELIGIBLE FOR ADMISSION!");
return 0;






}
