
/// Copy the given string into another string.

#include<stdio.h>
#include<conio.h>
void strcpy(char*);
int main()
{
    char cSrc[20] = "";
    int i = 0;

    printf("\nEnter a String : ");
    gets(cSrc);

    strcpy(cSrc);

    getch();
    return 0;
}
void strcpy(char *Str)
{
    char cDest[20] = "";
    int i = 0 , j = 0;

    while(Str[i] != '\0')
    {
        cDest[i] = Str[i];
        i++;
    }
    cDest[i] = '\0';

    printf("\nCopied String into another string is : %s",cDest);

}

