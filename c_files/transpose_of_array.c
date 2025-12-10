#include<stdio.h>
int main(){

int arr1[3][3],transpose_matrix[3][3];
printf("Enter the number in the matrix  :\n");
for(int i = 0 ; i < 3 ; i++)
{
    for(int j = 0 ; j < 3 ; j++)
    {
        scanf("%d ",&arr1[i][j]);
    }
printf("\n");
}

for(int i = 0 ; i < 3 ; i++)
{
    for(int j = 0 ; j < 3 ; j++)
    {
      transpose_matrix[i][j]=arr1[j][i];

    }
}

for(int i = 0 ; i < 3 ; i++)
{
    for(int j = 0 ; j < 3 ; j++)
    {
        printf("%d\t",transpose_matrix[i][j]);
    }
printf("\n");
}
}