#include <stdio.h>
// 00 01 02  i and j is same (i==j) then print diagonal  
// 10 11 12
// 20 21 22  i and j sum of 2 (i+J==2)then print ani=diagonal

void main()
{
    int r, c;

    printf("Enter r element of array ");
    scanf("%d", &r);

    printf("Enter c element of array ");
    scanf("%d", &c);

    int a[r][c];

    printf("2D array elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nthe 2D array :\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //digonal element sum 
    int sum=0;
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i==j)
            {
                sum = sum+a[i][j];
            }
            
        }
        
    }
    printf("the sum of diagonal element is %d",sum);
    
}