///Program to Display Arithmetic Calculator.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0 , Num2=0 , Result=0 ;

    printf("\nEnter 1st Number : ");
    scanf("%d",&Num1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&Num2);

    Result = Num1 + Num2;
    printf("\nAddition:         %d + %d = %d",Num1 , Num2 , Result);

    Result = Num1 - Num2;
    printf("\nSubstraction :    %d - %d = %d",Num1,Num2 ,Result);

    Result = Num1* Num2 ;
    printf("\nMultiplication:   %d * %d = %d",Num1 ,Num2 , Result);

    Result = Num1 /Num2;
    printf("\nDivision :        %d / %d = %d",Num1,Num2,Result);

    getch();
    return 0;
}
