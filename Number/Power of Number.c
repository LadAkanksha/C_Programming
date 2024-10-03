///Program to accept numbers from user as x and y and print xy

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Pow = 1 , Temp = 0 , Expo = 0;

    printf("\nEnter number to get its power : ");
    scanf("%d",&No);

    printf("\nEnter Exponent : ");
    scanf("%d",&Expo);

    Temp = No;
    if(No < 0)
    {
        No = -No;
    }
    while(Expo > 0)
    {
        Pow = Pow*No;
        Expo--;
    }

    printf("\nPower of %d is %d.",No, Pow);
    getch();
    return 0;
}
