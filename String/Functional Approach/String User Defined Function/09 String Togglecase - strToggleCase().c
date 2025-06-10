
/// Toggle the given String

#include<stdio.h>
#include<conio.h>
void strToggleCaseA(char *);
int main()
{
    char cSrc[20] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strToggleCaseA(cSrc);

    getch();
    return 0;
}

void strToggleCaseA(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')                                    /// Logic for Conversion
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Str[i] = Str[i] + 32;
        }
        else if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
        }

        i++;
    }
    printf("\nAfter Toggling the string is : %s",Str);

    return;
}
