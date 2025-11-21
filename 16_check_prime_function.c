#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= (int)sqrt(n); i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) return 0;
    if (isPrime(n)) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    return 0;
}