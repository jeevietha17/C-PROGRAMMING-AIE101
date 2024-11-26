//left roatate

#include <stdio.h>

void leftRotate(int arr[], int n, int rotations) {
    rotations = rotations % n; // Handle cases where rotations > n
    int temp[rotations], i;

    // Store the first 'rotations' elements in a temporary array
    for (i = 0; i < rotations; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the elements to the left
    for (i = rotations; i < n; i++) {
        arr[i - rotations] = arr[i];
    }

    // Place the elements from temp at the end
    for (i = 0; i < rotations; i++) {
        arr[n - rotations + i] = temp[i];
    }
}

int main() {
    int arr[100], n, rotations, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of left rotations: ");
    scanf("%d", &rotations);

    leftRotate(arr, n, rotations);

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
