#include <stdio.h>
#include <string.h>
int main() 
{
    char S[50];
    printf("Enter the string:\n");
    gets(S);
    printf("The length of the string is: %d",strlen(S));
    return 0;
}
