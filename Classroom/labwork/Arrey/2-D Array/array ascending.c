#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,temp;
    printf("enter number:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i] = a[j];
                a[j] = temp;
            }


        }
        printf("%d ",a[i]);

    }
}

