#include <stdio.h>

int main() {
    double a, b, res;
    char op;
    printf("Enter expression (e.g. 5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;
    switch (op) {
    case '+': res = a + b; printf("Result = %.2f\n", res); break;
    case '-': res = a - b; printf("Result = %.2f\n", res); break;
    case '*': res = a * b; printf("Result = %.2f\n", res); break;
    case '/':
        if (b == 0) printf("Division by zero error\n");
        else { res = a / b; printf("Result = %.2f\n", res); }
        break;
    default: printf("Invalid operator\n");
    }
    return 0;
}