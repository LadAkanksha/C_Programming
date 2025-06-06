
/// Copy the given string into another string.

#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";
    int i = 0;

    printf("\nEnter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }
    cDest[i] = '\0';

    printf("\nCopied String into another string is : %s",cDest);

    getch();
    return 0;
}
