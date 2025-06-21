#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,j,temp;
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
    for(i=0; i<n; i++)//2,3,4,1,8    (3,2,4,1,8)   
    {				  //0,1,2,3,4     
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("second largest no. is %d ",a[1]);
}
