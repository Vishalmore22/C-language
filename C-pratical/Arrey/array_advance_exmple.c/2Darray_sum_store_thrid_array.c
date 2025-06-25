#include <stdio.h>
// Write a Program to perform the addition operation of two 2D arrays & store it in another array
// Keep in mind that both array sizes must be the same
void main()
{
    int r, c, i, j;

    printf("enter element of r array :");
    scanf("%d", &r);

    printf("enter element of c array :");
    scanf("%d", &c);
    // array a
    int a[r][c];

    printf("Enter elements of a array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nthe element of array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // array b
    int b[r][c];

    printf("\nEnter elements of b array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\nthe element of array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    // addition of two array
    int sum[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
             sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // print array
    printf("sum of two array :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           printf(" %d ",sum[i][j]); 
        }
        printf("\n");
    }
}