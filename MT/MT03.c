#include <stdio.h>

int main() {
    //declare n for an n x n matrix
    int n;
    scanf("%d", &n);
    
    // declare a 2D array (matrix) with n rows and n columns
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // calculate the sum of elements in the main diagonal
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    // print the sum
    printf("%d\n", sum);
    return 0;
}