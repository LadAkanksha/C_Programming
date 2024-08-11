///Program to Find Out ASCII value of Given Character

#include<stdio.h>
#include<conio.h>

int main()
{

    char ch='\0';

    printf("\nEnter Any key : ");
    scanf("%c",&ch);

    printf("\nASCII of %c = %d",ch,ch);

    getch();
    return 0;
}
