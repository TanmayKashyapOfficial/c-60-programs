/*
 * Day 29 (26/10/2026) - Program 58
 * Square Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 9
 *   Square = 81
 */

#include <stdio.h>

// function that takes a number and returns its square
int square(int n) {
    return n * n;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = square(number);
    printf("Square = %d\n", result);

    return 0;
}
