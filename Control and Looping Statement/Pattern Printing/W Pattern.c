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
            if(  j == 1 || j == Size || (i+j == Size+1 && i >= j) || ( i == j && i >= (Size+1)/2))
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
