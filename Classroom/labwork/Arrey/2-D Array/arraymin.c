#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    printf("enter number:");
    scanf("%d",&n);
    int a[n];
     for(i=0;i<n;i++)
     {
     printf("a[%d] = ",i);
     scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
     printf("%d ",a[i]);
     }
     printf("\n");
    int  min=a[0];
     for(i=0;i<n;i++)
     {
     if(min>a[i])
     {
     min=a[i];
     }
     }
     printf("min is %d",min);



}

