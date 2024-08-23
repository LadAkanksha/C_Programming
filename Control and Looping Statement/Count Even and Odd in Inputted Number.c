///Write Program to count number of odd digits & even digits in given inputted number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0 ,ECnt = 0 , OCnt = 0 , Dig =0 , Temp =  0;
    printf("\nEnter Number : ");
    scanf("%d" , &Num);
    Temp = Num;
    while(Temp > 0)
    {
        Dig = Temp%10;
        if(Dig % 2 == 0)
        {
            ECnt++;
        }
        else{
            OCnt++;
        }
        Temp =Temp /10;
    }
    printf("\nCount of Even Digit : %d\n\nCount of Odd Digit : %d",ECnt,OCnt);
    getch();
    return 0;
}

