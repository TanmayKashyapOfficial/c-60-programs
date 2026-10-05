/*
 * Day 68 (04/12/2026) - Program 135
 * Check if a Number is a Perfect Square
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 36
 *   36 is a perfect square.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int root;

    printf("Enter a number: ");
    scanf("%d", &number);

    root = (int) sqrt(number);

    if (root * root == number) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}
