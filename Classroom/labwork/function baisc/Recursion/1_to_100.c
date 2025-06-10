#include<stdio.h>

void recursion(int i)
{
    printf("%d ",i);
    i++;

    if (i<=100)
    {
        recursion(i);
    }
}
void main()
{
    recursion(1);
}

    
