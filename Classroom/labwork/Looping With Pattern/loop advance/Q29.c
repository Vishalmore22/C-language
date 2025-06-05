#include<stdio.h>
// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *

void main()
{
    int i,j;

    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if ((i==1||i==7)&&j==1)
            {
                printf("* ");
            }
            else if ((i==2||i==6)&&j==2)
            {
                printf("* ");
            }
            else if ((i==3||i==5)&&j==3)
            {
                printf("* ");
            }
            else if ((i==4)&&j==4)
            {
                printf("* ");
            }
            else if ((i==3||i==5)&&j==5)
            {
                printf("* ");
            }
            else if ((i==2||i==6)&&j==6)
            {
                printf("* ");
            }
            else if ((i==1||i==7)&&j==7)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}