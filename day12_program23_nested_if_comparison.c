/*
 * Day 12 (09/10/2026) - Program 23
 * Nested if Comparison
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter values of x and y: 10 20
 *   x and y are different.
 *   x is smaller than y.
 */

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter values of x and y: ");
    scanf("%d %d", &x, &y);

    if (x != y) {
        printf("x and y are different.\n");

        // second decision is made only if the first one is true
        if (x > y) {
            printf("x is greater than y.\n");
        } else {
            printf("x is smaller than y.\n");
        }
    } else {
        printf("x and y are equal.\n");
    }

    return 0;
}
