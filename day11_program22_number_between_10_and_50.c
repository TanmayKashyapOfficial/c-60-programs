/*
 * Day 11 (08/10/2026) - Program 22
 * Number Between 10 and 50
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 25
 *   25 lies between 10 and 50.
 */

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 50) {
        printf("%d lies between 10 and 50.\n", number);
    } else {
        printf("%d does not lie between 10 and 50.\n", number);
    }

    return 0;
}
