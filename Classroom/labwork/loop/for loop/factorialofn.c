#include<stdio.h>

void main()
{
    int i=1,n,fact=1;

    printf("Enter n number :");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("factorial number %d=%d",n,fact);
}