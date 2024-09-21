#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Size = 0 , No = 0;

    printf("\nEnter Size for Pattern : ");
    scanf("%d",&Size);
    printf("\n");
    for( i = 1 , No = 15 ; i <= Size ; ++i )
    {
        for( j = 1 ; j <= Size ; ++j )
        {
            if( i == j || i >= j )
            {
                printf(" %d ",No);
                No += 5;
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
