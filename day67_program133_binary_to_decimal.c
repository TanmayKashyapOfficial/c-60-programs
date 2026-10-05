/*
 * Day 67 (03/12/2026) - Program 133
 * Binary to Decimal Conversion
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a binary number: 1101
 *   Decimal = 13
 */

#include <stdio.h>
#include <math.h>

int main() {
    long long binary, decimal = 0;
    int remainder, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * (long long) pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal = %lld\n", decimal);
    return 0;
}
