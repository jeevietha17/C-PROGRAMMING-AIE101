//replace array

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, newValue;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position of the element to replace
    printf("Enter the position (0 to %d) of the element to replace: ", n - 1);
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        // Input new value
        printf("Enter the new value: ");
        scanf("%d", &newValue);

        // Replace the element
        arr[pos] = newValue;

        // Display updated array
        printf("Array after replacement:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
