/*
 * Day 65 (01/12/2026) - Program 129
 * Fibonacci Series Using Loop
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of terms: 8
 *   Fibonacci series: 0 1 1 2 3 5 8 13
 */

#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
