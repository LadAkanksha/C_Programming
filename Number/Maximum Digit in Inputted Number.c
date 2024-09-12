/// Program to find Maximum Digit in Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 , Dig = 0 , Max = 0;

    printf("\nEnter Number : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp > 0 )
    {
        Dig = Temp%10;
        if(Dig > Max)
        {
            Max = Dig;
        }
        Temp /= 10;
    }
    printf("\nMaximum Digit in %d is %d.",No , Max);

    getch();
    return 0;
}
