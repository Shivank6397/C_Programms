#include <stdio.h>

int main() {
    int n;
    printf("Enter size of arrays: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[n], b[n], c[n];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
    for (int i = 0; i < n; ++i) c[i] = a[i] + b[i];
    printf("Result array: ");
    for (int i = 0; i < n; ++i) printf("%d ", c[i]);
    printf("\n");
    return 0;
}