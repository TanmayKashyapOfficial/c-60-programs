/*
 * Day 66 (02/12/2026) - Program 132
 * Decimal to Binary Conversion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a decimal number: 13
 *   Binary = 1101
 */

#include <stdio.h>

int main() {
    int number, binary[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("Binary = ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
