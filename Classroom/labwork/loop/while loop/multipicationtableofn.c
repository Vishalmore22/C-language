#include <stdio.h>

void main()
{
    int n, i = 1;

    printf("Enter n number :");
    scanf("%d", &n);

    while (i <= 10)
    {

        printf("%d * %d = %d\n5 ", n, i, n * i);
        i++;
    }
}