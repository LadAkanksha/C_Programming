///Create array of 7 element with Null initialization & Accept all element without loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {0};

    printf("\nEnter Array element for [0] = ");
    scanf("%d",&Arr[0]);
    printf("\nEnter Array element for [1] = ");
    scanf("%d",&Arr[1]);
    printf("\nEnter Array element for [2] = ");
    scanf("%d",&Arr[2]);
    printf("\nEnter Array element for [3] = ");
    scanf("%d",&Arr[3]);
    printf("\nEnter Array element for [4] = ");
    scanf("%d",&Arr[4]);
    printf("\nEnter Array element for [5] = ");
    scanf("%d",&Arr[5]);
    printf("\nEnter Array element for [6] = ");
    scanf("%d",&Arr[6]);

    printf("\n\nArray element [0] = %d",Arr[0]);
    printf("\nArray element [1] = %d",Arr[1]);
    printf("\nArray element [2] = %d",Arr[2]);
    printf("\nArray element [3] = %d",Arr[3]);
    printf("\nArray element [4] = %d",Arr[4]);
    printf("\nArray element [5] = %d",Arr[5]);
    printf("\nArray element [6] = %d",Arr[6]);

    getch();
    return 0;
}
