#include <stdio.h>

int main() {
    // declare m rows and n columns
    int m, n;
    scanf("%d %d", &m, &n);

    // declare a 2D array (matrix) with m rows and n columns
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // print the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}