#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5][4] = {{9,20},{45,85,2},{7},{},{56,94,19,782}}, i = 0 , j = 0;

    printf("\nArray Elements Are => \n");

    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n");
        for(j = 0 ; j < 4
         ; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
