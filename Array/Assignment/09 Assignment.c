///Create, Accept , Display all element using loop - with macro.
///Find maximum element in that array.

#include<stdio.h>
#include<conio.h>
#define SIZE 7

int main()
{
    int Arr[SIZE] = {0} , i = 0 , iMax = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }
    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nArray element [%d] = %d",i+1,Arr[i]);
    }
    for( i = 0 ; i < SIZE ; i++ )
    {
        if(iMax < Arr[i] || i == 0)
        {
            iMax = Arr[i];
        }
    }
    printf("\n\nMaximum element in given array is %d.",iMax);

    getch();
    return 0;
}
