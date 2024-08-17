///Write a program to print characters A to Z


#include<stdio.h>
#include<conio.h>
int main()
{
    char i='\0';
    for( i = 'A'; i<= 'Z' ; i++)
    {
        printf("  %c  ",i);
    }
    getch();
    return 0;
}
