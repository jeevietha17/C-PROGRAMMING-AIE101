//right rotation

#include <stdio.h>

void rightRotate(int arr[], int n, int rotations) {
    rotations = rotations % n; // Handle cases where rotations > n
    int temp[rotations], i;

    // Store the last 'rotations' elements in a temporary array
    for (i = 0; i < rotations; i++) {
        temp[i] = arr[n - rotations + i];
    }

    // Shift the rest of the elements to the right
    for (i = n - 1; i >= rotations; i--) {
        arr[i] = arr[i - rotations];
    }

    // Place the elements from temp at the beginning
    for (i = 0; i < rotations; i++) {
        arr[i] = temp[i];
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

    printf("Enter the number of right rotations: ");
    scanf("%d", &rotations);

    rightRotate(arr, n, rotations);

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

