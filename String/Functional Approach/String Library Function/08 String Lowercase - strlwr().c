/// Convert the Given String into LOWER case.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    printf("\n\t%s\n",cSrc);

    strlwr(cSrc);

    printf("\nLowercase String is  = %s",cSrc);

    getch();
    return 0;
}
