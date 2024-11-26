//second largest

#include <stdio.h>

void findLargestAndSecondLargest(int arr[], int size, int *largest, int *secondLargest) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    // Initialize largest and secondLargest using the first two elements
    if (arr[0] > arr[1]) {
        *largest = arr[0];
        *secondLargest = arr[1];
    } else {
        *largest = arr[1];
        *secondLargest = arr[0];
    }

    // Start loop from the third element
    for (int i = 2; i < size; i++) {
        if (arr[i] > *largest) {
            *secondLargest = *largest;
            *largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != *largest) {
            *secondLargest = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 20, 45, 60, 45, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest, secondLargest;

    findLargestAndSecondLargest(arr, size, &largest, &secondLargest);

    printf("Largest element: %d\n", largest);
    if (size < 2 || largest == secondLargest) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
