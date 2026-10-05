/*
 * Day 67 (03/12/2026) - Program 134
 * Decimal to Octal Conversion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a decimal number: 25
 *   Octal = 31
 */

#include <stdio.h>

int main() {
    int number, octal[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Octal = 0\n");
        return 0;
    }

    while (number > 0) {
        octal[i] = number % 8;
        number = number / 8;
        i++;
    }

    printf("Octal = ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
