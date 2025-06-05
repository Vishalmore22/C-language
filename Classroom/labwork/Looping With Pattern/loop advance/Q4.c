#include<stdio.h>
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
void main()
{
    int i,j,m,n;

        for ( i = 1; i <= 5; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                printf("%d ",j);
            }
            for ( m = 4; m >= i; m--)
            {
                printf("    ");
            }
            for ( n = i; n >= 1; n--)
            {
                printf("%d ",n);
            }
            printf("\n");
        }
        
}