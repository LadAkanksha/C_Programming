#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[100] = "";
    int i = 0 , j = 0 ;

    printf("\nEnter Your Email : ");//n&
    gets(cStr);

    for(i = 0 ; cStr[i] != '\0' ; ++i)
    {

        while(!(cStr[i] >= 'A'&& cStr[i] <= 'Z') && !(cStr[i] >= 'a'&& cStr[i] <= 'z') && !(cStr[i] == ' '))
        {
            for( j = i ; cStr[j] != '\0' ; ++j)
            {
                cStr[j] = cStr[j+1];
            }
            cStr[j]='\0';

        }
    }

    printf("\nOutput String is %s",cStr);

    getch();
    return 0;
}



