///Write program to accept string from user and reverse last word of string.
///     I/P => ABCD RPGS TLNPQ
///     O/P => ABCD RPGS QPNLT


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[] = "ABCD RPGS TLNPQ" , cStr2[30]="";
    int i = 0 , j = 0, length = 0;

    printf("\nThe Original String is %s",cStr1);

    while(cStr1[i] != '\0')
    {
        ++i;
    }
    --i;

    while( cStr1[i] != ' ' )
    {
        cStr2[j] = cStr1[i];
        cStr1[i] = '\0';
        j++;
        --i;
    }

    strcat(cStr1,cStr2);

    printf("\n\nContent in cStr2 String is %s.",cStr2);
    printf("\nAfter Reversing Last Word The String Is -->\n\n\t %s",cStr1);
    getch();
    return 0;
}
