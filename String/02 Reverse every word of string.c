///Write program to accept string from user and reverse every word of string.
///     I/P => ABCD RPGS TLNPQ
///     O/P => DCBA SGPR QPNLT

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[20] = "" , cStr2[30] = "";
    int i = 0 , j = 0, spt = 0 , k = 0,length = 0;
    printf("\nEnter String : ");
    gets(cStr1);

    length = strlen(cStr1);
    cStr1[length] = ' ';

    while(cStr1[i] != '\0')
    {
       if(cStr1[i] == ' ')
       {
           k = i-1;
           while(k >= spt)
           {
               cStr2[j] = cStr1[k];
               j++;
               k--;
           }
           cStr2[j]= ' ';
           j++;
           spt = j;
       }
       ++i;
    }

    printf("\n\nThe Original String Is -->\n\n\t\t %s",cStr1);
    printf("\n\nAfter Reversing The String Is -->\n\n\t\t %s",cStr2);
    getch();
    return 0;
}
