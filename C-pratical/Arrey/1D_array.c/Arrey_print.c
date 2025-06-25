#include<stdio.h>//standerd input output header file


void main()//its main function of code or entry point of code
{
    int n,sum=0;

    printf("Enter n :");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
        printf("%d ",a[i]);
    }
        
    printf("sum of arrey : %d \n",sum);
    printf("ave of arrey : %d ",sum/n);
}