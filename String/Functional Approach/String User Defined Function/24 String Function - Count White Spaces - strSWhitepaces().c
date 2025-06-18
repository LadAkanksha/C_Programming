/// Count white spaces in given string.

#include<stdio.h>
#include<conio.h>

int strSWhitepaces(char*);

int main(){
    char cSrc[30] = "";
    int cnt = 0;

    printf("\nEnter String : ");
    gets(cSrc);

    cnt = strSWhitepaces(cSrc);

    printf("\nCount of Spaces in Given String is %d .",cnt);

    getch();
    return 0;
}
int strSWhitepaces(char *cArr)
{
    int i = 0 , cnt = 0;

    while(cArr[i] != '\0')
    {
        if(cArr[i] == ' ' || cArr[i] == '\t')
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}
