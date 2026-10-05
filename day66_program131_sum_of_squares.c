/*
 * Day 66 (02/12/2026) - Program 131
 * Sum of Squares of First N Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   Sum of squares of first 5 numbers = 55
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of squares of first %d numbers = %d\n", n, sum);
    return 0;
}
