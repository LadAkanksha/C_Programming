#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i = 0 , j= 0 ;
    char cSrc[30] = "" , cDest[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        ++i;
    }
    --i;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }
    cDest[j] = '\0';

    printf("\nReverse String is %s.",cDest);
    getch();
    return 0;
}
