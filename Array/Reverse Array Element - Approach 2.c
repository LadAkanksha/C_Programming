///Write a program to read n number of values in an array and display them in reverse order.

#include<stdio.h>
#include<conio.h>

int main()
{
    int *iSrc , iDest[20] = {} , i = 0 , j = 0 , Num = 0;

    printf("\nInput Number of Element to Store in the Array : ");
    scanf("%d",&Num);

    iSrc = (int*)malloc(Num*sizeof(int));

    for(i = 0 ; i < Num ; i++)
    {
        printf("\nElement - %d : ",i);
        scanf("%d",&iSrc[i]);
    }
    --i;
    while(i >= 0)
    {
        iDest[j] = iSrc[i];
        ++j;
        --i;
    }
    printf("\nValues Store in the Array are :\n");
    for(i = 0 ; i < Num ; i++)
    {
        printf("\t%d",iSrc[i]);
    }

    printf("\nValues Store in the Array in Reverse are :\n");
    for(i = 0 ; i < Num ; i++)
    {
        printf("\t%d",iDest[i]);
    }
    getch();
    return 0;
}
