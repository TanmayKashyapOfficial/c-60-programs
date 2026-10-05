/*
 * Day 33 (30/10/2026) - Program 65
 * Smallest Element in an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 12 45 7 89 23
 *   Smallest = 7
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    return 0;
}
