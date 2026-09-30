/*
 * Day 8 (05/10/2026) - Program 15
 * Positive, Negative or Zero
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: -4
 *   Negative
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
