#include<stdio.h>
#include<conio.h>

int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);  // read string
    printf("Name: ");
    puts(name);    // display string

    getch();
    return 0;
}
