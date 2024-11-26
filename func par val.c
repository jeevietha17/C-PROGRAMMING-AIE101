// func par val

#include <stdio.h>

// 1. No Parameters, No Return Value
void greet() {
    printf("Hello, World!\n");
}

// 2. No Parameters, With Return Value
int getNumber() {
    return 42; // Returning a fixed value
}

// 3. With Parameters, No Return Value
void printSum(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

// 4. With Parameters, With Return Value
int multiply(int x, int y) {
    return x * y;
}

int main() {
    // 1. Calling a function with no parameters and no return value
    greet();

    // 2. Calling a function with no parameters and capturing the return value
    int num = getNumber();
    printf("The number returned is %d\n", num);

    // 3. Calling a function with parameters and no return value
    printSum(5, 10);

    // 4. Calling a function with parameters and capturing the return value
    int result = multiply(4, 7);
    printf("The product of 4 and 7 is %d\n", result);

    return 0;
}
