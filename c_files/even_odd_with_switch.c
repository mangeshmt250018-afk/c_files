#include <stdio.h>
int main()
{
int a ;
printf("Enter the number :");
scanf("%d",a);
switch (a%2) 
    {
    case 0:
        {printf("The number is an even number.") ;
        break;}
    case 1 :
        {printf("The number is an odd number.");
        break;}
    default:
        {printf("Enter a valid number .");
        break;}
    }
}