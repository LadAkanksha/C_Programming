#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 12  , b = 0 , c = 0 , d = 0;

    printf("\n%d %d ",b , b=a);

    a = 23;
    b = 12;
    c = 10;

    d=c=b=a;
    printf("\n%d  %d  %d  %d  ",a,b,c,d);

    a = 23;
    b = 12;
    c = 10;
    d = a > b < c;
    printf("\n%d" , d);

    getch();
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                                                                                //
//       OUTPUT :  12  12                                                         //
//                 23  23  23  23                                                 //
//                 1                                                              //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////