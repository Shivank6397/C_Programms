#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subjects (0-100): ");
    if (scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5) != 5) return 0;
    int total = m1 + m2 + m3 + m4 + m5;
    double percent = total / 5.0;
    printf("Percentage = %.2f%%\n", percent);
    if (percent >= 90 && percent <= 100) printf("Grade: A\n");
    else if (percent >= 80) printf("Grade: B\n");
    else if (percent >= 60) printf("Grade: C\n");
    else printf("Grade: D\n");
    return 0;
}