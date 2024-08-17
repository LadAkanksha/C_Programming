///Write Program to print “FORK” on first line & “INFOSYSTEMS” on second line.
///Print this 5 times (use only one while loop).


#include<stdio.h>
#include<conio.h>
int main()
{
    int Sum = 0 , i = 0 , Num = 0;

    for(i = 1 ; i<= 10 ; i++)
    {
        printf("Enter value for Number %d : ",i);
        scanf("%d" , &Num);
        Sum += Num;
    }

    printf("\nSum of 10 Inputted Number is %d",Sum);
    getch();
    return 0;
}

