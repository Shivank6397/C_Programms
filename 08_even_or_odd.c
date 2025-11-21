#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("%d is %s\n", n, (n % 2 == 0) ? "even" : "odd");
    return 0;
}