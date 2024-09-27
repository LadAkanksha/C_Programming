#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[100] = "" , cStr2[100] = "";
    int iLength = 0 , i = 0 , j = 0;

    printf("\nEnter statement 1 : ");
    gets(cStr1);

    for( i = 0 ; cStr1[i] != '\0' ; ++i)
    {
        cStr2[i] = cStr1[i];
    }
    cStr1[i]='\0';

    printf("\nString after copying is => ");
    printf("\n\n\t%s" , cStr2);

    getch();
    return 0;
}



