#include<stdio.h>
#include<conio.h>
int Array_Sum(int* ,int );
int main()
{
    int Arr[10] = {} , i = 0 , sum = 0 , ele = 0;

    printf("\nEnter No.of Element less than 10: ");
    scanf("%d",&ele);
    printf("\nEnter Element for Array");
    for( i = 0 ; i < ele ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    for( i = 0 ; i < ele ; i++)
    {
        sum = Array_Sum(&Arr[i] , sum);
    }
    printf("\nSum of All Array Elements is %d",sum);
    getch();
    return 0;
}
int Array_Sum(int *ele , int sum)
{
    return sum + *ele;
}
