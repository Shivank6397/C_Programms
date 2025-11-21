#include <stdio.h>

int main() {
    int m, n;
    int matrix[10][10];
    int i, j, sum = 0;
    printf("Enter number of rows (m): ");
    if (scanf("%d", &m) != 1) return 0;
    printf("Enter number of columns (n): ");
    if (scanf("%d", &n) != 1) return 0;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &matrix[i][j]);
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    for (i = 0; i < m && i < n; ++i) sum += matrix[i][i];
    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}