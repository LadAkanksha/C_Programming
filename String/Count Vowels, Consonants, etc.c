#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cLine[100] = "" , ch = '\0';

    int iVowel = 0 , iConsonant = 0  ,  iDigit = 0 , iSpace = 0 , iSymbol = 0 , i = 0;

    printf("\nEnter what you want : ");
    gets(cLine);

    for( i = 0 ; cLine[i] != '\0' ; ++i)
    {
        if(cLine[i] >= 'A' && cLine[i] <= 'Z')
        {
            cLine[i] = cLine[i]+32;
        }

        if(cLine[i] == 'a' || cLine[i] == 'e' || cLine[i] == 'i' || cLine[i] == 'o' || cLine[i] == 'u')
        {
            ++iVowel;
        }
        else if(cLine[i] >= 'a' && cLine[i] <= 'z')
        {
            ++iConsonant;
        }
        else if(cLine[i] >= '0' && cLine[i] <= '9')
        {
            ++iDigit;
        }
        else if(cLine[i] == ' ')
        {
            ++iSpace;
        }
        else
        {
            ++iSymbol;
        }
    }

    printf("\n\nIn Your Inputted String =>\n");
    printf("\n\tCount of Vowel : %d",iVowel);
    printf("\n\tCount of Consonant : %d",iConsonant);
    printf("\n\tCount of Digit : %d",iDigit);
    printf("\n\tCount of Space : %d",iSpace);
    printf("\n\tCount of Symbols : %d",iSymbol);

    getch();
    return 0;
}



