#include <stdio.h>
#include <conio.h>

int main()
{
  float percentage;

  printf("\nEnter your percentage :");
  scanf("%f",&percentage);

  if(percentage>35)
  {
    printf("\nYou are pass in recent examination with %0.2f.\n",percentage);
  }

  printf("\n\nThank you");
  getch();
  return 0;
}
