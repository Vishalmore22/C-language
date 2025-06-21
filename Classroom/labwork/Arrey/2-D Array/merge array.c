#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,m;
    printf("enter first array size :");
    scanf("%d",&n);
    printf("enter second array size :");
    scanf("%d",&m);

    int a[n];
    int b[m];
    int c[n+m];
    printf("array a:\n");

    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\narray b: \n");
    for(i=0; i<m; i++)
    {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    printf("\n");

    printf("array a :");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    printf("array b :");
    for(i=0; i<m; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n\n");
    printf("array c is ");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<m; i++)
    {
        printf("%d ",b[i]);
    }

}

