//diagonal

#include <stdio.h>

int main() {
    int mat[10][10], r, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &r);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Main Diagonal Elements:\n");
    for (i = 0; i < r; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    return 0;
}

