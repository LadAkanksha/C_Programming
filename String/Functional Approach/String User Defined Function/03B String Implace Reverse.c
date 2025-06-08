
/// Reverse the given string without using another string.

#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "" , temp = '\0';
    int i = 0 , j = 0;

    printf("\nEnter a String : ");
    gets(cSrc);

    while(cSrc[j] != '\0')                      /// Loop for go to the end of string
    {
        j++;
    }
    j--;

    while(i < j)                               /// Logic for Copying
    {
        temp = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = temp;

        i++;
        j--;
    }
    printf("\n Reverse String is : %s",cSrc);

    getch();
    return 0;
}
