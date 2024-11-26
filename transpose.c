//transpose

#include <stdio.h>

int main() {
    int mat[10][10], trans[10][10], r, c, i, j;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
