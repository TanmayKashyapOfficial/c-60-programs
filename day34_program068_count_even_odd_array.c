/*
 * Day 34 (31/10/2026) - Program 68
 * Count Even and Odd Numbers in an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 1 2 3 4 5
 *   Even numbers = 2
 *   Odd numbers = 3
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even numbers = %d\n", evenCount);
    printf("Odd numbers = %d\n", oddCount);
    return 0;
}
