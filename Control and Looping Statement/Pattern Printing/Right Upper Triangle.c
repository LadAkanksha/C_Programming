#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0 , i = 0 ,j = 0 ;

    printf("\nEnter Size For Pattern : ");
    scanf("%d" , &N);

    for( i = 1 ; i <= N ; i++)
    {
        for(j = 1 ; j <= N ; j++)
        {
            if(i <= j)
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
