///Create, Accept , Display all element using loop - with macro.
///Find summation of All Element in that array.

#include<stdio.h>
#include<conio.h>
#define SIZE 7

int main()
{
    int Arr[SIZE] = {0} , i = 0 , iSum = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nArray element [%d] = %d",i+1,Arr[i]);
        iSum += Arr[i];
    }

    printf("\n\nTotal Summation of All Array Element is %d.",iSum);

    getch();
    return 0;
}
