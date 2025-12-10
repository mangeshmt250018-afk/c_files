#include <stdio.h>
#include <string.h>
int main() 
{
char a[10],b[10];
printf("Enter the string :\n");
gets(a);
strcpy(b, a);
strrev(a);
if (strcmp(a,b)==0)
printf("the string are palinmidrome");
else
printf("The string is not palinmdrome");
}


