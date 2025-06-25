#include <stdio.h>//standerd input output header file
// wap to sort array in ascending order
void main()
{
    int n;

    printf("enter the number of elements in array ");
    scanf("%d", &n);

    int a[n];
    // print array using user input
    printf("Enter %d element :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    // revers array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])          
            {
                int temp = a[i];//
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("asceding order array\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}