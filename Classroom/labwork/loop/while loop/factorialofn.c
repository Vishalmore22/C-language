#include <stdio.h>

void main()
{
    int n, fact = 1, i=1;

    printf("Enter n number :");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;//1*1=1,1*2=2,2*3=6,6*4=24,24*5
        i++;//2,3,4,5
    }
    printf("factorial is %d=%d ", n, fact);
}