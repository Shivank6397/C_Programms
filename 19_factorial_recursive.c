#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    unsigned int n;
    printf("Enter n: ");
    if (scanf("%u", &n) != 1) return 0;
    printf("Factorial of %u = %llu\n", n, factorial(n));
    return 0;
}