
/// Count the Frequency Vowel in Given String

#include<stdio.h>
#include<conio.h>
void strVowel(char*);
int main()
{
    char cSrc[30] = "" , ch = '\0';

    printf("\nEnter a String : ");
    gets(cSrc);

    strVowel(cSrc);

    getch();
    return 0;
}
void strVowel(char *Str)
{
    int i = 0 , cnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == 'A' || Str[i] == 'a' || Str[i] == 'E' || Str[i] == 'e' || Str[i] == 'I' || Str[i] == 'i' || Str[i] == 'O' || Str[i] == 'o' || Str[i] == 'U' || Str[i] == 'u')                                   /// Logic for Counting
        {
            cnt++;
        }

        i++;
    }
    printf("\nCount of Vowels in the string is : %d",cnt);
    return;
}

