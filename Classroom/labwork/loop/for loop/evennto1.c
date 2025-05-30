#include <stdio.h>

void main()
{
    int i, n;

    printf("Enter n number :");
    scanf("%d",&n);

    for (i = n; i >= 1; i--)
    {
        if (i % 2 == 0)

            printf("%d\n", i);
    }
}