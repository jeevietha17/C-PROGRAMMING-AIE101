//rotate matrix

#include <stdio.h>

#define MAX 100

void rotate90Clockwise(int mat[MAX][MAX], int n) {
    int temp[MAX][MAX];
    int i, j;

    // Transpose the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp[j][i] = mat[i][j];
        }
    }

    // Reverse each row
    for (i = 0; i < n; i++) {
        for (j = 0; j < n / 2; j++) {
            int tempValue = temp[i][j];
            temp[i][j] = temp[i][n - j - 1];
            temp[i][n - j - 1] = tempValue;
        }
    }

    printf("Matrix after 90° Clockwise Rotation:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[MAX][MAX], n, i, j;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    rotate90Clockwise(mat, n);

    return 0;
}
