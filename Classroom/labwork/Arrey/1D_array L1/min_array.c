#include <stdio.h> //standerd input output header file
// find a min number in arrey
void main() // its main function of code or entry point of code
{
    int n, min;

    printf("Enter n :");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    printf("%d", min);
}