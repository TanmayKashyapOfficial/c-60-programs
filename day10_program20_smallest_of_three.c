/*
 * Day 10 (07/10/2026) - Program 20
 * Smallest of Three Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter three numbers: 12 45 30
 *   Smallest = 12
 */

#include <stdio.h>

int main() {
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Smallest = %d\n", smallest);
    return 0;
}
