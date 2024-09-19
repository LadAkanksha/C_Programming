
///Program to Find Maximum From 3 Numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0 , No2=0 , No3=0 ;

    printf("\nEnter 1st Number : ");
    scanf("%d",&No1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&No2);
    printf("\nEnter 3rd Number : ");
    scanf("%d",&No3);

    if(No1 > No2 && No1 > No3)
    {
        printf("\n\n%d is Greater Number.",No1);
    }
    else if(No2 > No3)
    {
         printf("\n\n%d is Greater Number",No2);
    }
    else
    {
         printf("\n\n%d is Greater Number",No3);
    }
    getch();
    return;
}
