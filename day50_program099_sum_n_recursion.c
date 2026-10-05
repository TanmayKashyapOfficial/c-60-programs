/*
 * Day 50 (16/11/2026) - Program 99
 * Sum of First N Numbers Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   Sum of first 5 numbers = 15
 */

#include <stdio.h>

int sumOfN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfN(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d numbers = %d\n", n, sumOfN(n));
    return 0;
}
