#include <stdio.h>
// WAP to print the multiplication table of each array element.
void main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("table of a[%d]", i);
        scanf("%d", &a[i]);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d \n",a[i],j,a[i]*j);
        }
        printf("\n");
    }
}