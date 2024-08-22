///Write Program to print  table of inputted number in reverse order.


#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0 , i = 0;
    printf("\nEnter Number for Table : ");
    scanf("%d" , &Num);

    for(i = 10 ; i > 0 ; i--)
    {
        printf("\n%d" , Num*i);
    }

    getch();
    return 0;
}

