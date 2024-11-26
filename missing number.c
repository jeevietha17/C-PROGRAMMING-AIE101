//missing number

#include <stdio.h>

int main() {
    int n, arr[100], total = 0, expectedTotal = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    expectedTotal = (n * (n + 1)) / 2;
    printf("Missing number is: %d\n", expectedTotal - total);

    return 0;
}
