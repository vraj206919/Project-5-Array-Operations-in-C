#include <stdio.h>

int main() {
    int rows, cols, i, j;

    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    
    printf("\nEnter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    int row, rowSum = 0;
    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for(j = 0; j < cols; j++) {
        printf("%d ", a[row][j]);
        rowSum += a[row][j];
    }
    printf("\nThe sum of a row %d: %d\n", row, rowSum);

    
    int col, colSum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for(i = 0; i < rows; i++) {
        printf("%d ", a[i][col]);
        colSum += a[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);

    return 0;
}