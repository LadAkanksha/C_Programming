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
            int i=0;
            struct student std[3];
            for(i=1 ; i<=3 ;i++)
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

                for( i=1 ; i<=3 ;i++)
                {
                    printf("\n\n%d Student Details:\n\t\tRoll No.:%d\n\t\tName:%s\n\t\tCity:%s\n\t\tPercentage:%0.2f\n",i,std[i].Rollno,std[i].Name,std[i].City,std[i].Per);
                }

            getch();
            return 0;
    }
