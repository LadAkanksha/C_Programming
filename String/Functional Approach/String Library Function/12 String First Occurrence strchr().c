
/// strchr() - Finds the first occurrence of a character ch the string s
/// this Function return address of that character in string, so it require character type pointer

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[25] = "";
    char ltr = 'P' , *ptr;

    printf("\nEnter String : ");
    gets(cSrc);

    printf("\n\t%s\n",cSrc);

    ptr = strchr(cSrc,ltr);

    if(ptr == NULL){
        printf("\nCharacter Not Available in String");
        return;
    }
    printf("\nFirst Occurrence of %c in %s at  = %d",ltr,cSrc,ptr-cSrc);

    getch();
    return 0;
}
