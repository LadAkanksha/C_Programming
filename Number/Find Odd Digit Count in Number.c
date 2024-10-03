///Program to find Odd Digit count in Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Dig = 0 , Temp = 0 , Ocnt = 0;

    printf("\nEnter number : ");
    scanf("%d",&No);

    Temp = No;

    if(No < 0)
    {
        No = -No;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig % 2 != 0)
        {
            Ocnt++;
        }
        Temp /= 10;
    }
    printf("\nOdd Digit Count in Number is %d." ,Ocnt);
    getch();
    return 0;
}
