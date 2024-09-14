/////////////////////////////////////////////////////////////
///                                                       ///
///                                                       ///
///             Student Information                       ///
///                                                       ///
///                                                       ///
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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

int main()
{
    struct Stud Obj;

    printf("\n----------- Enter Details -----------");
    printf("\nEnter Roll No. : ");
    scanf("%d",&Obj.Roll_No);
    fflush(stdin);
    printf("\nEnter Name : ");
    gets(Obj.Name);

    printf("\nEnter Physics Marks : ");
    scanf("%d",&Obj.Phy);

    printf("\nEnter Chemistry Marks : ");
    scanf("%d",&Obj.Chem);

    printf("\nEnter Biology Marks : ");
    scanf("%d",&Obj.Bio);

    Obj.Total = Obj.Phy + Obj.Chem + Obj.Bio;
    Obj.Per = Obj.Total/3;

    printf("\n----------------------------------------");
    printf("\nRoll No. : %d",Obj.Roll_No);
    printf("\nName     : %s",Obj.Name);
    printf("\nPhysics  : %d",Obj.Phy);
    printf("\nChemistry: %d",Obj.Chem);
    printf("\nBiology  : %d",Obj.Bio);
    printf("\nTotal    : %0.0f",Obj.Total);
    printf("\nPercentage: %0.2f%",Obj.Per);
    printf("\n----------------------------------------");

    printf("\n\n Thanks For Using Our Application!!!");
    getch();
    return 0;
}
