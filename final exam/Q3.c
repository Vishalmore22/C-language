#include<stdio.h>

void main()
{
    int n,i;

    printf("enter n :");
    scanf("%d",&n);
    
    int a[n];
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
}