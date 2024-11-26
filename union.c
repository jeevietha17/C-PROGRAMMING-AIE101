//union

#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], unionArr[200], k = 0;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        unionArr[k++] = arr1[i];
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
