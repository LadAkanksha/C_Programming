
/// Convert the given String into LOWER case

#include<stdio.h>
#include<conio.h>
void strlwrA(char*);
int main()
{
    char cSrc[20] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strlwrA(cSrc);

    getch();
    return 0;
}
void strlwrA(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')                                    /// Logic for Conversion
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Str[i] = Str[i] + 32;
        }

        i++;
    }
    printf("\nAfter Convert into LOWER case : %s",Str);

}
