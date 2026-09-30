/*
 * Day 24 (21/10/2026) - Program 47
 * Factorial
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   Factorial of 5 = 120
 */

#include <stdio.h>

int main() {
    int number, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (number > 12) {
        printf("Number is too large for int. Enter 12 or less.\n");
    } else {
        for (i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return 0;
}
