#include <stdio.h>

void main()
{
    int sum = 0, n, i = 1;

    printf("Enter n number :");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d ", sum);
}