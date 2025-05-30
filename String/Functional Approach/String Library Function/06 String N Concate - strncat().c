/// Concatenate specific string with another Strings

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
    printf("\nLast Name is  : %s",Lname);

    strcat(Fullname , Fname);
    strcat(Fullname , " ");
    strncat(Fullname , Lname , 2);

    printf("\nConcatenate String is  = %s",Fullname);

    getch();
    return 0;
}
