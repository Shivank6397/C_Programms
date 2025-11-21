#include <stdio.h>

int main() {
    int n, i = 1;
    long sum = 0;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    while (i <= n) { sum += i; i++; }
    printf("Sum of 1 to %d = %ld\n", n, sum);
    return 0;
}