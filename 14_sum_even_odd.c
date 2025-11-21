#include <stdio.h>

int main() {
    int n;
    long se = 0, so = 0;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) se += i; else so += i;
    }
    printf("Sum of even = %ld\nSum of odd = %ld\n", se, so);
    return 0;
}