#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[30] = "" , cDest[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strcpy(cDest , cSrc);

    printf("\nCopied String is %s.",cDest);
    getch();
    return 0;
}
