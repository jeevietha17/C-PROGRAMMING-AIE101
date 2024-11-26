//remove freq

#include <stdio.h>

int main() {
    int arr[100], n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[count++] = arr[i];
        }
    }

    n = count;

    printf("Array after removal:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
