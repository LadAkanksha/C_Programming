///Display Result(pass/fail)using if else statement.

#include<stdio.h>
#include<conio.h>

int main()
{
    float per=0;

    printf("\nEnter your percentage of recent examination :");
    scanf("%f",&per);

    printf("\n=============Result===============\n");

    if(per>=35)
    {
        printf(" \n\t\tCongratulations ! \nYou are passed in examination. ");
    }
    else
    {
        printf("\n You are failed in examination.\nBetter luck for next time. ");
    }


    printf ("\n\n===============Thanks============");
    getch();
    return 0;
}


