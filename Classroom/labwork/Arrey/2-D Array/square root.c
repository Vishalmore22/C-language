#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("enter no.: ");
    scanf("%d",&n);

    int i=0;
    while(i*i<=n)
    {
        if(n==i*i)
        {
            printf("square root of %d is %d",n,i);
        }
        i++;
    }

}