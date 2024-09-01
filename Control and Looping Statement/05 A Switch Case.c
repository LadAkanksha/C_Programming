#include<stdio.h>
#include<conio.h>
int main()
{
  int day=0;
  printf("\nEnter a day number(1-7):");
  scanf("%d",&day);
  switch(day)
  {
    case 1:printf("\nSunday");
            break;
    case 2:printf("\nMonday");
            break;
    case 3:printf ("\nTuesday");
            break;
    case 4:printf ("\nWednsday");
            break;
    case 5:printf("\nThursday");
            break;
    case 6:printf("\nFriday");
            break;
    case 7:printf("\nSaturday");
            break;
    default :
            printf("\nInvalid input");
            break;
  }
  getch();
  return 0;
}
