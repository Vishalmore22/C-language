#include<stdio.h>
#include<conio.h>

// 00 01 02
// 10 11 12
// 20 21 22

void main()
{
    int i,j,r,x,c;
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
    printf("row no.: ");
    scanf("%d",&x);
    if(x>=0 && x<r)
    {
        int sum=0;
        for(j=0; j<c; j++)
        {
            sum=sum+a[x][j];
        }
        printf("sum of %d row is %d\n",x,sum);
}
else
{
printf("invalid row!");
}
    
}
