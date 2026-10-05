/*
 * Day 34 (31/10/2026) - Program 67
 * Linear Search in an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 10 20 30 40 50
 *   Enter number to search: 30
 *   30 found at position 3
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
