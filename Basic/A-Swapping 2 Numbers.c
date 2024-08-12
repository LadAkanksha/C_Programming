///Program For Swapping Two Numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0 , Num2=0 ,Temp=0;

    printf("\nEnter 2 Numbers for Swapping : ");
    scanf("%d%d",&Num1,&Num2);

    printf("\n\nValue Before Swap =>\n\nNum1  Num2\n%d\t%d",Num1,Num2);
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    printf("\n\nValue After Swap =>\n\nNum1  Num2\n%d\t%d",Num1,Num2);

    getch();
    return 0;
}
