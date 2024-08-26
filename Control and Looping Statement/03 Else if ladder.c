///Display result with grades using else-if ladder statement.

#include<stdio.h>
#include<conio.h>

int main()
{

        float per=0;

        printf("\nEnter your percentage in recent examination :");
        scanf("%f",&per);

        printf("\n========== Result ==========\n");

        if(per >= 80)
        {
            printf("\nYou've got 'Grade A'.");
        }
        else if(per >= 70 && per<80)
        {
            printf("\nYou've got 'Grade B'");
        }
        else if( per >=55 && per<70 )
        {
            printf("\nYou've got 'Grade C'");
        }
        else if(per>=35 && per<55)
        {
            printf("\nYou've got 'Grade D'");
        }
        else
        {
            printf("\nYou are failed");
        }

        printf("\n\n========== Thanks ==========");
        getch();
        return 0;
}
