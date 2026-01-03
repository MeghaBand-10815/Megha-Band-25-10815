#include <stdio.h>

// Function to scan the matrix and find danger zones
void scanMatrix(int rows, int cols, int arr[rows][cols]) {
    int i, j;

    printf("\nDanger Zone Positions:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] == 1) {
                printf("Danger at position: (%d, %d)\n", i, j);
            }
        }
    }
}

int main() {
    int rows, cols;
    int i, j;

    // Step 1 & 2: Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Step 3: Declare 2D array
    int matrix[rows][cols];

    // Step 4: Input matrix elements
    printf("Enter matrix elements (1 = Danger, 0 = Safe):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The Matrix is:\n");
     for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    // Step 5 & 6: Call function
    scanMatrix(rows, cols, matrix);

    return 0;
}
