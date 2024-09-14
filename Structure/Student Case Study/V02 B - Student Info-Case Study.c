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
    int i = 0;
    struct Stud Obj[3];

    for(i = 1 ; i <= 3 ; i++)
    {
        printf("\n----------- Enter %d Student Details -----------",i);
        printf("\nEnter Roll No. : ");
        scanf("%d",&Obj[i].Roll_No);
        fflush(stdin);
        printf("\nEnter Name : ");
        gets(Obj[i].Name);

        printf("\nEnter Physics Marks : ");
        scanf("%d",&Obj[i].Phy);

        printf("\nEnter Chemistry Marks : ");
        scanf("%d",&Obj[i].Chem);

        printf("\nEnter Biology Marks : ");
        scanf("%d",&Obj[i].Bio);

        Obj[i].Total = Obj[i].Phy + Obj[i].Chem + Obj[i].Bio;
        Obj[i].Per = Obj[i].Total/3;
        fflush(stdin);
    }

    for(i = 1 ; i <= 3 ; i++)
    {
        printf("\n--------------Student %d Info-----------------",i);
        printf("\nRoll No.  : %d",Obj[i].Roll_No);
        printf("\nName      : %s",Obj[i].Name);
        printf("\nPhysics   : %d",Obj[i].Phy);
        printf("\nChemistry : %d",Obj[i].Chem);
        printf("\nBiology   : %d",Obj[i].Bio);
        printf("\nTotal     : %0.0f",Obj[i].Total);
        printf("\nPercentage: %0.2f%",Obj[i].Per);
    }

    printf("\n\n Thanks For Using Our Application!!!");
    getch();
    return 0;
}
