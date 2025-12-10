#include<stdio.h>
struct STORE
{
int code ;
char name[20];
float price ;
};
int main()
{


struct STORE p[3]=
{

    {101,"pen",10},
    {102,"notebook",50},
    {103,"pencile",5},

};


int choice , qty ;
float total=0 ;

printf("#---------PRODUCT LIST-----------#");
printf("Code    Name    price \n ");
printf("101 pen 10\n");
printf("102 Notebook 50\n");
printf("103 pencile 5\n");

printf("\n Enter product code :");

while (scanf("%d",&choice)&&choice!=0)
{
    printf("\n Enter quantity:");
    scanf("%d",&qty);

    if (choice == p[0].code)
    total += p[0].price*qty;
    else if (choice == p[1].code)
    total += p[1].price*qty;
    else if (choice == p[2].code)
    total += p[2].price*qty;
    else
    printf("Invalid code!\n");

    printf("Enter another product code (Enter 0 to finish):");

}
printf("Total Bill = %.2f\n",total);




}