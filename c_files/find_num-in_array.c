#include <stdio.h>
int main()
{
    int arr[50],i,n,find_num,repeted=0,position;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    for (i=0 ;i<n;i++)  
        {
            printf("enter the %d number :",i+1);
           scanf("%d",&arr[i]);
       }

    printf("Enter the num to be find in the arrya :");
    scanf("%d",&find_num);
    for (i=0 ;i<n;i++)
    {
        if (arr[i]==find_num)   
       {
           printf("The number %d is present in the position of %d",find_num,i+1);
           break;
       }
       else
       {
           printf("The number %d is not present in the arry",find_num);
           break;
       }
    }

}