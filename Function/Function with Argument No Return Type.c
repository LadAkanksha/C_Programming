#include<stdio.h>
#include<conio.h>

void GreatNum(int ,int);

int main()
{
    int Num1 = 0 , Num2 = 0;

    printf("\nEnter 2 Numbers That You Want To Compare : ");
    scanf("%d%d", &Num1,&Num2);

    GreatNum(Num1 , Num2);

    getch();
    return 0;
}

void GreatNum(int i , int j)
{
    if(i > j)
    {
        printf("\nGreater Number is %d .",i);
    }
    else
    {
        printf("\nGreater Number is %d .",j);
    }
    return 0;
}
