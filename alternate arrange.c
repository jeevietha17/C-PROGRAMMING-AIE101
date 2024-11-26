//alternate arrange

#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n], start = 0, end = n - 1, index = 0;

    while (start <= end) {
        if (index % 2 == 0) {
            temp[index++] = arr[end--];
        } else {
            temp[index++] = arr[start++];
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
