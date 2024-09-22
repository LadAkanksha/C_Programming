#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10 , b = 20;

    if( a == 10)
        if(b == 10)
        printf("\na and b are equal.");
    else
        printf("\na and b are not equal");

    printf("\n----------------------------------------\n");

    if( a == 10)
    {
        if(b == 10)
        printf("\na and b are equal.");
    }
    else
        printf("\nValue of a is 10 and b is something else.");


    getch();
    return 0;
}
