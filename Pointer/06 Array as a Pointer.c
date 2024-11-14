#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[3] = {5,3,9};
    printf("\nFirst Element of arr is at %d",arr);
    printf("\nSecond Element of arr is at %d",arr+1);
    printf("\nThird Element of arr is at %d",arr+2);

    getch();
    return 0;
}
