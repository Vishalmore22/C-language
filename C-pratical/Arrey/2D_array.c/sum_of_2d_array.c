#include <stdio.h>
// WAP to find sum of 2D array
void main()
{
    int r, c, sum = 0;

    printf("Enetr size of array :");
    scanf("%d", &r);

    printf("Enetr size of array :");
    scanf("%d", &c);

    int a[r][c];

    printf("\nEnter element of a array :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at [%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("sum is %d", sum);

    
}