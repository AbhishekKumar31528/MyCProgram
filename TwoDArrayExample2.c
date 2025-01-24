#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS];
    int rowSum[ROWS] = {0};
    int colSum[COLS] = {0};

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Display matrix and row sums
    printf("\nMatrix:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("= %d\n", rowSum[i]);
    }

    // Display column sums
    printf("\nColumn Sums:\n");
    for (int j = 0; j < COLS; ++j) {
        printf("%d ", colSum[j]);
    }
    printf("\n");

    // Display total sum
    printf("\nTotal Sum:\n");
    for (int i = 0; i < ROWS; ++i) {
        printf("%d ", rowSum[i]);
    }
    for (int j = 0; j < COLS; ++j) {
        printf("%d ", colSum[j]);
    }
    printf("\n");

    return 0;
}
