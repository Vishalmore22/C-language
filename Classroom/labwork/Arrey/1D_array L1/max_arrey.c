#include<stdio.h>//standerd input output header file
//find a max number in arrey
void main()////its main function of code or entry point of code
{
    int n,max;

    printf("Enter n :");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max=a[0];

    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
        
    }
    

     printf("%d",max);
    

}