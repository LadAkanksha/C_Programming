/// Reverse the String Using Another String
#include<stdio.h>
#include<conio.h>

void strRevA(char[] , char[]);

int main(){
    char cSrc[30] = "";
    char cDest[30] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    strRevA(cDest , cSrc);

    printf("\nReverse of Given String : %s.",cDest);

    getch();
    return 0;
}
void strRevA(char cDestArr[] , char cArr[])
{
    int i = 0 , j = 0;
    for(j = 0 ; cArr[j] != '\0' ; j++);
    j--;
    while(j >= 0)
    {
        cDestArr[i] = cArr[j];

        j--;
        i++;
    }
}
