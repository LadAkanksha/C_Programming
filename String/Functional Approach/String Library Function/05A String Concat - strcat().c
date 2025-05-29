/// Concate two Strings

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";
    char cDest[25] = "";

    printf("\nEnter Value for Source String : ");
    gets(cSrc);

    printf("\nEnter Value for Destination String : ");
    gets(cDest);

    printf("\nGiven String 1 is : %s",cSrc);
    printf("\nGiven String 2 is : %s",cDest);

    strcat(cSrc , cDest);

    printf("\nConcatenate String is  = %s",cSrc);

    getch();
    return 0;
}
