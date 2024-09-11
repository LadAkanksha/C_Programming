///Program to print minimum digit in inputted number using function.

#include<stdio.h>
#include<conio.h>
int MinDigit(int);

int main()
{
    int No=0;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);
    printf("\nMinimum digit in %d is = %d",No,MinDigit(No));

    getch();
    return 0;
}
int MinDigit(int Num)
{
    int Dig=0, Temp=Num, Min=0;

    for(Min = Temp % 10; Temp>0 ; Temp = Temp / 10)
    {
        Dig = Temp % 10;

        if(Min>Dig)
        {
            Min=Dig;
        }
    }
    return Min;
}

