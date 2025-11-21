#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) return 0;
    if (x == y)
        printf("Numbers are equal.\n");
    else
        printf("Numbers are not equal.\n");
    return 0;
}