#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COLUMN 4
int main()
{
    int arr[3][3] = {{9,20,45},{21,85,2},{56,94,19}}, i = 0 , j = 0;

    printf("\nArray Elements Using Subscript Operator => \n");

    for( i = 0 ; i < ROW ; i++)
    {
        printf("\n");
        for(j = 0 ; j < COLUMN; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nArray Elements Using Pointer Expression => \n");
    for( i = 0 ; i < ROW ; i++)
    {
        printf("\n");
        for(j = 0 ; j < COLUMN; j++)
        {
            printf("\t%d",*(*(arr+i)+j));
        }
        printf("\n");
    }

    printf("\nArray Elements Using Mixed Form of Expression => \n");
    for( i = 0 ; i < ROW ; i++)
    {
        printf("\n");
        for(j = 0 ; j < COLUMN; j++)
        {
            printf("\t%d",*(arr[i]+j));
        }
        printf("\n");
    }
    getch();
    return 0;
}
