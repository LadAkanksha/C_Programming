///Program to find given number is perfect or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , i = 0 ,Sum=0 , j = 0;
    printf("\nEnter Upper Limit : ");
    scanf("%d",&Num);

    for( i=1 ; i<=Num ;i++)
    {
        for(j=1 ; j<i ; j++)
        {
            if( i%j == 0 )
            {
                Sum += j;
            }
        }

        if(Sum == i)
        {
            printf("\t%d " , Sum);
        }
        Sum = 0;
    }
    getch();
    return 0;
}
