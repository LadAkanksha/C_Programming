#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[50] = "";
    int i = 0;

    printf("\nEnter a String : ");
    gets(cStr);

    for( i = 0 ; cStr[i] != '\0' ; ++i);

    printf("\nLength of given string is %d",i);
    getch();
    return 0;
}



