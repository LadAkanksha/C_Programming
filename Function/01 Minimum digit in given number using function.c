///Program to print minimum digit in inputted number using function.

#include<stdio.h>
#include<conio.h>
int MinDigit(int);

int main()
{
    int No=0,Result=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    printf("\nMinimum digit in %d is = %d",No,MinDigit(No));

    getch();
    return 0;
}
int MinDigit(int Num)
{
    int Dig=0, Temp=0, Min=0;
    Temp = Num;
    Min = Temp % 10;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Min>Dig)
        {
            Min=Dig;
        }
        Temp = Temp / 10;
    }
    return Min;
}

