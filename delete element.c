//delete element

#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position of the element to delete
    printf("Enter the position (0 to %d) of the element to delete: ", n - 1);
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce size of the array

        // Display updated array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
