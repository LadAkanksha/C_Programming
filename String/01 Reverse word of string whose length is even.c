///Write program to accept string from user and reverse word of string whose length is even.
///     I/P => ABCD RPGS TLNPQ
///     O/P => DCBA SGPR TLNPQ
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[20] = "ABC EFGH IJK" , cStr2[30] = "";
    int i = 0 , j = 0, k = 0, spt = 0 , length = 0 , lpt = 0 , cnt = 0;

    length = strlen(cStr1);         ///To Calculate String Length

    cStr1[length]=' ';              ///Insert Space after Last Element

    while(cStr1[i] != '\0')         /// Loop iterate until string is not complete
    {
       if(cStr1[i] == ' ')          ///Logic for after Finding space in String
       {
           lpt = i-1;
           while(spt <= lpt)
           {
               lpt--;
               cnt++;
           }

           k = i-1;
           if(cnt % 2 == 0)
           {
                                ///for retrive element before space
               while(k >= spt)          ///Loop for Reverse Each Word
               {
                   cStr2[j] = cStr1[k];
                   j++;
                   k--;
               }
           }
            else
            {
                while(spt <= k)
                {
                    cStr2[j] = cStr1[spt];
                    j++;
                    spt++;
                }
            }

           cStr2[j]= ' ';
           j++;
           spt = j;
           cnt = 0;
       }
       ++i;
      /// sLength++;
    }
    printf("\n\nThe Original String Is -->\n\n\t %s",cStr1);
    printf("\n\nAfter Reversing The String Is -->\n\n\t %s",cStr2);
    getch();
    return 0;
}
