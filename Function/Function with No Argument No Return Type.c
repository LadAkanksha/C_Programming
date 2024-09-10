#include<stdio.h>
#include<conio.h>

void GreatNum();
int main()
{
    GreatNum();
    getch();
    return 0;
}
void GreatNum()
{
    int i =0 , j= 0;

    printf("\nEnter 2 Numbers That You Want To Compare : ");
    scanf("%d%d", &i,&j);

    if(i > j)
    {
        printf("\nGreater Number is %d.",i);
    }
    else
    {
        printf("\nGreater Number is %d.",j);
    }
    return 0;
}
