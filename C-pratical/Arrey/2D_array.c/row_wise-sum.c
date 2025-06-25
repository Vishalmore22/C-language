#include<stdio.h>
// WAP to perform row-wise sum of 2D array
void main()
{
    int r,c;

    printf("enter size of array:");
    scanf("%d",&r);

    printf("enetr size of array :");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter element of array \n:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int b,sum=0;
    printf("enter raw :");
    scanf("%d",&b);

    for (int j = 0; j < c; j++)
    {
        sum = sum + a[b][j];
    }
    printf("sum of %d row is %d\n",b,sum);
}