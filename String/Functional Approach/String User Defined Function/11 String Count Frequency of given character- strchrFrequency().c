/// Count the Frequency Given character in Given String

#include<stdio.h>
#include<conio.h>
void strchrFrequency(char* , char);
int main()
{
    char cSrc[30] = "" , ch = '\0';

    printf("\nEnter a String : ");
    gets(cSrc);

    printf("\nEnter a Character : ");
    scanf("%c",&ch);

    strchrFrequency(cSrc,ch);

    getch();
    return 0;
}
void strchrFrequency(char *Str , char ltr)
{
    int i = 0 , cnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == ltr)                                   /// Logic for Counting
        {
            cnt++;
        }

        i++;
    }
    printf("\nCount of %c in the string is : %d",ltr,cnt);

}

