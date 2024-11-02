////////////////////////////////////////////////////////////////////////////////////////////////
///Write program to accept string from user and reverse word of string whose length is even. ///
///     I/P => ABCD RPGS TLNPQ                                                               ///
///     O/P => DCBA SGPR TLNPQ                                                               ///
////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[100] = "" , cStr2[100] = "";
    int i = 0 , j = 0, k = 0, spt = 0 , length = 0 , lpt = 0 , cnt = 0;

    printf("\nEnter A String : ");
    gets(cStr1);

    length = strlen(cStr1);             ///To calculate String length

    cStr1[length]=' ';                  ///Insert space after last element

    while(cStr1[i] != '\0')             /// Loop iterate until string is not complete
    {
       if(cStr1[i] == ' ')              ///Logic for after f space in String
       {
           lpt = i-1;
           while(spt <= lpt)            /// Loop for getting each word's count
           {
               lpt--;
               cnt++;
           }

           k = i-1;
           if(cnt % 2 == 0)             /// Logic for finding even length word
           {
               while(k >= spt)          ///Loop for Reverse Each even Word
               {
                   cStr2[j] = cStr1[k];
                   j++;
                   k--;
               }
           }
            else
            {
                while(spt <= k)          /// Loop for odd length word
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
    }
    printf("\n\nThe Original String Is -->\n\n\n\t\t %s",cStr1);
    printf("\n\nAfter Reversing Even Word In The String Is -->\n\n\n\t\t %s",cStr2);

    getch();
    return 0;
}
