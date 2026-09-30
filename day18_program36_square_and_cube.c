/*
 * Day 18 (15/10/2026) - Program 36
 * Square and Cube
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 4
 *   Square = 16
 *   Cube = 64
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square = %d\n", number * number);
    printf("Cube = %d\n", number * number * number);

    return 0;
}
