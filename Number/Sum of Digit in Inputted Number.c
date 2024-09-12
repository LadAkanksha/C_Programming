///Program To Find Maximum Digit Among 3digit Number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Dig = 0 , Sum = 0 , Temp = 0;

    printf("\nEnter Three Digit Number : ");
    scanf("%d",&No);

    Temp = No;
    while(Temp>0)
    {
        Dig = Temp % 10;
        Sum = Sum + Dig;
        Temp = Temp/10;
    }

    printf("\nSummation of Digit in %d is %d.",No,Sum);
    getch();
    return 0;
}
