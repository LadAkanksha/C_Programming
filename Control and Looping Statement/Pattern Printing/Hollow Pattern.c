#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j =  0 , Size = 0;

    printf("\nEnter Size for Pattern : ");
    scanf("%d" , &Size);
     printf("\n");
    for(i = 1 ; i<= Size ; ++i)
    {
        for(j = 1 ; j<= Size ; ++j)
        {
            if( i == 1 || i == Size ||j == 1 || j == Size)
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
