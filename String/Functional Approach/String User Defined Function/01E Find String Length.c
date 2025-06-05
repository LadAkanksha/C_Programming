/// Calculate The Length of String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[40] = "";
    int length = 0;

    printf("\nEnter String : ");
    length = printf(gets(cSrc));

    printf("\n\nLength of String is : %d" , length);

    getch();
    return 0;
}
