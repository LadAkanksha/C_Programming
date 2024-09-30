#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc1[30] = "" ,cSrc2[30] = "" , cDest[100] = "Hello ";

    printf("\nEnter First Name : ");
    gets(cSrc1);
    printf("\nEnter Last Name : ");
    gets(cSrc2);
    strcat(cSrc1 , cSrc2);
    strcat(cDest,cSrc1);

    printf("\nConcatenated String is %s.",cDest);
    getch();
    return 0;
}
