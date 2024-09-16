#include<stdio.h>
#include<conio.h>

int main()
{
    char ltr = '\0';

    printf("\nEnter Any Character : ");
    scanf("%c",&ltr);

    if(ltr >= 'A' && ltr <= 'Z' || ltr >= 'a' && ltr <= 'z')
    {
        printf("\nCharacter is Alphabet");
    }
    else if(ltr >= '0' || ltr <='9')
    {
        goto JUMP;
    }
    else
    {
        goto JUMP;
    }

    JUMP:
    printf("\nThanks For Running Our Program");
    getch();
    return 0;
}
