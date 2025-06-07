
/// Reverse the given string with the help of  another string.

#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";
    int i = 0 , j = 0;

    printf("\nEnter a String : ");
    gets(cSrc);

    while(cSrc[j] != '\0')                      /// Loop for go to the end of string
    {
        j++;
    }
    j--;

    while(j >= 0)                               /// Logic for Copying
    {
        cDest[i] = cSrc[j];
        j--;
        i++;
    }
    cDest[i] = '\0';

    printf("\n Reverse the String into another string is : %s",cDest);

    getch();
    return 0;
}
