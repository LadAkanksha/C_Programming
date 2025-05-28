/// Copy Value in String

#include<stdio.h>
#include<conio.h>

int main()
{
    char Fname[25] = {};
    char Lname[25] = {};
    char Fullname[50] = {};

    printf("\nEnter Your First Name : ");
    gets(Fname);

    printf("\nEnter Your Last Name : ");
    gets(Lname);

    strcpy(Fullname , Fname);
    strcpy(Fullname , Lname);

    printf("%s",Fullname);

    getch();
    return 0;
}
