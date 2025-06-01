
/// strset() - Set all character in a string s to the character ch

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    printf("\n\t%s\n",cSrc);

    strset(cSrc,'S');

    printf("\nAfter Set Character to String is  = %s",cSrc);

    getch();
    return 0;
}
