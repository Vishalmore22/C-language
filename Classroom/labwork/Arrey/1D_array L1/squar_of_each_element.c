#include <stdio.h> //standerd input output header file
// Write a Program to find square of each element from the given array
void main() // entry point of program
{
    // initialize variable n to user input
    int n;
    printf("Enter size of array :");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i] * a[i]);
    }
}