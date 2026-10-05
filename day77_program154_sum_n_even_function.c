/*
 * Day 77 (13/12/2026) - Program 154
 * Sum of First N Even Numbers Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   Sum of first 5 even numbers = 30
 */

#include <stdio.h>

int sumOfEvens(int n) {
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i);
    }

    return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d even numbers = %d\n", n, sumOfEvens(n));
    return 0;
}
