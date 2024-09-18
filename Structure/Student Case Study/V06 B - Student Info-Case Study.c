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
int Scnt = 0;
void Create_Batch(struct Stud **);
void Accept_Details(struct Stud*);
void Display_Details(struct Stud*);

int main()
{
    struct Stud *Sptr = NULL;

    Create_Batch(&Sptr);

    Accept_Details(&Sptr);

    Display_Details(&Sptr);


    printf("\n\n Thanks For Using Our Application!!!");
    getch();
    return 0;
}
void Create_Batch(struct Stud **SPptr)
{
    printf("\nHow Many Student's Information You Would Like To Enter : ");
    scanf("%d",&Scnt);

    *SPptr = (struct Stud*)malloc(Scnt * sizeof(struct Stud));
    return;
}
void Accept_Details(struct Stud *Optr)
{
    int i = 0;
    for(i = 1 ; i <= Scnt ; i++)
    {
        printf("\n--------- Enter Student %d Details ---------\n",i);
        printf("\nEnter Roll No. : ");
        scanf("%d",&Optr[i].Roll_No);

        fflush(stdin);
        printf("\nEnter Name : ");
        gets(Optr[i].Name);

        printf("\nEnter Physics Marks : ");
        scanf("%d",&Optr[i].Phy);

        printf("\nEnter Chemistry Marks : ");
        scanf("%d",&Optr[i].Chem);

        printf("\nEnter Biology Marks : ");
        scanf("%d",&Optr[i].Bio);

        Optr[i].Total = Optr[i].Phy + Optr[i].Chem + Optr[i].Bio;
        Optr[i].Per = Optr[i].Total/3;
        }
    return;
}

void Display_Details(struct Stud *Optr)
{
    int i = 0;
    for(i = 1 ; i <= Scnt ; i++)
    {
        printf("\n\n--------- Student %d Information ---------\n",i);
        printf("\nRoll No.  : %d",Optr[i].Roll_No);
        printf("\nName      : %s",Optr[i].Name);
        printf("\nPhysics   : %d",Optr[i].Phy);
        printf("\nChemistry : %d",Optr[i].Chem);
        printf("\nBiology   : %d",Optr[i].Bio);
        printf("\nTotal     : %0.0f",Optr[i].Total);
        printf("\nPercentage: %0.2f%",Optr[i].Per);
    }
    return;
}
