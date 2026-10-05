/*
 * Day 53 (19/11/2026) - Program 105
 * Print Numbers 1 to N Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 5
 *   1 2 3 4 5
 */

#include <stdio.h>

void printUpTo(int n) {
    if (n == 0) {
        return;
    }
    printUpTo(n - 1);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printUpTo(n);
    printf("\n");

    return 0;
}
