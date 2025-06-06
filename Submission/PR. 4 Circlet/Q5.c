#include <stdio.h>
//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1
void main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        
        for (int m = 4; m >= i; m--)
        {
            printf("%d ", m);
        }
        printf("\n");
    }
}

