#include <stdio.h>

int main() {
    int num1, num2, num3;
    float sum, average;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) return 0;

    sum = num1 + num2 + num3;
    average = sum / 3.0f;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}