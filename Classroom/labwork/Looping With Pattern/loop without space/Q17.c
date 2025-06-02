#include <stdio.h>
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
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