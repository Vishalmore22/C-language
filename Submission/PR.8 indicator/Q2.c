#include <stdio.h>

void cube(int *p, int rows, int cols)
{
    for (int i = 0; i < rows * cols; i++)
    {
        *(p + i) = (*(p + i)) * (*(p + i)) * (*(p + i));
    }
}

void main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], r, c);

    printf("Cubed elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
