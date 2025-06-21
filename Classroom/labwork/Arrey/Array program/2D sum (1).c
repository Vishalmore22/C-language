#include<stdio.h>
#include<conio.h>

// 00 01 02
// 10 11 12
// 20 21 22

void main()
{
    int i,j,r,sum=0,c;
    printf("enter array row : ");
    scanf("%d",&r);
    printf("enter array col : ");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int d[r][c];
    printf("\n");
    printf("enter array a elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    printf("\n enter array b elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("b[%d][%d] ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");

    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n");
    printf("array d is :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");

    }
}