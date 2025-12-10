#include <stdio.h>
#include <string.h>
int main() 
{
    char S[50];
    printf("Enter the string:\n");
    gets(S);
    printf("The reverse of the string is: %s",strrev(S));
    return 0;
}
