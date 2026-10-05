/*
 * Day 61 (27/11/2026) - Program 122
 * Check Prime Number
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 17
 *   17 is a prime number.
 */

#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
