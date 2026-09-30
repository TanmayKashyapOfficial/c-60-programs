/*
 * Day 30 (27/10/2026) - Program 60
 * Largest of Three Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter three numbers: 12 45 30
 *   Largest = 45
 */

#include <stdio.h>

// function that returns the largest of three numbers
int largest(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Largest = %d\n", largest(x, y, z));

    return 0;
}
