/// Program to find Minimum Digit in Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 , Dig = 0 , Min = 0;

    printf("\nEnter Number : ");
    scanf("%d",&No);

    Temp = No;
    Min = No;

    while( Temp > 0 )
    {
        Dig = Temp%10;
        if(Dig < Min)
        {
            Min = Dig;
        }
        Temp /= 10;
    }
    printf("\nMinimum Digit in %d is %d.",No , Min);

    getch();
    return 0;
}
