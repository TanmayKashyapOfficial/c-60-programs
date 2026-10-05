/*
 * Day 65 (01/12/2026) - Program 130
 * Sum of Natural Numbers Using Formula
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 10
 *   Sum of first 10 natural numbers = 55
 */

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    // formula: sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
