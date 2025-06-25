#include<stdio.h>
// WAP to get & print 2D array of N elements.

void main()
{
    int n,m;
    
    printf("Enter size of array :");
    scanf("%d",&n);

    printf("Enter size of array :");
    scanf("%d",&m);
    
    int a[n][m];
    
    printf("Enter element of 2d array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < m; j++)
        {
            printf("Enter element at [%d] [%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

    
}