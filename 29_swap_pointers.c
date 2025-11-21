#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 10, b = 20;
    printf("Number before swap %d %d\n", a, b);
    swap(&a, &b);
    printf("Number after swap %d %d\n", a, b);
    return 0;
}