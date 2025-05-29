/// Reverse the Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";

    printf("\nEnter Your String : ");
    gets(cSrc);
    printf("\nGiven String is : %s",cSrc);

    strrev(cSrc);

    printf("\nReverse String is  = %s",cSrc);

    getch();
    return 0;
}
