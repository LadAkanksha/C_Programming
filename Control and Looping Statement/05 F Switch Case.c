#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5;

    switch(a)
    {
        case 1 :
                printf("\nThis is case option 1");
                printf("\nValue of a is %d.",a);
        default:
                printf("\nThis is default option");
        case 2:
                printf("\nThis is case option 2");
    }
    getch();
    return 0;
}
