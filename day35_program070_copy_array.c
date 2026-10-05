/*
 * Day 35 (01/11/2026) - Program 70
 * Copy One Array into Another
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 1 2 3 4 5
 *   Copied array: 1 2 3 4 5
 */

#include <stdio.h>

int main() {
    int source[100], destination[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }

    for (i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Copied array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
