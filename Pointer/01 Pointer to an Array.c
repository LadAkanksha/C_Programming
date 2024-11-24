#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[2][2] = {{2,11},{3,7}};
    int (*ptr)[2] = arr;

    printf("\nAddress of row 1 is %p.",arr[0]);
    printf("\nAddress of row 2 is %p.",ptr+1);
    printf("\n1st element of row 1 is %d.",arr[0][0]);
    printf("\n1st element of row 2 is %d.",ptr[1][0]);

    getch();
    return 0;
}
