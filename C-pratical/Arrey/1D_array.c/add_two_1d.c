#include <stdio.h> //standerd input output header file
// addition between two 1D arrey and store into another 1D arrey
void main()
{
    int n;
    printf("Enetr n :");
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%d]", i);
        scanf("%d", &b[i]);
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i] + b[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d + %d = %d\n",a[i],b[i],ans[i]);
    }
    
    
}