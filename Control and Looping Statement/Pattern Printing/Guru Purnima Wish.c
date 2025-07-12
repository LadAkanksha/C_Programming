
#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , Size = 0;
    UP:
    printf("\n\t\t\t\t\tEnter Odd Size To Wish Your Teacher : ");
    scanf("%d" , &Size);

    if(Size%2 == 0)
    {
        printf("\n\nPlease Enter Odd Size !!!!\n");
        printf("\n----------------------------\n\n");
        printf("Press Any Key To Go Ahead !!!\n\n");
        getch();
        system("Cls");
        goto UP;

    }
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");



    printf("\033[36m");
    printf("\n");
    for(i = 1 ; i<= Size ; ++i)
    {

/// G
        for(j = 1 ; j <= Size ; ++j)
        {
            if(j == 1 || i == 1 || i == Size || ((i == (Size/2)+1) && i <= j) || ((j == Size) && i >= (Size/2)+1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");

/// U
        for( j = 1 ; j <= Size ; j++ )
        {
            if((j == 1 &&  i+j <= Size) || ( j == Size && i != j  || ( i == Size && i+j > Size+1 && i != j)) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// R
        for( j = 1 ; j <= Size ; j++)
        {
            if( i == 1 || i == (Size/2)+1 || j == 1 || ( j == Size && i <= (Size/2)+1) || (i == j && i > (Size/2)+1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// U
        for( j = 1 ; j <= Size ; j++ )
        {
            if((j == 1 &&  i+j <= Size) || ( j == Size && i != j  || ( i == Size && i+j > Size+1 && i != j)) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t\t");
 /// ---
        for( j = 1 ; j <= Size ; j++ )
        {
            if(i == (Size/2)+1 )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n");

    for(i = 1 ; i <= Size ; ++i)
    {

/// P
      for(j = 1 ; j<= Size ; ++j)
            {
                if( i == 1 || i == (Size/2)+1 || (j == Size && i+j >= Size+1 && i <= (Size/2)+1 ) || j == 1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\t");
/// o
            for(j = 1 ; j<= Size ; ++j)
        {
            if(( j== 1 && j != i && i+j < Size+1) || (i == 1 && i != j && i+j < Size+1) || (j == Size && i+j > Size+1 && i != j) || ( i == Size && i+j > Size+1 && i != j ))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// U
        for( j = 1 ; j <= Size ; j++ )
        {
            if((j == 1 &&  i+j <= Size) || ( j == Size && i != j  || ( i == Size && i+j > Size+1 && i != j)) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");

/// R
        for( j = 1 ; j <= Size ; j++)
        {
            if( i == 1 || i == (Size/2)+1 || j == 1 || ( j == Size && i <= (Size/2)+1) || (i == j && i > (Size/2)+1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// N
        for(j = 1 ; j<= Size ; ++j)
        {
            if(j == 1 || j == Size || i == j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// I
        for( j = 1 ; j <= Size ; j++ )
        {
            if( i == 1 || i == Size || j == (Size+1)/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// M
        for(j = 1 ; j<= Size ; ++j)
        {
            if(  j == 1 || j == Size || (i+j == Size+1 && i <= j) || ( i == j && i <= (Size+1)/2))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// E
        for(j = 1 ; j <= Size ; ++j)
        {
            if( i == 1 || i == (Size/2)+1 || i == Size || j == 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// C
        for(j = 1 ; j<= Size ; ++j)
        {
            if( (i== 1 && i != j) || (j == 1 && j != i &&  i+j != Size+1) || (i == Size && i+j > Size + 1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// H
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// Y
        for(j = 1 ; j<= Size ; ++j)
        {
            if((i == j && i+j <= Size+1) || (i+j == Size+1  && i <= j) || (j == (Size/2)+1 && j <= i))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");

/// A
        for(j = 1 ; j<= Size ; ++j)
        {
            if(j == 1 || j == Size || i == 1 || i == (Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
     }
     printf("\n\n\n\n");

///-------------------------------------------------------------------

    for(i = 1 ; i <= Size ; ++i)
    {
/// H
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// A
        for(j = 1 ; j<= Size ; ++j)
        {
            if(j == 1 || j == Size || i == 1 || i == (Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// R
        for( j = 1 ; j <= Size ; j++)
        {
            if( i == 1 || i == (Size/2)+1 || j == 1 || ( j == Size && i <= (Size/2)+1) || (i == j && i > (Size/2)+1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// D
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || (i== 1 && i+j != Size+1) || (j == Size && j != i &&  i+j > Size+1) || (i == Size && i != j))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// I
        for( j = 1 ; j <= Size ; j++ )
        {
            if( i == 1 || i == Size || j == (Size+1)/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// K
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || ((j <=(Size/2)+1) && ((i+j == (Size/2)+2) || (i - j == (Size / 2 )))))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n");


    for(i = 1 ; i <= Size ; ++i)
    {
/// S
        for( j = 1 ; j <= Size ; j++ )
        {
            if( i == 1 || i == Size || i == (Size+1)/2 || ( j == 1 && i <= (Size+1)/2) || ( j == Size && i >= (Size+1)/2) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// H
         for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// U
        for( j = 1 ; j <= Size ; j++ )
        {
            if((j == 1 &&  i+j <= Size) || ( j == Size && i != j  || ( i == Size && i+j > Size+1 && i != j)) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// B
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || (i== 1 && i+j != Size+1) || (j == Size && j != i &&  i+j > Size+1) || (i == Size && i != j) || i == (Size+1)/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// H
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// E
        for(j = 1 ; j <= Size ; ++j)
        {
            if( i == 1 || i == (Size/2)+1 || i == Size || j == 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// C
        for(j = 1 ; j<= Size ; ++j)
        {
            if( (i== 1 && i != j) || (j == 1 && j != i &&  i+j != Size+1) || (i == Size && i+j > Size + 1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// H
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// H
        for(j = 1 ; j<= Size ; ++j)
        {
            if( j == 1 || j == Size || i==(Size/2)+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");
/// Y
        for(j = 1 ; j<= Size ; ++j)
            {
                if((i == j && i+j <= Size+1) || (i+j == Size+1  && i <= j) || (j == (Size/2)+1 && j <= i))
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\t");
/// A

            for(j = 1 ; j<= Size ; ++j)
            {
                if(j == 1 || j == Size || i == 1 || i == (Size/2)+1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n\n");
///--------------------

    for( i = 1 ; i <= Size ; i++ )
    {

/// S

        for( j = 1 ; j <= Size ; j++ )
        {
            if( i == 1 || i == Size || i == (Size+1)/2 || ( j == 1 && i <= (Size+1)/2) || ( j == Size && i >= (Size+1)/2) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");


///  I

        for( j = 1 ; j <= Size ; j++ )
        {
            if( i == 1 || i == Size || j == (Size+1)/2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\t");


///  R
        for( j = 1 ; j <= Size ; j++ )
        {
            if(i == 1 || i == (Size/2)+1 || j == 1 || ( j == Size && i <= (Size/2)+1) || (i == j && i > (Size/2)+1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
     printf("\n\n\n");

    printf("\033[0m");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    getch();
    return 0;
}
