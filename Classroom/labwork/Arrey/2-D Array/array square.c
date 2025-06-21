#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,m;
    printf("enter array size :");
    scanf("%d",&n);
    int a[n];
    printf("\n");
    printf("array elements : \n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("the squares are :");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]*a[i]);
    }


}

