///Area of circle and circumference of circle by switch.

#include<stdio.h>
#include<conio.h>
int main()
{
  char Opt='\0';
  float Rad=0.00, Area=0.00, Circum=0.00,Pi=3.14;
  printf("\nA)Area of circle\nB)Circumference of circle");
  printf("\n\nEnter option for corresponding operation:");
  scanf("%c",&Opt);

  switch(Opt)
  {
    case 'A':
              printf("\nEnter radius:");
              scanf("%f",&Rad);
              Area=Pi*Rad*Rad;
              printf("\nArea of circle = %0.3f",Area);
              break;

    case 'B':
              printf("\nEnter radius:");
              scanf("%f",&Rad);
              Circum=2*Pi*Rad;
              printf("\nCircumference of circle = %0.3f",Circum);
              break;

    default:
              printf("\nInvalid input.");
              break;
  }
  getch();
  return 0;
}
