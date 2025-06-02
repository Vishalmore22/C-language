#include<stdio.h>
// 1 0 1 0 1
// 0 1 0 1
// 1 0 1
// 0 1
// 1

void main()
{
    int i,j;

    for ( i = 5; i >=1; i--)
    {
        for ( j = i; j >=1; j--)
        {
            if(j%2==0)
            {
                printf("0 ");
            }            
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    
}