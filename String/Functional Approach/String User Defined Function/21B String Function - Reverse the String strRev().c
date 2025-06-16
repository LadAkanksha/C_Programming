/// Reverse the String Without Using Another String
#include<stdio.h>
#include<conio.h>

void strRevA(char[]);

int main(){
    char cSrc[30] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    strRevA(cSrc);

    printf("\nReverse of Given String : %s.",cSrc);

    getch();
    return 0;
}
void strRevA(char cArr[])
{
    int i = 0 , j = 0;
    char temp = '\0';

    for(j = 0 ; cArr[j] != '\0' ; j++);
    j--;
    while(i <= j)
    {
        temp = cArr[i];
        cArr[i] = cArr[j];
        cArr[j] = temp;

        j--;
        i++;
    }
}
