#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[3] = {5,3,9};
    printf("\nElements are %d  %d  %d",arr[0],arr[1],arr[2]);
    printf("\nElements are %d  %d  %d",*(arr+0),*(arr+1),*(arr+2));
    printf("\nElements are %d  %d  %d",0[arr],1[arr],2[arr]);

    getch();
    return 0;
}
