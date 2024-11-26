//symmetry

#include <stdio.h>

int main() {
    int mat[10][10], r, i, j, isSymmetric = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &r);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
