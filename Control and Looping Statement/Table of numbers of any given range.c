/// Write Program to display table of numbers of any given range
#include<stdio.h>
#include<conio.h>

int main()
{
    int S = 0 , E = 0 ,i = 0 , j=0;

    printf("\nEnter Starting Point For Table : ");
    scanf("%d",&S);
    printf("\nEnter Ending Point For Table : ");
    scanf("%d",&E);

    for(i = 1 ; i <=10 ; i++)
    {
       for(j = S ; j<= E ; j++)
       {
           printf("%5d " , i*j);
       }
       printf("\n");
    }

    getch();
    return 0;
}
