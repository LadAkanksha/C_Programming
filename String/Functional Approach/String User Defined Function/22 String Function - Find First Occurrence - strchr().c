/// Find the First Occurrence of character in given string.

#include<stdio.h>
#include<conio.h>

int strchr(char[] , char);

int main()
{
    char cSrc[30] = "" , ch = '\0';
    int idx = 0;

    printf("\nEnter String : ");
    gets(cSrc);

    printf("\nEnter a character : ");
    scanf("%c",&ch);

    idx = strchr(cSrc , ch);

    if(idx == -1)
    {
        printf("\n %c is Not Occured in Given String.",ch);
    }
    else
    {
        printf("\nFirst Occurrence of %c at index %d .",ch, idx);
    }

    getch();
    return 0;
}
int strchr(char cArr[],char ltr)
{
    int i = 0 ;

    while(cArr[i] != '\0')
    {
        if(cArr[i] == ltr)
        {
            return i;
        }
        i++;
    }
    return -1;
}
