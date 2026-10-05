/*
 * Day 32 (29/10/2026) - Program 63
 * Average of Array Elements
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of elements: 4
 *   Enter 4 numbers: 10 20 30 40
 *   Average = 25.00
 */

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    average = (float) sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}
