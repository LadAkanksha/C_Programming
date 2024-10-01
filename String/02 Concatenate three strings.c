#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char Fname[20] = "";
        char Mname[20] = "";
        char Lname[20] = "";
        char Name[80] = "";

        printf("\nEnter first name : ");
        gets(Fname);
        printf("\nEnter middle name : ");
        gets(Mname);
        printf("\nEnter last name : ");
        gets(Lname);

        strcat(Name,Fname);

        printf("\n\n\nFname generated is = %s",Fname);
        printf("\nFname generated is = %s",Mname);
        printf("\nLname generated is = %s",Lname);
        printf("\nFull name generated is = %s .",Name);

        strcat(Name , " ");
        strcat(Name , Mname);

        printf("\n\n\nFname generated is = %s",Fname);
        printf("\nFname generated is = %s",Mname);
        printf("\nLname generated is = %s",Lname);
        printf("\nFull name generated is = %s .",Name);

        strcat(Name , " ");
        strcat(Name,Lname);

        getch();
        system("cls");

        printf("\n\nFname generated is = %s",Fname);
        printf("\nFname generated is = %s",Mname);
        printf("\nLname generated is = %s",Lname);
        printf("\nFull name generated is = %s .",Name);

        getch();
        return 0;
}
