//linear sort

#include <stdio.h>

void countingSort(int arr[], int n) {
    int max = arr[0], min = arr[0];
    
    // Find the maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // Create a count array to store frequency of elements
    int range = max - min + 1;
    int count[range];
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }

    // Store the frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]--) {
            arr[index++] = i + min;
        }
    }
}

int main() {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
