#include <stdio.h>
int main(){
char a[50];
int length= 0 ;
printf("Enter your name :");
scanf("%s",&a);

for(int i=0;a[i]!='\0';i++)
{
    length ++ ;
}
printf("The length of you name is %d ",length) ;
return 0 ;
}