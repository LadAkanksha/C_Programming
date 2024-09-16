#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\nEnter Any Positive Number : ");
    scanf("%d",&Num);

    if(Num < 0)
    {
        goto DOWN;
    }
    else
    {
        printf("\nWelcome !!!");
    }
    DOWN:

    printf("\nThanks For Running Our Program");
    getch();
    return 0;
}
