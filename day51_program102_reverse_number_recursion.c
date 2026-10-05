/*
 * Day 51 (17/11/2026) - Program 102
 * Reverse a Number Using Recursion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 1234
 *   Reversed number: 4321
 */

#include <stdio.h>

void reversePrint(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n % 10);
    reversePrint(n / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed number: ");
    reversePrint(number);
    printf("\n");

    return 0;
}
