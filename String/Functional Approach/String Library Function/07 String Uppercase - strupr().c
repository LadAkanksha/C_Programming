/// Convert the Given String into UPPER case.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    printf("\n\t%s\n",cSrc);

    strupr(cSrc);

    printf("\nUppercase String is  = %s",cSrc);

    getch();
    return 0;
}
