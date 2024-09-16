#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    UP:
    printf("\nEnter Any Positive Number : ");
    scanf("%d",&Num);

    if(Num < 0)
    {
        goto UP;
    }
    else
    {
        printf("\nWelcome !!!");
    }
    getch();
    return 0;
}
