/////////////////////////////////////////////////////////////
///                                                       ///
///                                                       ///
///                 Student Information                   ///
///                                                       ///
///                                                       ///
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 3

struct Stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Bio;
    float Total;
    float Per;
};

void Accept_Details(struct Stud*);
void Display_Details(struct Stud*);

int main()
{
    struct Stud Obj[SIZE];
    int i = 0 ;

    for(i = 1 ; i <= SIZE ; i++)
    {
        printf("\n--------- Enter Student %d Details ---------\n",i);
        Accept_Details(&Obj[i]);
    }
    for(i = 1 ; i <= SIZE ; i++)
    {
        printf("\n\n--------- Student %d Information ---------\n",i);
       Display_Details(&Obj[i]);
    }

    printf("\n\n Thanks For Using Our Application!!!");
    getch();
    return 0;
}

void Accept_Details(struct Stud *Optr)
{
        printf("\nEnter Roll No. : ");
        scanf("%d",&Optr->Roll_No);

        fflush(stdin);
        printf("\nEnter Name : ");
        gets(Optr->Name);

        printf("\nEnter Physics Marks : ");
        scanf("%d",&Optr->Phy);

        printf("\nEnter Chemistry Marks : ");
        scanf("%d",&Optr->Chem);

        printf("\nEnter Biology Marks : ");
        scanf("%d",&Optr->Bio);

        Optr->Total = Optr->Phy + Optr->Chem + Optr->Bio;
        Optr->Per = Optr->Total/3;
        return;
}
void Display_Details(struct Stud *Optr)
{
    printf("\nRoll No.  : %d",Optr->Roll_No);
    printf("\nName      : %s",Optr->Name);
    printf("\nPhysics   : %d",Optr->Phy);
    printf("\nChemistry : %d",Optr->Chem);
    printf("\nBiology   : %d",Optr->Bio);
    printf("\nTotal     : %0.0f",Optr->Total);
    printf("\nPercentage: %0.2f%",Optr->Per);
    return;
}
