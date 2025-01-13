#include<stdio.h>
#include<conio.h>

int main()
{
    int *Ptr1 = 0 , *Ptr2 = NULL;

    if(Ptr1 == Ptr2)
    {
        printf("Ptr1 become a NULL pointer");           /// Because integer constant is implicitly converted null pointer
    }
    else
    {
        printf("Ptr1 does not become a NULL pointer");
    }
    getch();
    return 0;
}
