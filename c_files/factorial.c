#include<stdio.h> 

int main()
{
int n,i,fact = 1 ;
printf("Enter the number :");
scanf("%d",&n);

if (n < 0) {
printf("Negative number is not allowed,please enter valid number.");}
else{
for (i = 1 ; i<=n;i++){

        fact *= i ;
        }
    printf("The factorial of the %d is %d",n,fact);

    }

}