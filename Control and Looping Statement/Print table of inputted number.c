///Write Program to print table of inputted number


#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0 , i = 0;
    printf("\nEnter Number for Table : ");
    scanf("%d" , &Num);

    for(i = 1 ; i<= 10 ; i++)
    {
        printf("\n%d" , Num*i);
    }

    getch();
    return 0;
}

