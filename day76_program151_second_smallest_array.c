/*
 * Day 76 (12/12/2026) - Program 151
 * Find Second Smallest in an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 12 45 7 89 23
 *   Smallest = 7
 *   Second Smallest = 12
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = secondSmallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);
    return 0;
}
