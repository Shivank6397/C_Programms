#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping (using third variable):\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping (without using third variable):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}