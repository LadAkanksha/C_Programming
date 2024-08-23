///Write Program to make sum of numbers till user enter zero/-ve number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 0 , Sum = 0;

    for(i = 1 ;; i++)
    {
        printf("\nEnter Value for %d = ",i);
        scanf("%d", &No);
        if(No == 0 || No <0)
        {
            break;
        }
        Sum += No;
    }
    printf("\nSum of Entered Number Is %d",Sum);

    getch();
    return 0;
}
