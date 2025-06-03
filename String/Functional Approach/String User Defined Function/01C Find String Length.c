/// Calculate The Length of String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[40] = "";
    int i = 0;

    printf("Enter String : ");
    gets(cSrc);

    for(i = 0 ; cSrc[i] != '\0' ; i++);

    printf("\nLength of String is : %d" , i);

    getch();
    return 0;
}
