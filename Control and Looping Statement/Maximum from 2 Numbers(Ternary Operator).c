///Program to Find Maximum From 2 Numbers using Ternary Operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=6, No2=8 ;


    printf("\nEnter 1st Number : ");
    scanf("%d",&No1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&No2);

    (No1>No2)?printf("%d is Greater",No1):printf("%d is Greater",No2);

    getch();
    return;
}

