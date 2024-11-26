//gcd

#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
    int a = 56, b = 98;
    printf("GCD of %d and %d is %d\n", a, b, findGCD(a, b));
    return 0;
}
