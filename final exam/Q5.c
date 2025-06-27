#include<stdio.h>

void main()
{
    int i,j;
    int n=11;
    for ( i = 5; i >= 1; i--)
    {
        for ( j = i; j <= 5; j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    
}