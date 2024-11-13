#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5] = {10,20,30} , b[5] = {10,20,30};

    if(a == b)
    {
        printf("\nArrays are Equal.");
    }
    else
    {
        printf("\nArrays are not Equal.");
    }
    printf("\nAddress of Arrays/First Element are different.\nHence,Equality Operator Evaluates to False.");

    getch();
    return 0;
}
