#include <stdio.h>

int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

void main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {   
        scanf("%d", &a[i]);
    }

    int result = sum(a, n);
    printf("Sum of array elements: %d\n", result);

   
}