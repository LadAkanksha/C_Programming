/// Count the Frequency of Digits in Given String

#include<stdio.h>
#include<conio.h>
void strDigit(char*);
int main()
{
    char cSrc[30] = "";

    printf("\nEnter a String : ");
    gets(cSrc);

    strDigit(cSrc);

    getch();
    return 0;
}

void strDigit(char *Str)
{
    int i = 0 , cnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= '0' && Str[i] <= '9')
        {
            cnt++;
        }

        i++;
    }
    printf("\nCount of Number in the string is : %d",cnt);
    return;
}
