#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year) != 1) return 0;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is NOT a leap year.\n", year);

    return 0;
}