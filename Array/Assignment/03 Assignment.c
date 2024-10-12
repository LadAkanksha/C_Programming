///Create array of 7 element with Null initialization & display element.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {0};

    printf("\nArray element [0] = %d",Arr[0]);
    printf("\nArray element [1] = %d",Arr[1]);
    printf("\nArray element [2] = %d",Arr[2]);
    printf("\nArray element [3] = %d",Arr[3]);
    printf("\nArray element [4] = %d",Arr[4]);
    printf("\nArray element [5] = %d",Arr[5]);
    printf("\nArray element [6] = %d",Arr[6]);

    Arr[0] = 42;
    Arr[1] = 93;
    Arr[2] = 56;
    Arr[3] = 75;
    Arr[4] = 28;
    Arr[5] = 34;
    Arr[6] = 9;
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
