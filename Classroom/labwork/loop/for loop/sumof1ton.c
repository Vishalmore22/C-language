#include <stdio.h>

void main()
{
    int i = 1, sum = 0, n;

    printf("Enter n number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}