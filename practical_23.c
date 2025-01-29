#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int array[n][n], transpose[n][n];

    // Input elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter value of array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}