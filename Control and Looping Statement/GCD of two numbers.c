///Program to find GCD of Two Numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num1 = 0 , Num2 = 0 , GCD = 0;

    printf("\nEnter Two Positive Numbers : \n");
    scanf("%d %d",&Num1 , &Num2);

    for( i = 1 ; i <= Num1 &&i <= Num2 ; i++)
    {
            if(Num1 % i == 0 && Num2 % i == 0)
            {
                GCD = i;
            }
    }
    printf("\nG.C.D of %d and %d is %d." ,Num1 , Num2 , GCD );

    getch();
    return 0;
}
