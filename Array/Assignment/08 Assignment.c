///Create, Accept , Display all element using loop - with macro.
///Find count of given element in that array.

#include<stdio.h>
#include<conio.h>
#define SIZE 7

int main()
{
    int Arr[SIZE] = {0} , i = 0 , iCnt = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }
    for( i = 0 ; i < SIZE ; i++)
    {
        ++iCnt;
        printf("\nArray element [%d] = %d",i+1,Arr[i]);
    }

    printf("\n\nCount of element in array is %d.",iCnt);

    getch();
    return 0;
}
