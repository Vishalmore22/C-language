#include<stdio.h>//standerd input output headerd file
//wap to revers arrey by value
void main()
{
    int n;//n=5
    
    printf("entre n");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];//temp=0,temp=1,temp2
        a[i] = a[n-i-1];//a[0]=a[4],a[1]=a[3],a[2]=a[]
        a[n-i-1] = temp;//temp=4,temp=3,temp=2
    }

    printf("revers arrey :");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    
}
