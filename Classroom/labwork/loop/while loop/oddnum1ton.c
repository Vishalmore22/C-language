#include <stdio.h>
// print odd number
void main()
{
    int i = 1, n;

    printf("Enter n :");
    scanf("%d", &n);

    while(i <= n)
    {
        if (i % 2 == 1)

            printf("%d ", i);
        i++;
    }
}