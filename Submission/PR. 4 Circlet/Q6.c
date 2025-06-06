#include <stdio.h>
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
         for (k = 4; k >= i; k--)
        {
            printf("    ");
        }
        for (int l = i ; l >= 1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }

        
}