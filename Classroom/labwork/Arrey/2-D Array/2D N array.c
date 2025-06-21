#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,r,c;
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

}