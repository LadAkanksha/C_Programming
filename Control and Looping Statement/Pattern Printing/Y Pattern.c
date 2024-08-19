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
        printf("\n");

        for(j = 1 ; j<= Size ; ++j)
        {
            if((i == j && i+j <= Size+1) || (i+j == Size+1  && i <= j) || (j == (Size/2)+1 && j <= i))
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
