///Program to Check Entered Character is Uppercase or Lowercase

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='\0';
    printf("\nEnter any Character : ");
    ch = getchar();

    if(ch>='A' && ch<='Z')
    {
        printf("\nEntered Character is in Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\nEntered Character in in Lowercase");
    }
    else
    {
        printf("\nWrong Input !!!!!");
    }
    getch();
    return 0;

}
