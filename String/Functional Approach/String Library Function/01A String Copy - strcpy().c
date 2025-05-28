/// Copy Value in String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = {};

    printf("\nEnter Your Name : ");
    gets(cSrc);
    puts(cSrc);

    strcpy(cSrc,"Akanksha Chandrakant Lad");
    printf("%s",cSrc);

    getch();
    return 0;
}
