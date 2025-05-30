/// Concatenate the two Given Strings

#include<stdio.h>
#include<conio.h>

int main()
{
    char Fname[25] = "";
    char Lname[25] = "";
    char Fullname[50] = "";

    printf("\nEnter First Name : ");
    gets(Fname);

    printf("\nEnter Last Name : ");
    gets(Lname);


    printf("\nFirst Name is : %s",Fname);
    printf("\nLast Name is : %s",Lname);

    strcat(strcat(strcat(Fullname , Fname)," "),Lname);

    printf("\nConcatenate String is  = %s",Fullname);

    getch();
    return 0;
}
