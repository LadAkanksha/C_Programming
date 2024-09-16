#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    for(i = 1 ; i < 10 ; i++)
    {
        if(i%6 == 0)
        {
            break;
        }
        printf("\t%d",i);
    }
    getch();
    return 0;
}
