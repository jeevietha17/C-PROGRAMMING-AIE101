//insert element

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, newValue;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0 to %d) to insert: ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &newValue);

        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos] = newValue;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
