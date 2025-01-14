
/// Use of Const qualifier with pointer type

#include<stdio.h>
#include<conio.h>

int main()
{
///**********   1)  A)   Pointer to an Integer Constant **********

    int P1 = 10;
    const int *Ptr1 = &P1;                                              ///    Pointer to an Integer Constant
    //*Ptr1 = 50;                                                       ///    NOT ALLOWED
    printf("\nThe Value of Pointed Object is %d.",*Ptr1);               ///    The pointer Ptr1 is Constant and Can't Modified.

///**********   1)  B)  Pointer to an Integer Constant  **********

    int P2 = 20;
    int const *Ptr2 = &P2;                                              ///    Pointer to an Integer Constant(Same as 1)
    //Ptr2 = 100;                                                       ///    NOT ALLOWED
    printf("\nThe Value of Pointed Object is %d.",*Ptr2);               ///    The pointer Ptr2 is Constant and Can't Modified.

///**********   3)  Constant Pointer to an Integer  **********

    int P3 = 30;
    int *const Ptr3 = &P3;                                              ///    Constant Pointer to an Integer
    *Ptr3 = &P3;
    printf("\nThe Value of Pointed Object is %d.",*Ptr3);               ///    The pointer Ptr3 is Constant and Can modified but point the same object throughout.

    *Ptr3 = &P2;
    printf("\nThe Value of Pointed Object is %d.",*Ptr3);

///**********   4)  A)  Constant Pointer to an Constant Integer **********

    int P4 = 40;
    const int *const Ptr4 = &P4;                                        ///    Constant Pointer to an Constant Integer
    //*Ptr4 = 200;                                                      ///    NOT ALLOWED
    //*Ptr4 = &P3;                                                      ///    NOT ALLOWED
    printf("\nThe Value of Pointed Object is %d.",*Ptr4);               ///    The pointer Ptr4 is Constant and Can't Modified.
                                                                        ///    Both Pointer and th Objet to wich pointer points are constant

///**********   4)  B)  Constant Pointer to an Integer Constant **********

    int P5 = 50;
    int const *const Ptr5 = &P5;                                        ///    Constant Pointer to an Constant Integer(Same as 4)
    //*Ptr5 = 200;                                                      ///    NOT ALLOWED
    //*Ptr5 = &P3;                                                      ///    NOT ALLOWED
    printf("\nThe Value of Pointed Object is %d.",*Ptr5);               ///    The pointer Ptr2 is Constant and Can't Modified.
                                                                        ///    Both Pointer and th Object to which pointer points are constant

    getch();
    return 0;
}
