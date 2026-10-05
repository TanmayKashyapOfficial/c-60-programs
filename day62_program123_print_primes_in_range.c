/*
 * Day 62 (28/11/2026) - Program 123
 * Print Prime Numbers in a Range
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter lower and upper limit: 10 30
 *   Prime numbers between 10 and 30:
 *   11 13 17 19 23 29
 */

#include <stdio.h>

int main() {
    int low, high, number, i, isPrime;

    printf("Enter lower and upper limit: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d:\n", low, high);
    for (number = low; number <= high; number++) {
        isPrime = 1;

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
            printf("%d ", number);
        }
    }
    printf("\n");

    return 0;
}
