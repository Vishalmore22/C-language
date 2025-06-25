#include<stdio.h>

void recursion(int i,int n)
{
    printf("%d ",i);
    i++;
    if (i<=n)
    {
        recursion(i,n);
    }
    
}
void main()
{
    recursion(1,15);
}
