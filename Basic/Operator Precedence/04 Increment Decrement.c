#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 10 , j = 11 , k=0 , l=0;

    k = i+++j;

    l= i+++ ++j;

    printf("\n %d" , k);
    printf("\n %d" , l);

    getch();
    return 0;
}
