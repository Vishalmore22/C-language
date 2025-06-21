#include<stdio.h>
#include<conio.h>

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
            sum=sum+a[i][j];
            printf("%d ",a[i][j]);

        }
        printf("\n");

    }
    printf("\n");
    printf("sum is %d\n ",sum);
    int q=r*c;
    printf("avg is %d ",sum/q);
}