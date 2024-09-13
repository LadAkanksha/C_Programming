/////////////////////////////////////////////////////////////
///                                                       ///
///                                                       ///
///             Student Information                       ///
///                                                       ///
///                                                       ///
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud
{
    int Roll_no;
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

    Obj.Roll_no  = 180;
    strcpy(Obj.Name,"Atharv Lad");
    Obj.Phy = 85;
    Obj.Chem = 70;
    Obj.Bio = 91;
    Obj.Total = Obj.Bio+Obj.Chem+Obj.Phy;
    Obj.Per = (Obj.Total/3);

    printf("\n------------- Student Information --------------");
    printf("\nRoll No.  : %d",Obj.Roll_no);
    printf("\nName      : %s",Obj.Name);
    printf("\nPhysics   : %d",Obj.Phy);
    printf("\nChemistry : %d",Obj.Chem);
    printf("\nBiology   : %d",Obj.Bio);
    printf("\nTotal     : %0.0f",Obj.Total);
    printf("\nPercentage: %0.2f %",Obj.Per);
    printf("\n\n Thanks For Using Our Application!!!");

    getch();
    return 0;
}
