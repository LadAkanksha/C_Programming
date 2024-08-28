#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 1 , k = 2 , l = 0;

    l = ++i && j-- || ++k;

        printf("%d  %d  %d  %d" , i , j , k , l);

    getch();
    return 0;
}
