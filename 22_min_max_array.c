#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }
    printf("Minimum = %d\nMaximum = %d\n", mn, mx);
    return 0;
}