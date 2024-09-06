#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    struct student
    {
        int Rollno;
        char Name[20];
        char City[10];
        float Per;
    };
    struct student std1,std2,std3 = {13,"Sayli","Patan",48.60};

        std2.Rollno=12;
        strcpy(std2.Name,"Supriya");
        strcpy(std2.City,"Pune");
        std2.Per=79.45;

        printf("\nEnter Roll No.:");
        scanf("%d",&std1.Rollno);
        fflush(stdin);

        printf("\nEnter Name :");
        scanf("%[^\n]",&std1.Name);
        fflush(stdin);

        printf("\nEnter City name :");
        scanf("%[^\n]",&std1.City);

        printf("\nEnter percentage :");
        scanf("%f",&std1.Per);
        system("cls");

    printf("\n\t---- 1 Student information ----\n");
    printf("\n\t\tRoll No.:%d\n\t\tName:%s\n\t\tCity:%s\n\t\tPercentage:%0.2f\n",std1.Rollno,std1.Name,std1.City,std1.Per);
    printf("\n\t---- 2 Student information ----\n");
    printf("\n\t\tRoll No.:%d\n\t\tName:%s\n\t\tCity:%s\n\t\tPercentage:%0.2f\n",std2.Rollno,std2.Name,std2.City,std2.Per);
    printf("\n\t---- 3 Student information ----\n");
    printf("\n\t\tRoll No.:%d\n\t\tName:%s\n\t\tCity:%s\n\t\tPercentage:%0.2f\n",std3.Rollno,std3.Name,std3.City,std3.Per);
}
