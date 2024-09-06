#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
   int RollNo;
   char Name[12];
   char City[10];
   float Per;
};
int main()
{
  struct student Stud1,Stud2,Stud3;

          printf("\nEnter roll no. =>");
          scanf("%d",&Stud1.RollNo);

           fflush(stdin);
          printf("\nEnter Name =>");
          scanf("%[^\n]",&Stud1.Name);

          fflush(stdin);
          printf("\nEnter City name =>");
          scanf("%[^\n]",&Stud1.City);

          printf("\nEnter percentage =>");
          scanf("%f",&Stud1.Per);

          printf("\nEnter roll no. =>");
          scanf("%d",&Stud2.RollNo);

           fflush(stdin);
          printf("\nEnter Name =>");
          scanf("%[^\n]",&Stud2.Name);

          fflush(stdin);
          printf("\nEnter City name =>");
          scanf("%[^\n]",&Stud2.City);

          printf("\nEnter percentage =>");
          scanf("%f",&Stud2.Per);

          printf("\nEnter roll no. =>");
          scanf("%d",&Stud3.RollNo);

           fflush(stdin);
          printf("\nEnter Name =>");
          scanf("%[^\n]",&Stud3.Name);

          fflush(stdin);
          printf("\nEnter City name =>");
          scanf("%[^\n]",&Stud3.City);

          printf("\nEnter percentage =>");
          scanf("%f",&Stud3.Per);

          printf("\n\n1st Student Details\n\tRoll No:%d\n\tName:%s\n\tCity:%s\n\tPercentage:%f",Stud1.RollNo,Stud1.Name,Stud1.City,Stud1.Per);
          printf("\n\n2nd Student Details\n\tRoll No:%d\n\tName:%s\n\tCity:%s\n\tPercentage:%f",Stud2.RollNo,Stud2.Name,Stud2.City,Stud2.Per);
          printf("\n\n3rd Student Details\n\tRoll No:%d\n\tName:%s\n\tCity:%s\n\tPercentage:%f",Stud3.RollNo,Stud3.Name,Stud3.City,Stud3.Per);

    getch();
    return 0;
}
