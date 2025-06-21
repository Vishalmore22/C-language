#include<stdio.h>
#include<conio.h>

// 00 01 02
// 10 11 12
// 20 21 22

void main()
{
    int i,j,r,c,sum=0;
    printf("enter array row : ");
    scanf("%d",&r);
    printf("enter array col : ");
    scanf("%d",&c);

    int a[r][c];
    printf("\n");

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
    int x;
    printf("enter col: ");
    scanf("%d",&x);
    if(x>=0 && x<c)
    {
        for(i=0; i<r; i++)
        {
            sum=sum+a[i][x];
        }
        printf("sum of %d col is %d\n",x,sum);

    }
    else
    {
    printf("Invalid column!");
    }
}
