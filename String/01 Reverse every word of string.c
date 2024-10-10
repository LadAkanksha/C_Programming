///Write program to reverse every word of string.
///     I/P => ABCD RPGS TLNPQ
///     O/P => DCBA SGPR QPNLT
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[20] = "ABCD EFGH IJK" , cStr2[30] = "";
    int i = 0 , j = 0, spt = 0 , k = 0;

    while(cStr1[i] != '\0')
        {
            ++i;
        }
        cStr1[i]=' ';
        i =0;

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
    printf("\n\nThe Original String Is -->\n\n\t %s",cStr1);
    printf("\n\nAfter Reversing The String Is -->\n\n\t %s",cStr2);
    getch();
    return 0;
}
