#include <stdio.h>
#include<math.h>

int main()
{
int a,b,i,count=0 ;
printf("Enter the number  :");
scanf("%d",&a);
if (a<=1){
    printf("Enter a valid number.");
    }
else{
    for (i=1;i<=a;i++){
        if (a%i==0){
          count++  ;
        }
        
                        }
    if (count == 2){
    printf("The %d is a  prime number.",a);
                }


    else{
            printf("The numbe r is not a prime number.");
        }

    }
}
