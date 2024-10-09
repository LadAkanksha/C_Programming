#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[9]={45,25,112,63,49,87,63,25,24} , i = 0;

    for(i = 0 ; i < 9 ; i++)
    {
        if(arr[i]%3 == 0 && arr[i] % 8 == 0)
        {
            printf("\n%d is divisible by 3 and 8",arr[i]);
        }
        else if(arr[i]%3 == 0)
        {
            printf("\n%d is only divisible by 3",arr[i]);
        }
        else if(arr[i] % 8 == 0)
        {
            printf("\n%d is only divisibe by 8.",arr[i]);
        }
        else
        {
            printf("\n%d is not divisible by 3 nor by 8.",arr[i]);
        }

    }
    getch();
    return 0;
}
