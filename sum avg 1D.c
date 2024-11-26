//sum avg 1D

#include <stdio.h>

void sumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    sumAndAverage(arr, n);
    return 0;
}
