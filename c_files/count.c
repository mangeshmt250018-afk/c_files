#include <stdio.h>
int main()
{
    int arr[50],i,n,count=0,num;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    printf("Enter the number in array:");
    for (i=0 ;i<n;i++)  
        scanf("%d",&arr[i]);
       
    printf("Enter the number :");
    scanf("%d",&num);
    for (i=0 ;i<n;i++) 
    {
        if (arr[i]==num)
           { count++;}

    }
    printf("The number %d have frequency of %d",num,count);
}


 