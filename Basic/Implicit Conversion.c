///Program to illustrate Implicit Type Casting

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 123;
    long lNum = iNum;
    long long llNum = lNum;
    float fNum = llNum;
    double dNum = fNum;

    printf("\nValue in Int Variable : %d",iNum);
    printf("\nValue in Long Variable : %ld",lNum);
    printf("\nValue in Long Long Variable : %lld",llNum);
    printf("\nValue in Float Variable : %f",fNum);
    printf("\nValue in Double Variable : %lf",dNum);

    getch();
    return 0;
}
