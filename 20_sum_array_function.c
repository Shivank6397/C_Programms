#include <stdio.h>

int sumArray(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) s += arr[i];
    return s;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    printf("Sum = %d\n", sumArray(arr, n));
    return 0;
}