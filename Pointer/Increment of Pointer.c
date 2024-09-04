#include <stdio.h>
#include <conio.h>
#define SIZE 5
int main()
{
  int *ptr=NULL , Var[SIZE]={95,50,25,72,48} , i=0;
  ptr = &Var;

  for(i=0 ; i<SIZE ; i++)
  {
    printf("\nAddress of Var[%d] is = %u",i,ptr);
    printf("\nValue of Var[%d] is = %d\n",i,*ptr);

    ptr++;
  }
  getch() ;
  return 0;
}
