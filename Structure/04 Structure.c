#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 5
int main()
{
        struct student
        {
            int Rollno;
            char Name[20];
            char City[10];
            float Per;
        };

        int i=0;
        struct student std[size];
        for(i=1 ; i<=size ;i++)
        {
             printf("\nEnter Roll No.:");
             scanf("%d",&std[i].Rollno);
             fflush(stdin);

             printf("\nEnter Name :");
             scanf("%[^\n]",&std[i].Name);
             fflush(stdin);

             printf("\nEnter City name :");
             scanf("%[^\n]",&std[i].City);

             printf("\nEnter percentage :");
             scanf("%f",&std[i].Per);
        }
        getch();
        system("cls");

            for( i=1 ; i<=size ;i++)
            {
                printf("\n\n%d Student Details:\n\tRoll No.:%d\n\tName:%s\n\tCity:%s\n\tPercentage:%0.2f\n",i,std[i].Rollno,std[i].Name,std[i].City,std[i].Per);
            }

        getch();
        return 0;
}
