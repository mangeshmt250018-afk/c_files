#include<stdio.h>
int main()
{
 int first_number=0,secound_number=1,next_number,i ,n;
 printf("Enter the term n :");
 scanf("%d",&n);
for (i=0;i<n;i++)
    {
    if (i<=1)
        {
        next_number = i ;
        }
    else
        {
        next_number = first_number + secound_number;
        first_number=secound_number ;
        secound_number=next_number;
        }
        printf("%d\t",next_number);
    }

return 0;
}

