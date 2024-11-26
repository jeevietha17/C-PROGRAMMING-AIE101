//merge sort 
//2 halves merge


#include <stdio.h>

void merge(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        merge(arr, left, mid);
        merge(arr, mid + 1, right);
        
        // Merge sorted halves
        int temp[right - left + 1];
        int i = left, j = mid + 1, k = 0;
        
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }
        
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];
        
        for (int i = 0; i < k; i++) {
            arr[left + i] = temp[i];
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

    merge(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
