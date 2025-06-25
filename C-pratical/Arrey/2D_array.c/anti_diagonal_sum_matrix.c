#include <stdio.h>
// 00 01 02  i and j is same (i==j) then print diagonal
// 10 11 12
// 20 21 22  i and j sum of 2 (i+J==2)then print ani=diagonal
void main()
{
    int r, c, i, j, sum = 0;

    printf("enter r elemments of array : ");
    scanf("%d", &r);

    printf("enter c elemments of array : ");
    scanf("%d", &c);

    int a[r][c];

    printf("2D element of array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nthe 2D array \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // anti diagonal sum
    for (i = 0, j = c - 1; i < r && j >= 0; i++, j--)
    {
        sum = sum + a[i][j];
    }

    printf("the sum of anti-diagonal element is %d", sum);
}
