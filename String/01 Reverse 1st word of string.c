///Write program to accept string from user and reverse 1st word of string.

///        I/P => ABCD EFGH LM
///        O/P => DCBA EFGH LM


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[] = "ABCD EFGH LM" , cStr2[30]="";
    int i = 0 , j = 0, length = 0;

    while(cStr1[i] != ' ')
    {
        ++i;
    }
    length = i;
    --i;
    while( i >= 0 )
    {
        cStr2[j] = cStr1[i];
        j++;
        i--;
    }
    while( cStr1[length] != '\0' )
    {
        cStr2[j] = cStr1[length];
        j++;
        length++;
    }
    printf("\nThe Original String is %s",cStr1);
    printf("\n\nAfter Reversing First Word The String Is -->\n\n\t\t%s",cStr2);
    getch();
    return 0;
}
