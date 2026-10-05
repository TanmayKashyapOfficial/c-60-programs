/*
 * Day 50 (16/11/2026) - Program 100
 * Fibonacci Series Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of terms: 7
 *   Fibonacci series: 0 1 1 2 3 5 8
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
