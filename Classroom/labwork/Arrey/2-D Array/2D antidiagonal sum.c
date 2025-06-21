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
    for(i=0,j=c-1; i<r,j>=0; i++, j--)
    {
        sum=sum+a[i][j];

    }
    printf("%d ",sum);
}
