#include<stdio.h>
int main()
{
int i = 0 ;
char a[50],b[50];
printf("Enter the text :");
scanf("%s",&a);
while (a[i]!= '\0')
{
b[i]=a[i];
i++;
}
b[i]='\0';
printf("The copied text is= %s",b);
return 0;
}