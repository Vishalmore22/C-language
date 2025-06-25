#include<stdio.h>//standard input output header file
// WAP to print array in reverse order
void main()//it's main function of code or entry point of code
{
    int n;

    printf("Enter n :");
    scanf("%d",&n);

    int a[n];

    for (int i = n; i >= 0; i--)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    
}