#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10 , b = 20 , c = 30 ;

    int *arr[3] = {&a, &b , &c};

    printf("\nValues of Variable :- \n");
    printf("%d  %d  %d",a,b,c);
    printf("\n%d  %d  %d",*arr[0],*arr[1],*arr[2]);

    printf("\n %p   %p   %p",arr[0],arr[1],arr[2]);

    getch();
    return 0;
}

