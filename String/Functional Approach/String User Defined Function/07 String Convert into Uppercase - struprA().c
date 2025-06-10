
/// Convert the given String into UPPER case

#include<stdio.h>
#include<conio.h>
void struprA(char*);
int main()
{
    char cSrc[20] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    struprA(cSrc);

    getch();
    return 0;
}
void struprA(char*Str)
{
    int i = 0;
    while(Str[i] != '\0')                                    /// Logic for Conversion
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
        }

        i++;
    }
    printf("\nAfter Convert into UPPER case : %s",Str);
    return;
}
