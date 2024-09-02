#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j =  0 , Size = 0;
    char ltr = 'A';

    printf("\nEnter Size for Pattern : ");
    scanf("%d" , &Size);
    printf("\n");
    for(i = 1 ; i<= Size ; ++i)
    {
        for(j = 1 ; j<= Size ; ++j,++ltr)
        {
            if( i == j || i >= j )
            {
                printf(" %c ",ltr);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
