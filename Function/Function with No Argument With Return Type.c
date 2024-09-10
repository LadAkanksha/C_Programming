#include<stdio.h>
#include<conio.h>

int GreatNum();

int main()
{
    int Res = 0;

    Res = GreatNum();
    printf("\nGreater Number is %d.",Res);
    getch();
    return 0;
}

int GreatNum()
{
    int i = 0 , j = 0;

    printf("\nEnter 2 Numbers That You Want To Compare : ");
    scanf("%d%d", &i,&j);

    if(i > j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
