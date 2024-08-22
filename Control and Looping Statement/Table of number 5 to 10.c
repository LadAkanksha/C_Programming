///Write Program to display table of number 5 to 10.
#include<stdio.h>
#include<conio.h>

int main()
{
    int S = 5 , E = 10 ,i = 0 , j=0;

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
