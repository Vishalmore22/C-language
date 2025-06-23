#include <stdio.h>
//  Write a C program to print all negative elements in an array.
void main()
{
    int n, i, count=0, j=0;

    printf("Enter size of array :");
    scanf("%d", &n);

    int a[n];
    printf("Enter element of array :\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    // print array
    printf("the element of array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // only negitve value
    printf("only negative value : ");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    int b[count];
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }
}