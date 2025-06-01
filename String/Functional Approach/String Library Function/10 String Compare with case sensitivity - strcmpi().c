/// Compare the Given String to Other string using strcmp().
/// strcmpi() - Compare two strings without case sensitivity.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc1[25] = "";
    char cSrc2[25] = "";
    int res = 0;

    printf("\nEnter String1 : ");
    gets(cSrc1);
    printf("\nEnter String2 : ");
    gets(cSrc2);

    printf("\n\t%s\n",cSrc1);
    printf("\n\t%s\n",cSrc2);

    res = strcmpi(cSrc1,cSrc2);

    printf("\nCompare two String is  = %d",res);

    getch();
    return 0;
}
