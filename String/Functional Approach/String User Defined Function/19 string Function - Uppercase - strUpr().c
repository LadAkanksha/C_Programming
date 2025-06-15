/// Program to convert given inputted string into UPPERCASE.
#include<stdio.h>
#include<conio.h>

void strupr(char[]);

int main(){
    char cSrc[30] = "";

    printf("\nEnter String : ");
    gets(cSrc);

    struprA(cSrc);

    printf("\nUppercase of Given String : %s.",cSrc);

    getch();
    return 0;
}
void strupr(char cArr[])
{
    int i = 0;
    while(cArr[i] != '\0')
    {
        if(cArr[i] >= 'a' && cArr[i] <= 'z')
        {
            cArr[i] = cArr[i] - 32;
        }
        i++;
    }
}
