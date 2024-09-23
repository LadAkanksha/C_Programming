#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Size = 0 , N1 = 1 , N2 = 0 , N3 = 0 , Temp = 0;

    printf("\nEnter Size for Pattern : ");
    scanf("%d",&Size);
    printf("\n");

    for( i = 1 ; i <= Size ; ++i )
    {
        for( j = 1 ; j <= Size ; ++j )
        {
            if( i == j || i >= j )
            {
                    printf(" %d ",N3);
                    N3 = N1 + N2;
                    N1 = N2;
                    N2 = N3;
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
