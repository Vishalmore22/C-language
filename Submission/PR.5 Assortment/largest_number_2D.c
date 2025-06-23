#include <stdio.h>

void main()
{
    int rows, cols, i, j;
    int max;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("i[%d][%d]",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    max = a[0][0];

    // Find largest element
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element in the array is: %d\n", max);
}
