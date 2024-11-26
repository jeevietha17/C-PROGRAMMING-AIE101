//linear search

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Element not found!\n");
    }

    return 0;
}
