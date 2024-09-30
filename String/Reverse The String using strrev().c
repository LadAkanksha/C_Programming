#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i = 0 , j= 0 ;
    char cSrc[30] = "" , cDest[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strrev(cSrc);

    printf("\nReverse String is %s.",cSrc);
    getch();
    return 0;
}
