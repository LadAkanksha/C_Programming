#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[] = "Atharv Lad" , *nmPtr = NULL;

    printf("\n%c",*(Name));              ///A
    printf("\n%c" , *(Name+2));          ///h
    printf("\n%c", *(Name+8));           ///a

    nmPtr = Name;

    printf("\n\n%c", *(nmPtr));            ///A
    printf("\n%c", *(nmPtr+2));          ///h
    printf("\n%c", *(nmPtr+8));          ///a

    getch();
    return 0;
}



