///Program to Find Maximum From 3 Numbers using Ternary Operator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 , No3 = 0 ;

    printf("\nEnter 1st Number : ");
    scanf("%d",&No1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&No2);
    printf("\nEnter 3rd Number : ");
    scanf("%d",&No3);

    (No1 > No2 && No1 > No3)?printf("\n%d is maximum number.",No1):((No2 > No3)?printf("\n%d is maximum number.",No2):printf("\n%d is maximum number",No3));

    getch();
    return;
}

