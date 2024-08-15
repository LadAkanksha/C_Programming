///Program To Swap 2 Number Using Function

#include<stdio.h>
#include<conio.h>
void Swap(int* ,int*);
int main()
{
    int N1=0 , N2=0;

    printf("\nEnter 1st Number : ");
    scanf("%d",&N1);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&N2);
    printf("\n\nValue Before Swap =>\nN1  N2\n%d  %d",N1,N2);
    Swap(&N1 ,&N2);
    printf("\n\nValue After Swap =>\nN1  N2\n%d  %d",N1,N2);

    getch();
    return 0;
}

void Swap(int *No1 , int *No2)
{
    int Temp=0;

    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;

    return 1;
}
