#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum
        }
    }

    // Output the sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}