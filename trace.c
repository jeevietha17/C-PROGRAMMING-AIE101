//trace

#include <stdio.h>

int main() {
    int mat[10][10], r, i, j, trace = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &r);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        trace += mat[i][i];
    }

    printf("Trace of the Matrix: %d\n", trace);

    return 0;
}
