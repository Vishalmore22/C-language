#include <stdio.h>

void main()
{
    int start, end;

    printf("Enter start year :");
    scanf("%d", &start);

    printf("Enter end year :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (start % 4 == 0)
        {
            printf("%d\n", start);
        }
        
    }
}