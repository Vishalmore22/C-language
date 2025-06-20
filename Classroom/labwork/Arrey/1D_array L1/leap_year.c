#include <stdio.h>
//  Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
// Make this program in the shortest memory
void main()
{
    int start, end, i, count = 0;

    printf("Enter start year :");
    scanf("%d", &start);

    printf("Enter end year :");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if (i % 4 == 0)
        {
            count++;
        }
    }
    int year[count];
    int j = 0;

    for (i = start; i <= end; i++)
    {
        if (i % 4 == 0)
        {
            year[j] = i;
            j++;
        }
    }
    for (j = 0; j < count; j++)
    {
        printf("%d ", year[j]);
    }
}