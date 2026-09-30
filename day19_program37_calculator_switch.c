/*
 * Day 19 (16/10/2026) - Program 37
 * Calculator Using switch
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter expression (example: 20 * 3): 20 * 3
 *   Result = 60
 */

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter expression (example: 20 * 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", a / b);
            }
            break;
        case '%':
            if (b == 0) {
                printf("Remainder by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", a % b);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
