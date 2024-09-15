#include<stdio.h>
#include<conio.h>

int main()
{
    char exp = 'E';

    switch(exp)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                printf("\nLower Case Vowel");
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                printf("\nUpper Case Vowel");
    }
    getch();
    return 0;
}
