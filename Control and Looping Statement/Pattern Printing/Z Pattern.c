#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0 , i = 0 ,j = 0 ;

    printf("\nEnter Size For Pattern : ");
    scanf("%d" , &N);
    printf("\n");
    for( i = 1 ; i <= N ; i++)
    {
        for(j = 1 ; j <= N ; j++)
        {
            if(i == j || i+j == N+1)
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
