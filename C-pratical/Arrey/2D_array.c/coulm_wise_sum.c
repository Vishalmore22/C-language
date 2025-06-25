#include<stdio.h>
// .WAP to perform coulmn-wise sum of 2D array
void main()
{
    int r,c;

    printf("enter row of array :");
    scanf("%d",&r);

    printf("enter coulm of array :");
    scanf("%d",&c);

    int a[r][c];

    printf("enter element of array :\n");
    for (int i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int b,sum=0;
    printf("enter coulm :");
    scanf("%d",&b);

    for (int i = 0; i < r; i++)
    {
        sum = sum+a[b][i];
    }
    printf("sum of %d coulm of %d",b,sum);
    

}