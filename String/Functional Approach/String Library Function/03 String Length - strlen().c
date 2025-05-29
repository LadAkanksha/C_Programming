/// Find Length of String using strlen().

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";
    int len = 0;

    printf("\nEnter Your String : ");
    gets(cSrc);
    puts(cSrc);

    len = strlen(cSrc);

    printf("\nLength of String = %d",len);

    getch();
    return 0;
}
