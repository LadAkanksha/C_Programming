#include<stdio.h>
#include<conio.h>

int main()
{
    int Size = 0, i = 0 , j = 0 , k = 0;

    printf("\nEnter Size for Pattern : ");
    scanf("%d",&Size);

    for(i = 0 ; i < Size ; i++)
    {
        for(j = 0 ; j < 2*(Size - i)-1 ; j++)
        {
            printf(" ");
        }
        for(k = 0 ; k < (2*i)+1 ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
