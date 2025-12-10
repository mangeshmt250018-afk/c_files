#include<stdio.h>
int smallestdivison(int num)
{
for (int i = 2;i<=num;i++)
{
    if (num%i==0)
        return i;
    }
return num;
}

int gcd(int a,int b)
{
int i,g=1;
for (i=1;i<=a &&i<=b;i++)
{
    if (a%i==0&&b%b==0)
    g=i;
}

return g;
}

int main()
{
int num1,num2;
printf("Enter two number:");
scanf("%d,%d",&num1,&num2);

printf("Smallest divisor of %d is %d\n",num1,smallestdivison(num1));
printf("Smallest divisor of %d is %d\n",num2,smallestdivison(num2));
printf("GDC of %d and %d is %d\n",num1,num2,gcd(num1,num2));
}