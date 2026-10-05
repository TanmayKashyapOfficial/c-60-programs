/*
 * Day 58 (24/11/2026) - Program 115
 * Swap Two Numbers Using Pointers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 10 20
 *   Before swap: x = 10, y = 20
 *   After swap: x = 20, y = 10
 */

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
