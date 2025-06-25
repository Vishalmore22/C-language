#include<stdio.h>
// Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array
void main()
{
    int r,c,i,j;
    printf("Enter element of r array ");
    scanf("%d",&r);
    printf("Enter element of c array ");
    scanf("%d",&c);

    int a[r][c];
    
    printf("enter elements of a array :\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // sum of boundary 
    int sum =0;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (i==0||j==0||i==r-1||j==c-1)
            {
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    printf("sum of boundary is %d:",sum);
}