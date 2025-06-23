#include <stdio.h>

void main() {
    int r, c, i, j, rowSum = 0, colSum = 0;
    int rowIndex, colIndex;

    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

  
    printf("Enter row index to find sum: ");
    scanf("%d", &rowIndex);
    printf("Enter column index to find sum: ");
    scanf("%d", &colIndex);


    if (rowIndex >= r || colIndex >= c || rowIndex < 0 || colIndex < 0) {
        printf("Invalid row or column index!\n");
        return;
    }

   
    for (j = 0; j < c; j++) {
        rowSum += a[rowIndex][j];
    }

 
    for (i = 0; i < r; i++) {
        colSum += a[i][colIndex];
    }


    printf("\nSum of row %d = %d\n", rowIndex, rowSum);
    printf("Sum of column %d = %d\n", colIndex, colSum);
}
