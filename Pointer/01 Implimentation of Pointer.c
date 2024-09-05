#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21 , iNum = 55;
    int *iPtr1 = &iNo;
    int *iPtr2 = &iNo;

    printf("\nValue of iNo : %d ",iNo);
    printf("\nAddress of iNo = %d ",&iNo);
    printf("\nValue of iNo using its Pointer iPtr1 = %d",*iPtr1);
    printf("\nAddress of iNo using iPtr =  %d ",iPtr1);
    printf("\nAddress of iPtr1 = %d",&iPtr1);

    printf("\n\nValue of iNum = %d",iNum);
    printf("\nAddress of iNum = %d",&iNum);
    printf("\nValue of Variable using its Pointer iPtr2 = %d",*iPtr2);
    printf("\nAddress of iNo using iPtr =  %d ",iPtr2);
    printf("\nAddress of iPtr1 = %d",&iPtr2);

    getch();
    return 0;
}
