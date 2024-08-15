///program For Arithmetic Operator Implementation

#include<stdio.h>
#include<conio.h>

void Add(int , int);
void Sub(int , int);
void Mul(int , int);
void Div(int , int);

int main()
{
    int Num1=0 , Num2=0;

        printf("\nEnter 1st Number : ");
        scanf("%d",&Num1);
        printf("\nEnter 2nd Number : ");
        scanf("%d",&Num2);
        printf("\nArithmetic Operator =>");
        Add(Num1 , Num2);
        Sub(Num1 , Num2);
        Mul(Num1 , Num2);
        Div(Num1 , Num2);

    getch();
    return 0;
}

void Add(int n1 , int n2)
{
        printf("\nAddition : %d + %d = %d",n1,n2,n1+n2);
        return;
}
void Sub(int n1 , int n2)
{
        printf("\nAddition : %d - %d = %d",n1,n2,n1-n2);
        return;
}
void Mul(int n1 , int n2)
{
        printf("\nAddition : %d * %d = %d",n1,n2,n1*n2);
        return;
}
void Div(int n1 , int n2)
{
        printf("\nAddition : %d / %d = %d",n1,n2,n1/n2);
        return;
}
