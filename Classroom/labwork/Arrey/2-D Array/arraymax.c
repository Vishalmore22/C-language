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
    int  max=a[0];
     for(i=0;i<n;i++)
     {
     if(max<a[i])
     {
     max=a[i];
     }
     }
     printf("max is %d",max);



}

