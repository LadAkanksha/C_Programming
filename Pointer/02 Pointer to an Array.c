#include<stdio.h>
#include<conio.h>

int main()
{
    int iArr[2][2] = {{2,11},{3,7}},(*iPtr)[2] = iArr;
    float fArr[3][2] = {{123.56,5.7},{457.6,2.0,3.65},{00.1,96.1,0.9}}, (*fPtr)[3] = fArr;
    char cArr[4] = {'a','s','v','c',} , *cPtr = cArr;

    printf("\n1st element of integer row is %d.",iPtr[0][0]);
    printf("\n1st element of float row is %f.",fPtr[0][0]);
    printf("\n1st element of character row is %c.",*cPtr);
    getch();
    return 0;
}
