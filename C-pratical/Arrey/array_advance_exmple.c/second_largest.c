#include<stdio.h>
// Write a C program to find the second largest number in the array
void main()
{
    int n ,i,j,temp;

    printf("Enter size of array :");
    scanf("%d",&n);
    int a[n];
    printf("entre element of array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
            }
        }
        
    }
    printf("second largest of array is %d",a[1]);
}