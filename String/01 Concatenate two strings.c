#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char Fname[20]="";
        char Lname[20]="";
        char Name[50]="";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter last name : ");
        gets(Lname);

        strcat(Name,Fname);

        printf("\nFname generated is = %s .",Fname);
        printf("\nLname generated is = %s .",Lname);
        printf("\nFull name generated is = %s .",Name);

        getch();
        system("cls");

        strcat(Name,Lname);

        printf("\nFname generated is = %s .",Fname);
        printf("\nLname generated is = %s .",Lname);
        printf("\nFull name generated is = %s .",Name);

        getch();
        return 0;
}
