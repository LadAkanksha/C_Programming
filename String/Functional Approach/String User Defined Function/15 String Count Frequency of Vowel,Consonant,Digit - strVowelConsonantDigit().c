/// Count the Frequency of Vowel , Consonant , Digit and Special Symbol in Given String

#include<stdio.h>
#include<conio.h>
void strVowelConsonantDigit(char*);
int main()
{
    char cSrc[30] = "";

    printf("\nEnter Your Email : ");
    gets(cSrc);

    strVowelConsonantDigit(cSrc);

    getch();
    return 0;
}

void strVowelConsonantDigit(char *cSrc)
{
    int i = 0 , Vcnt = 0 , Ccnt = 0 , Dcnt = 0 , Spcnt = 0;
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 'A' || cSrc[i] == 'a' || cSrc[i] == 'E' || cSrc[i] == 'e' || cSrc[i] == 'I' || cSrc[i] == 'i' || cSrc[i] == 'O' || cSrc[i] == 'o' || cSrc[i] == 'U' || cSrc[i] == 'u')
        {
            Vcnt++;
        }
        else if((cSrc[i] >= 'A' && cSrc[i] <= 'Z')|| (cSrc[i] >= 'a' && cSrc[i] <= 'z'))
        {
            Ccnt++;
        }
        else if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Dcnt++;
        }
        else
        {
            Spcnt++;
        }

        i++;
    }
    printf("\nCount of Vowels    : %d",Vcnt);
    printf("\nCount of Consonant : %d",Ccnt);
    printf("\nCount of Digit     : %d",Dcnt);
    printf("\nCount of Symbol    : %d",Spcnt);

}
