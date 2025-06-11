/// Count the White Spaces in Given String

#include<stdio.h>
#include<conio.h>
void cntWhitespace(char*);
int main()
{
    char cSrc[20] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    cntWhitespace(cSrc);

    getch();
    return 0;
}
void cntWhitespace(char *Str)
{
    int i = 0 , cnt = 0;
    while(Str[i] != '\0')                                    /// Logic for Conversion
    {
        if(Str[i] == ' ')
        {
            cnt++;
        }

        i++;
    }
    printf("\nCount of White Spaces in the string is : %d",cnt);

}
