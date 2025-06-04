#include <stdio.h>

void main()
{
    int i, j, n;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n == 8)
    {
        for (i = 1; i <= 15; i++)
        {
            for (j = 1; j <= 15; j++)
            {
                if ((i == 8) && j == 1)
                {
                    printf("* ");
                }
                else if ((i == 7 || i == 9) && j == 2)
                {
                    printf("* ");
                }
                else if ((i == 6 || i == 10) && j == 3)
                {
                    printf("* ");
                }
                else if ((i == 5 || i == 11) && j == 4)
                {
                    printf("* ");
                }
                else if ((i == 4 || i == 12) && j == 5)
                {
                    printf("* ");
                }
                else if ((i == 3 || i == 13) && j == 6)
                {
                    printf("* ");
                }
                else if ((i == 2 || i == 14) && j == 7)
                {
                    printf("* ");
                }
                else if ((i == 1 || i == 15) && j == 8)
                {
                    printf("* ");
                }
                else if ((i == 2 || i == 14) && j == 9)
                {
                    printf("* ");
                }
                else if ((i == 3 || i == 13) && j == 10)
                {
                    printf("* ");
                }
                else if ((i == 4 || i == 12) && j == 11)
                {
                    printf("* ");
                }
                else if ((i == 5 || i == 11) && j == 12)
                {
                    printf("* ");
                }
                else if ((i == 6 || i == 10) && j == 13)
                {
                    printf("* ");
                }
                else if ((i == 7 || i == 9) && j == 14)
                {
                    printf("* ");
                }
                else if ((i == 8 || i == 8) && j == 15)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else if (n == 5)
    {
        for (i = 1; i <= 11; i++)
        {
            for (j = 1; j <= 11; j++)
            {
                if ((i == 1 || i == 11) && j == 6)
                {
                    printf("* ");
                }
                else if ((j == 5 || j == 7) && i == 2)
                {
                    printf("* ");
                }
                else if ((j == 4 || j == 8) && i == 3)
                {
                    printf("* ");
                }
                else if ((j == 3 || j == 9) && i == 4)
                {
                    printf("* ");
                }
                else if ((j == 2 || j == 10) && i == 5)
                {
                    printf("* ");
                }
                else if ((j == 1 || j == 11) && i == 6)
                {
                    printf("* ");
                }
                else if ((j == 2 || j == 10) && i == 7)
                {
                    printf("* ");
                }
                else if ((j == 3 || j == 9) && i == 8)
                {
                    printf("* ");
                }
                else if ((j == 4 || j == 8) && i == 9)
                {
                    printf("* ");
                }
                else if ((j == 5 || j == 7) && i == 10)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}