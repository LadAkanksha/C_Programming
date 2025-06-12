/// Count the Frequency of Vowel , Consonant , Digit and Special Symbol in Given String

#include<stdio.h>
#include<conio.h>
void strCapitalSmall(char*);

int main()
{
    char cSrc[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strCapitalSmall(cSrc);

    getch();
    return 0;
}

void strCapitalSmall(char *cSrc)
{
    int i = 0 , Smcnt = 0 , Cacnt = 0 , Dcnt = 0 , Spcnt = 0;

    while(cSrc[i] != '\0')
    {
        if((cSrc[i] >= 'a' && cSrc[i] <= 'z'))
        {
            Smcnt++;
        }
        else if((cSrc[i] >= 'A' && cSrc[i] <= 'Z'))
        {
            Cacnt++;
        }
        else if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Dcnt++;
        }
        else if(cSrc[i] != ' ')
        {
            Spcnt++;
        }

        i++;
    }
    printf("\nCount of Small Letter    : %d",Smcnt);
    printf("\nCount of Capital Letter  : %d",Cacnt);
    printf("\nCount of Digit           : %d",Dcnt);
    printf("\nCount of Symbol          : %d",Spcnt);

    return;
}
