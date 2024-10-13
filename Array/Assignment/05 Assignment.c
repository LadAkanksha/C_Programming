///Create array of 7 element with Null initialization & Accept all element with loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {0} , i = 0;

    for( i = 0 ; i < 7 ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i);
        scanf("%d",&Arr[i]);
    }

    for( i = 0 ; i < 7 ; i++)
    {
        printf("\nArray element [%d] = %d",i,Arr[i]);
    }

    getch();
    return 0;
}
