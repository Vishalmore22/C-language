#include <stdio.h>
// 0
// 0 1
// 0 1 0
// 0 1 0 1
// 0 1 0 1 0

void main()
{
    int i, j;

    for (i = 2; i <= 6; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (j % 2 == 0)
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