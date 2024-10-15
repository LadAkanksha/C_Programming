///Create, Accept , Display all element using loop - with macro.
///Find count of Even Element in that array.

#include<stdio.h>
#include<conio.h>
#define SIZE 7

int main()
{
    int Arr[SIZE] = {0} , i = 0 , iEven = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nArray element [%d] = %d",i+1,Arr[i]);
        if(Arr[i] % 2 == 0)
        {
            iEven++;
        }
    }

    printf("\nCount of Even element in given array is %d.",iEven);

    getch();
    return 0;
}
