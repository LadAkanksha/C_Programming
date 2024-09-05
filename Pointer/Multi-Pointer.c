#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21;
    int *p = &iNo;
    int **q = &p;
    int ***m = &q;
    int ****x = &m;
    int *****r = &x;

    printf("\n%d",iNo);
    printf("\n%d",&iNo);
    printf("\n%d",&p);
    printf("\n%d",*p);
    printf("\n%d",**r);
    printf("\n%d",**(&m));
    printf("\n%d",&(**r));
    printf("\n%d",****r);
    printf("\n%d",*****r);
    printf("\n%d",*(&q));

    getch();
    return 0;
}
