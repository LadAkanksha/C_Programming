#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 1;

    switch(a)
    {
        case 1 :
                printf("\nThis is case option 1");
                printf("\nValue of a is %d.",a);
        case 2:
                printf("\nThis is case option 2");
        default:
                printf("\nThis is default option");
    }
    getch();
    return 0;
}
