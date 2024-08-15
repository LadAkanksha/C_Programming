#include<stdio.h>
#include<conio.h>

int Find_Factorial(int Num)
{
    int Temp = Num,Fact =1;

    while(Temp>1)
    {
        Fact *= Temp;
        Temp --;
    }

}
int main()
{
    int No=0 , Fact =0;
    printf("Enter a Number : ");
    UP:
    scanf("%d",&No);
    if(No <= 0)
    {
            printf("Enter Valid Number : ");
            goto UP;
    }
    Fact = Find_Factorial(No);
    printf("\nFactorial of %d = %d",No,Fact);
    getch();
    return;
}




