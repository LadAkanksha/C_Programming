///Program to Find Maximum From 2 Numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 ;

    printf("\nEnter 1st Number : ");
    scanf("%d",&No1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&No2);

    if(No1 > No2)
    {
        printf("%d is Greater Than %d",No1,No2);
    }
    else
    {
         printf("%d is Greater Than %d",No2,No1);
    }
    getch();
    return;
}
