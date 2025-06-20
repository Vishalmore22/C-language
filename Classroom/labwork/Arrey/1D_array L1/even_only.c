#include <stdio.h> //standard input output header file
// WAP to print only even numbers
void main()//it's main function of code or entry point of code
{
    int n;

    printf("Enter n :");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

    printf("even number only :\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        } 
    }
}    