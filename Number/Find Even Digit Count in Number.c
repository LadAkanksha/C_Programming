///Program to find Even Digit count in Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Dig = 0 , Temp = 0 , Ecnt = 0;

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

        if(Dig % 2 == 0)
        {
            Ecnt++;
        }
        Temp /= 10;
    }
    printf("\nEven Digit Count in Number is %d." ,Ecnt);
    getch();
    return 0;
}
