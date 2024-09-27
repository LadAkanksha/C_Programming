#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[200] = "" , cStr2[90] = "";
    int iLength = 0 , i = 0 , j = 0;

    printf("\nEnter statement 1 : ");
    gets(cStr1);

    printf("\nEnter statement 2 : ");
    gets(cStr2);

    for( i = 0 ; cStr1[i] != '\0' ; ++i);
    iLength = i;

    for( i = 0 ; cStr2[i] != '\0' ; ++i,++iLength)
    {
        cStr1[iLength] = cStr2[i];
    }
    cStr1[i]='\0';
    printf("\nString after concatenation is => ");
    printf("\n\t%s" , cStr1);
    getch();
    return 0;
}



