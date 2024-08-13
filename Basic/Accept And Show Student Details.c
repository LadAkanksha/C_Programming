///Program To Accept Student Details From User As Student Name , Roll Number , Course , City And Display Information


#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] ={} , Course[10]={} , City[10]={};
    int R_No =0;

    printf("\nEnter Your Name : ");
    scanf("%s",&Name);

    printf("\nEnter Your Roll No. : ");
    scanf("%d",&R_No);

    printf("\nEnter Your Course Name : ");
    scanf("%s",&Course);

    printf("\nEnter Your City Name : ");
    scanf("%s",&City);

    printf("\n----- Student Details -----\n");
    printf("\nName : %s \nRoll No. : %d \nCourse : %s\nCity : %s",Name , R_No,Course,City);
    printf("\n---------------------------\n");

    getch();
    return 0;
}
