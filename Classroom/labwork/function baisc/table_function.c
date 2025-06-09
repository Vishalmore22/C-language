#include<stdio.h>
int table(int n )
{
    for ( int i = 1; i <= 10; i++)
    {
         printf("%d * %d = %d\n",n,i,n*i);
    }
    
}

void main()
{
    int n ;
    
    printf("Enter a number :");
    scanf("%d",&n);

    table(n);
}


    
