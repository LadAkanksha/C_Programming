///Create, Accept , Display all element using loop - with macro.
///Search given element in array & return it's index.

#include<stdio.h>
#include<conio.h>
#define SIZE 7


int main()
{
    int Arr[SIZE] = {0} , i = 0 , srh = 0;

    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nEnter Array element for [%d] = ",i);
        scanf("%d",&Arr[i]);
    }
    for( i = 0 ; i < SIZE ; i++)
    {
        printf("\nArray element [%d] = %d",i,Arr[i]);
    }
    getch();
    system("cls");
    printf("\n-------------------------------------");
    printf("\nEnter element for search = ");
    scanf("%d",&srh);
    printf("\n-------------------------------------");

    for( i = 0 ; i < SIZE ; i++ )
    {
        if(srh == Arr[i])
        {
            break;
        }
    }

    if(i == SIZE)
    {
        printf("\nGiven element is not found in array !!!");
    }
    else
    {
        printf("\nElement is found at index [%d].",i);
    }

    getch();
    return 0;
}
