/*
 * Day 35 (01/11/2026) - Program 69
 * Sum of Even Elements in an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 5
 *   Enter 5 numbers: 1 2 3 4 5
 *   Sum of even elements = 6
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sum);
    return 0;
}
