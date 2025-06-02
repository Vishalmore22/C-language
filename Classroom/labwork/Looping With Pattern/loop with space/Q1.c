#include <stdio.h>
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
       
        for (k = i; k < 5; k++)
        {
            printf("  ");
        }
     
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}