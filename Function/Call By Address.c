///Call By Address

#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int a = 0,b = 0;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a , &b);
    printf("\n\nValue before calling=>\na=%d\tb=%d",a,b);

    swap(&a,&b);
    printf("\n\nValue after calling=>\na=%d\tb=%d",a,b);
    getch();
    return 0;
}
 void swap(int*x , int*y)
 {
     int temp = 0;
     temp = *x;
     *x = *y;
     *y = temp;
     printf("\n\nValue in function=>\na=%d\tb=%d",*x,*y);
}
