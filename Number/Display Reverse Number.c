///Program To Display Digit in Inputted Number from Right - Left.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0 , Dig = 0 , Rev = 0 , Temp = 0;

    printf("\nEnter Number : ");
    scanf("%d",&No);

    Temp = No;
    while(Temp>0)
    {
        Dig = Temp % 10;
        Rev = (Rev*10) +Dig;
        Temp = Temp/10;
    }

    printf("\n%d in Right To Left Manner is %d.",No,Rev);
    getch();
    return 0;
}
