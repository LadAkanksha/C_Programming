#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21 ,*iPtr1 = &iNo, *iPtr2 = &iNo;

    printf("\nValue of iNo using its Pointer iPtr1 = %d",*iPtr1);
    printf("\nAddress of iNo using iPtr1 =  %d ",iPtr1);
    printf("\nAddress of iPtr1 = %d",&iPtr1);

    printf("\nValue of Variable using its Pointer iPtr2 = %d",*iPtr2);
    printf("\nAddress of iNo using iPtr2 =  %d ",iPtr2);
    printf("\nAddress of iPtr2 = %d",&iPtr2);

    getch();

    iNo = 55;
    printf("\n-------------------------------------------------");

    printf("\nNew Value of iNo Using its Pointer iPtr1 = %d ",*iPtr1);
    printf("\nNew Value of Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n-------------------------------------------------");

    *iPtr1 = 101;

    printf("\nNew value of iNo = %d ",iNo);
    printf("\nValue of iNo Using its Pointer iPtr1 = %d ",*iPtr1);
    printf("\n Value of Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n-------------------------------------------------");
    getch();
    return 0;
}
