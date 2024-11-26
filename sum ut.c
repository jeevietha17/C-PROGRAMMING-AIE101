//sum ut

#include <stdio.h>

int main() {
    int mat[10][10], r, i, j, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &r);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = i; j < r; j++) {
            sum += mat[i][j];
        }
    }

    printf("Sum of Upper Triangle: %d\n", sum);

    return 0;
}
