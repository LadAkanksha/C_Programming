#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5]={45,85,31,92,64} , b[5]={};

    printf("\nAssigning an array element to an another array =>");

    printf("\n\nElement of Array a : \n\t%d  %d  %d  %d  %d",a[0],a[1],a[2],a[3],a[4]);

    ///b[5] = a[5];                                                                        ///Not Allowed

    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    b[3] = a[3];
    b[4] = a[4];

    printf("\n\nElement of Array b :  \n\t%d  %d  %d  %d  %d",b[0],b[1],b[2],b[3],b[4]);

    getch();
    return 0;
}
