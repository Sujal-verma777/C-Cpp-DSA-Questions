#include <stdio.h>

int main() {
    int matrix[10][10], sparse[100][3];
    int rows, cols, i, j, k = 0;

    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Create sparse matrix representation
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // First row of compact form: metadata
    printf("\nSparse Matrix in Compact Form:\n");
    printf("Row Col Value\n");
    printf("%d   %d   %d\n", rows, cols, k);  // metadata
    for (i = 0; i < k; i++) {
        printf("%d   %d   %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
