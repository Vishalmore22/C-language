#include <stdio.h>
// Write a Program to perform the merge operation of two 1D arrays & store it in another array.
// Keep in mind that both array sizes can be different
void main()
{
    int n, m;

    // enter size of a array
    printf("\nEnter size of a array :");
    scanf("%d", &n);
    int a[n];

    // enter value in a array
    printf("\nEnter element of a array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    // enter size of b array
    printf("\nEnter size of b array :");
    scanf("%d", &m);
    int b[m];

    // enter value in b array
    printf("\nEnter element of b array :\n");
    for (int i = 0; i < m; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }
    // marge
    for (int i = 0; i < m; i++)
    {
        a[n + i] = b[i];
    }
    printf("\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", a[i]);
    }
}