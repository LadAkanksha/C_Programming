#include<stdio.h>
#include<conio.h>

int main()
{
    char *cPtr;
    int *iPtr;
    float *fPtr;
    double *dPtr;

    printf("\nPointer to Character takes %d bytes.",sizeof(cPtr));
    printf("\nPointer to Integer takes %d bytes.",sizeof(iPtr));
    printf("\nPointer to Float takes %d bytes.",sizeof(fPtr));
    printf("\nPointer to Double takes %d bytes.",sizeof(dPtr));

    getch();
    return 0;
}
