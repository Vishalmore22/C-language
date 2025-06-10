#include<stdio.h>

void recursion(int i,int n,int sum)
{
    sum=sum+i;
    i++;
    
    if (i<=n)
    {
        recursion(i,n,sum);
    }
    else
    {
        printf("%d ",sum);
    }
}    
void main()
{
    recursion(1,10,0);
}