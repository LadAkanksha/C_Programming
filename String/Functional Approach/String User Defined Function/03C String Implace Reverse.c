
/// Reverse the given string without using another string.

#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20] = "" , temp = '\0';
    int i = 0 , j = 0;

    printf("\nEnter a String : ");
    j = printf(gets(cSrc)) - 1;

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
