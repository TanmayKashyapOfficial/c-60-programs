/*
 * Day 49 (15/11/2026) - Program 98
 * Factorial Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   Factorial of 5 = 120
 */

#include <stdio.h>

// a function that calls itself is called recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %d\n", number, factorial(number));
    }

    return 0;
}
