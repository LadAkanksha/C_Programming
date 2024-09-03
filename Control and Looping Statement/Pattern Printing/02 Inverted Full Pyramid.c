#include<stdio.h>
#include<conio.h>

int main()
{
    int Size = 0, i = 0 , j = 0 , k = 0;

    printf("\nEnter Size for Pattern : ");
    scanf("%d",&Size);

    for(i = 1 ; i <= Size ; i++)
    {
        for(j = 1 ; j <= (2*i) ; j++)
        {
            printf(" ");
        }
        for(k = 1 ; k <= 2*(Size - i)+1 ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
