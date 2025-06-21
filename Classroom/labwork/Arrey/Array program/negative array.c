#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,count=0;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("only negative value : ");
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    int b[count];
    int j=0;
    for(i=0; i<n; i++)
    {
        if(a[i]<0)//-1 2 4 -6 0
        {
            b[j]=a[i];//b[j]=-1,-6
            j++;		//	  0, 1	
        }
    }
    for(i=0; i<count; i++)
    {
        printf("%d ",b[i]);
    }


}
