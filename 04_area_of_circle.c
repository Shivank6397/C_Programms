#include <stdio.h>
#define PI 3.141592653589793

int main() {
    double r, area;

    printf("Enter radius: ");
    if (scanf("%lf", &r) != 1) return 0;

    area = PI * r * r;

    printf("Area (floating) = %.6f\n", area);
    printf("Area (exponential) = %e\n", area);

    return 0;
}