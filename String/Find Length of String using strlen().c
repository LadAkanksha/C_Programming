#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[50] = "";
    int iLength = 0;

    printf("\nEnter a String : ");
    gets(cStr);

    iLength = strlen(cStr);

    printf("\nLength of string is %d",iLength);

    getch();
    return 0;
}



