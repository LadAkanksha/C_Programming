#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[3][4] = {{3,6,9,20},{45,85,2,47},{852,56,7,1}} , i = 0 , j = 0;

    printf("\nArray Elements Are => \n");

    for( i = 0 ; i < 3 ; i++)
    {
        printf("\n");
        for(j = 0 ; j < 4 ; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
