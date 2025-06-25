#include <stdio.h>

void recursion(int n,int i,int fact)
{
  
    fact = fact * i;
    i++;
    if (i <= n)
    {
        recursion(n,i,fact);
    }
    else
    {
        printf("%d ", fact);
    }
}
void main()
{
    recursion(5,1,1);
}