///Program to accept number from user check whether palindrome or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No =0, Temp =0, Dig =01, Res=0;

    printf("\nEnter Number : ");
    scanf("%d",&No);

    Temp = No;
    while(Temp >0)
    {
        Dig=Temp%10;
        Res = (Res*10) + Dig;
        Temp = Temp/10;
    }

    if(No == Res)
    {
        printf("\n%d is Palindrome Number.",Res);
    }
    else{
        printf("\n%d is Not Palindrome Number.",Res);
    }
    getch();
    return;
}
