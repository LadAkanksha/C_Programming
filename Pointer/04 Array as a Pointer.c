#include<stdio.h>
#include<conio.h>

int main()
{
        int x[5] = {9,8,5,6,7} , i=0 , *ptr=NULL;

        ptr = &x[2];

        printf("\n*ptr : %d",*ptr);
        printf("\n*(ptr+1) : %d",*(ptr+1));
        printf("\n*(ptr-1) : %d",*(ptr-1));

        getch() ;
        return 0;
}
