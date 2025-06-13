
/// Count the Frequency Consonant in Given String

#include<stdio.h>
#include<conio.h>
void strConsonant(char*);

int main()
{
    char cSrc[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strConsonant(cSrc);

    getch();
    return 0;
}
void strConsonant(char *Str)
{
    int i = 0 , cnt = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] == 'A' || Str[i] == 'a' || Str[i] == 'E' || Str[i] == 'e' || Str[i] == 'I' || Str[i] == 'i' || Str[i] == 'O' || Str[i] == 'o' || Str[i] == 'U' || Str[i] == 'u')                                   /// Logic for Counting
        {
        }
        else if((Str[i] >= 'A' && Str[i] <= 'Z') || (Str[i] >= 'a' && Str[i] <= 'z'))
        {
            cnt++;
        }

        i++;
    }
    printf("\nCount of Consonant in the string is : %d",cnt);
    return;
}

