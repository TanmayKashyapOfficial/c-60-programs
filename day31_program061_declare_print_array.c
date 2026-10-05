/*
 * Day 31 (28/10/2026) - Program 61
 * Declare and Print an Array
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   numbers[0] = 10
 *   numbers[1] = 20
 *   numbers[2] = 30
 *   numbers[3] = 40
 *   numbers[4] = 50
 */

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
