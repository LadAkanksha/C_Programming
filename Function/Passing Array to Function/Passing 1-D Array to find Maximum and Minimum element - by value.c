#include<stdio.h>
#include<conio.h>
void Array_Sum(int[] ,int);
int main()
{
    int Arr[10] = {} , i = 0 , ele = 0;

    printf("\nEnter No.of Element : ");
    scanf("%d",&ele);
    printf("\nEnter Element for Array : \n");
    for( i = 0 ;i < ele ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    Array_Sum(Arr, ele);
    printf("\nMaximum Element is  %d",Arr[0]);
    printf("\nMinimum Element is  %d",Arr[1]);
    getch();
    return 0;
}
void Array_Sum(int A[], int e)
{
    int i = 0 , max = A[0] , min = A[0];

    for(i = 1 ; i < e ; ++i)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    A[0] = max , A[1] = min;
    printf("\nEnter No.of Element : ");
}
