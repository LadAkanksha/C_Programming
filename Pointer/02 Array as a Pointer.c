#include<stdio.h>
#include<conio.h>

int main()
{
  int X[5]={1,2,3,4,5} ,i=0 , *ptr=NULL;

  ptr=X;

  for(i=0 ; i<5 ; i++)
  {
    printf("\n-----Element %d -----\n",i);
    printf("\nAddress : %u",&X);
    printf("\nElement : %d",X[i]);
    printf("\nElement : %d",i[X]);
    printf("\nElement : %d",*(X+i));
    printf("\nElement : %d",*ptr);
  }

  getch() ;
  return 0;
}
