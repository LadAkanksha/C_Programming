///Program to print factorial of given number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0 , Temp=0 , i=0 , Fact=1 ;

    printf("\nEnter Number : ");
    scanf("%d",&No);

    for( i=1 ; i<= No ; i++ )
    {
        Fact = Fact*i;
    }

    printf("\nFactorial of %d is => %d.",No,Fact);
    getch();
    return;
}
