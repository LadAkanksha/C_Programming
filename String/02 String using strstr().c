// C program to illustrate strstr()

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char cStr1[40] = "";
	char cStr2[40] = "";
	char *cPtr;

	printf("\nEnter Your Main String : ");
	gets(cStr1);

    printf("\nEnter String For Find Sub-String : ");
	gets(cStr2);

	cPtr = strstr(cStr1, cStr2);

	if(cPtr)
    {
        printf("\nString Is Found.\nNow The String Is Modify");
        strcpy(cPtr , "Hello User");
        printf("\n%s",cStr1);
    }
    else
    {
        printf("\nString Is Not Found !!!");
    }
    getch();
	return 0;
}
