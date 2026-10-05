/*
 * Day 79 (15/12/2026) - Program 158
 * Convert Fahrenheit to Celsius
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter temperature in Fahrenheit: 98.6
 *   Celsius = 37.00
 */

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius = %.2f\n", celsius);

    return 0;
}
