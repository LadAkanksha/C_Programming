#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc1[30] = "Harry Potter" , cSrc2[30] = "James Gosling";

    printf("\nString value in cSrc1 : %s",cSrc1);
    printf("\nString value in cSrc2 : %s",cSrc2);

    strcpy(cSrc2 , "Anders Hejlberg");

    printf("\nUpdated String cSrc2 is %s",cSrc2);         ///Anders Hejlberg

    strcpy(cSrc1 , "Edison");

    printf("\nUpdated String cSrc1 is %s",cSrc1);         ///Edison

    strcpy(cSrc2 ,cSrc1);

    printf("\nUpdated String cSrc2 is %s",cSrc2);         ///Edison

    getch();
    return 0;
}
