/*
 * Day 10 (07/10/2026) - Program 19
 * Largest of Three Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter three numbers: 12 45 30
 *   Largest = 45
 */

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest = %d\n", largest);
    return 0;
}
