//count

#include <stdio.h>

int main() {
    int arr[100], n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to count: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    printf("Element %d appears %d times\n", key, count);

    return 0;
}
