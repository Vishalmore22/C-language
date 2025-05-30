#include <stdio.h>

void main()
{
    int start, end;

    printf("Enter start year :");
    scanf("%d", &start);

    printf("Enter end year :");
    scanf("%d", &end);

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            printf("%d\n", start);
            
        }
        start++;
    }
}