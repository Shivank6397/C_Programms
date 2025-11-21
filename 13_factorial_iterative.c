#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; ++i) fact *= i;
    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}