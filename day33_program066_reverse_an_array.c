/*
 * Day 33 (30/10/2026) - Program 66
 * Reverse an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 1 2 3 4 5
 *   Reversed array: 5 4 3 2 1
 */

#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
