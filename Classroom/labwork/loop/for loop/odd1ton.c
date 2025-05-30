#include <stdio.h>

void main()
{
    int i, n;

    printf("Enter n number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)

            printf("%d\n", i);
        
    }
}