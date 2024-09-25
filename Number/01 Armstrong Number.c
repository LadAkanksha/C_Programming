#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , i = 0 , Temp = 0 , Dig = 0 , Sum = 0;

    printf("\nEnter Number : ");
    scanf("%d",&Num);

    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp%10;
        Sum += Dig*Dig*Dig;
        Temp/=10;
    }
    if(Num == Sum)
    {
        printf("\nNumber is Armstrong Number");
    }
    else
    {
        printf("\nNumber is Not Armstrong Number");
    }
    getch();
    return 0;
}
