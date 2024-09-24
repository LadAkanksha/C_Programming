///Program to find given number is perfect or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , Sum = 0 , i = 0;

    printf("\nEnter Number : ");
    scanf("%d",&Num);

    for(i = 1 ; i < Num ; i++)
    {
        if( Num%i == 0 )
        {
            Sum += i;
        }
    }

    if(Sum == Num)
    {
        printf("\n%d is Perfect Number" , Sum);
    }
    else
    {
        printf("\n%d is not Perfect Number",Num);
    }
    getch();
    return 0;
}
