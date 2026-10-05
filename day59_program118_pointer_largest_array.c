/*
 * Day 59 (25/11/2026) - Program 118
 * Find Largest in Array Using Pointer
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 12 45 7 89 23
 *   Largest = 89
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, largest;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("Largest = %d\n", largest);
    return 0;
}
