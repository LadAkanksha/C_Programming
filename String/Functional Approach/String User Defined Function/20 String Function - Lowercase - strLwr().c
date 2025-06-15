/// Program to convert given inputted string into LOWERCASE.

#include<stdio.h>
#include<conio.h>

void strlwr(char[]);

int main(){
    char cSrc[30] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    strlwrA(cSrc);

    printf("\nLowercase of Given String : %s.",cSrc);

    getch();
    return 0;
}
void strlwr(char cArr[])
{
    int i = 0;
    while(cArr[i] != '\0')
    {
        if(cArr[i] >= 'A' && cArr[i] <= 'Z')
        {
            cArr[i] = cArr[i] + 32;
        }
        i++;
    }
}
