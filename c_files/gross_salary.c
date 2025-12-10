#include<stdio.h>
int main ()
{
int basic_salary , HRA ,DA ,gross_salary ;
printf("Name :- mangesh arun mahajan \n Roll number :- FIB48 \n");
printf("Enter the basic salary :");
scanf("%d",&basic_salary);
HRA = (20/100)*basic_salary ;
DA = (150/100)*basic_salary ;
gross_salary =basic_salary +HRA +DA ;
printf("The gross salary with %d basic salary is %d",basic_salary,gross_salary);
}