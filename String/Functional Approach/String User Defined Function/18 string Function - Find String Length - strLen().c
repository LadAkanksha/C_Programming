/// Program to find Length of String.

#include<stdio.h>
#include<conio.h>

int strLen(char[]);

int main(){
    char cSrc[30] = "";
    int len = 0;

    printf("\nEnter String : ");
    gets(cSrc);

    len = strLen(cSrc);

    printf("\nLength of Given String : %d.",len);

    getch();
    return 0;
}
int strLen(char cArr[])
{
    int i = 0;
    while(cArr[i] != '\0')
    {
        i++;
    }
    return i;
}
