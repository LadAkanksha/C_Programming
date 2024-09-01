#include<stdio.h>
#include<conio.h>
int main()
{
  char character='0';
  printf("Enter any alphabet=>");
  scanf("%c",&character);
  switch(character)
  {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
             printf("\nGiven alphabet is vowel. ");
             break;
    case'b':
    case'c':
    case'd':
    case'f':
    case'g':
    case'h':
    case'j':
    case'k':
    case'l':
    case'm':
    case'n':
    case'p':
    case'q':
    case'r':
    case's':
    case't':
    case'v':
    case'w':
    case'x':
    case'y':
    case'z':
             printf("\nGiven alphabet is consonant.");
             break;
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
             printf("\nGiven alphabet is vowel. ");
             break;
    case'B':
    case'C':
    case'D':
    case'F':
    case'G':
    case'H':
    case'J':
    case'K':
    case'L':
    case'M':
    case'N':
    case'P':
    case'Q':
    case'R':
    case'S':
    case'T':
    case'V':
    case'W':
    case'X':
    case'Y':
    case'Z':
             printf("\nGiven alphabet is consonant.");
             break;
    case'1':
    case'2':
    case'3':
    case'4':
    case'5':
    case'6':
    case'7':
    case'8':
    case'9':
    case'10':
             printf("\nGiven alphabet is digit");
             break;
    default:
             printf("\nGiven alphabet is special symbol");
              break;
  }
  printf("\n\n\t===========Thanks=============");
  getch();
  return 0;
}
