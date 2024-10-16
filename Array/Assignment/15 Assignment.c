///Create, Accept , Display all element using loop - with macro.
///Find count of Even , Odd and Null(Zero) Element in that array.

#include<stdio.h>
#include<conio.h>
#define SIZE 7

int main()
{
    int Arr[SIZE] = {0} , i = 0 , iNull = 0 , iEven = 0 , iOdd = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nArray element [%d] = %d",i+1,Arr[i]);
        if(Arr[i] == 0)
        {
            iNull++;
        }
        else if(Arr[i] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    printf("\n\nCount of Null element in given array is %d.",iNull);
    printf("\n\nCount of Even element in given array is %d.",iEven);
    printf("\n\nCount of Odd element in given array is %d.",iOdd);

    getch();
    return 0;
}
