#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Size = 0;
    char ltr = '\0';
    printf("\nEnter Size for Pattern : ");
    scanf("%d",&Size);
    printf("\n");
    for( i = 1 ; i <= Size ; ++i )
    {
        for( j = 1 , ltr = 'A'; j <= Size ; ++j , ++ltr )
        {
            if( i == 1 || i == Size || j == 1 || j == Size )
            {
                printf(" %c ",ltr);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
