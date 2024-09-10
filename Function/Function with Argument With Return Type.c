#include<stdio.h>
#include<conio.h>

int GreatNum(int ,int);

int main()
{
    int Num1 = 0 , Num2 = 0 ;

    printf("\nEnter 2 Numbers That You Want To Compare : ");
    scanf("%d%d", &Num1,&Num2);

    printf("\nGreater Number is %d .",GreatNum(Num1 , Num2));

    getch();
    return 0;
}

int GreatNum(int i , int j)
{
    if(i > j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
