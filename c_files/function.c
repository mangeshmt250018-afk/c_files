#include<stdio.h>
void grade (float per)
{
    if (per > 75)
        printf("Grade : Distinction \n");
    else if (per>= 60)
        printf("Grade :First class \n ");
    else if (per>=50)
        printf("Grade :Secound class \n ");
    else if (per>=40)
        printf("Grade :Third class \n ");
    else
        printf("Grade : Fail\n");

}

float percentage(int total)
{
    return (total/500.0)*100;
}

int pass (int sub1,int sub2,int sub3,int sub4,int sub5)
{
if (sub1<40 ||sub2<40 ||sub3<40 ||sub4<40 ||sub5<40)
    return 0;
else
    return 1;
}

int main()
{int sub1,sub2,sub3,sub4,sub5,total;
float per;

printf("Enter the marks of your 5 subject (sub1,sub2,sub3,sub4,sub5):");
scanf("%d,%d,%d,%d,%d",&sub1,&sub2,&sub3,&sub4,&sub5);
if (pass(sub1,sub2,sub3,sub4,sub5)==1)
   {printf("You are pass with, \n") ;
    total =sub1+sub2+sub3+sub4+sub5 ;
    per = percentage(total);
    printf( "percentage = %.2f \n",per);
    grade(per);}
else
    printf("you are fail");

}