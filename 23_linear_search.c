#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}