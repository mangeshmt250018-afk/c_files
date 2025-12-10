#include <stdio.h>
int main(){
char a[50];
int i = 0 ;
printf("Enter your name :");
scanf("%s",&a);

while (a[i]!='\0')
{
i++ ;
}
printf("The length of you name is %d ",i) ;
return 0 ;
}