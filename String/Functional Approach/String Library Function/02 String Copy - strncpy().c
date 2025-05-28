/// Copy Specified Value in String

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[25] = {"Fork Infosystem"};

    puts(cSrc);

    strncpy(cSrc,"Marvellous",6);
    printf("%s",cSrc);

    getch();
    return 0;
}
