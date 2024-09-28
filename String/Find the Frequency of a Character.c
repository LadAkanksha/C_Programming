#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[100] = "" , cSrh = '\0';
    int i = 0 , iCnt = 0;

    printf("\nEnter a String : ");
    gets(cStr);

    printf("\n\nEnter Character to find its Frequency : ");
    scanf("%c",&cSrh);

    for(i = 0 ; cStr[i] != '\0' ; ++i)
    {
        if(cSrh == cStr[i])
        {
            iCnt++;
        }
    }

    printf("\nCount of %c in given string is %d.",cSrh , iCnt);

    getch();
    return 0;
}



