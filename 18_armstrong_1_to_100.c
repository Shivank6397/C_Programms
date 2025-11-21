#include <stdio.h>

int isArmstrong(int n) {
    int original = n, sum = 0;
    while (n) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    return sum == original;
}

int main() {
    printf("Armstrong numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; ++i)
        if (isArmstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}