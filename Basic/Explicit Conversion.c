///Program to illustrate Implicit Type Casting

#include<stdio.h>
#include<conio.h>

int main()
{
    double dNum = 7825.3541;
    float fNum = (float)dNum;
    long long llNum = (long long)fNum;
    long lNum = (long)llNum;
    int iNum = (int)lNum;
    printf("\nValue in Double Variable : %lf",dNum);
    printf("\nValue in Float Variable : %f",fNum);
    printf("\nValue in Long Long Variable : %lld",llNum);
    printf("\nValue in Long Variable : %ld",lNum);
    printf("\nValue in Int Variable : %d",iNum);

    getch();
    return 0;
}
