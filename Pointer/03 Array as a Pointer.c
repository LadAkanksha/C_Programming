#include<stdio.h>
#include<conio.h>

int main()
{
        int x[5] ,i=0 , Sum = 0 ;

        printf("\nEnter 5 Numbers : ");

        for(i=0 ; i<5 ; i++)
        {
         ///Equivalent to scanf("%d" , &x[i]);

         scanf("%d",x+i);

        ///Equivalet to Sum += x[i]
         Sum += *(x+i);
        }
        printf("\nSum = %d",Sum);
        getch() ;
        return 0;
}
