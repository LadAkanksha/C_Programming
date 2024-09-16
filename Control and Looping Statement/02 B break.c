#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1;

    switch(i)
    {
        case 1:
                printf("One");
                break;
        case 2:
                printf("Two");
                break;
        default:
                printf("Default");
    }
    printf("\nThis statement is next to switch");
    getch();
    return 0;
}
