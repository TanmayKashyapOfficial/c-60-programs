/*
 * Day 52 (18/11/2026) - Program 104
 * Sum of Digits Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 1234
 *   Sum of digits = 10
 */

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d\n", sumOfDigits(number));
    return 0;
}
