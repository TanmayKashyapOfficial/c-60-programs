/*
 * Day 61 (27/11/2026) - Program 121
 * Pass Array to Function Using Pointer
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 1 2 3 4 5
 *   Sum = 15
 */

#include <stdio.h>

int sumArray(int *arr, int n) {
    int sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", sumArray(arr, n));
    return 0;
}
