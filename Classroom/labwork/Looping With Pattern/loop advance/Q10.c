#include<stdio.h>
// * * * *
// *
// *
// * * * *
// *
// *
// * * * *
void main()
{
    int i,j;

    for ( i = 1; i <= 7; i++)//row
    {
        for ( j = 1; j <= 4; j++)//colm
        {
            if(i==1||i==4||i==7||j==1)
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
