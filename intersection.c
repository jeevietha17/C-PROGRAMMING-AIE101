//intersection

#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100];

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of arrays:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
