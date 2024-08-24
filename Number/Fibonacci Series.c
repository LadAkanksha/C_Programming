///Program to accept number from user and print Fibonacci series till that range.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=1 , n2=0 , n3=0 , rng=0;

    printf("\nEnter Range for Fibonacci Series : ");
    scanf("%d",&rng);

    while(rng >0)
    {
        printf("%d  ",n3);
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        rng--;
    }
    getch();
    return 0;
}
