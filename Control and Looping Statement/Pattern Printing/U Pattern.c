#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Size = 0;

    printf("Enter Size for Pattern : ");
    scanf("%d" , &Size);
    printf("\n");
    for (i =1 ; i <= Size ; i++)
    {
        for( j = 1 ; j <= Size ; j++ )
        {
            if((j == 1 &&  i+j <= Size) || ( j == Size && i != j  || ( i == Size && i+j > Size+1 && i != j)) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");

    }
    getch();
    return 0;
}
