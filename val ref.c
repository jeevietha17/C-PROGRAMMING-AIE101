//val ref

#include <stdio.h>

// Call by Value
void callByValue(int a) {
    a = 10;
    printf("Inside function (call by value): %d\n", a);
}

// Call by Reference
void callByReference(int *a) {
    *a = 10;
    printf("Inside function (call by reference): %d\n", *a);
}

int main() {
    int x = 5;
    printf("Before function call: %d\n", x);
    callByValue(x);
    printf("After call by value: %d\n", x);

    printf("Before function call: %d\n", x);
    callByReference(&x);
    printf("After call by reference: %d\n", x);
    return 0;
}
