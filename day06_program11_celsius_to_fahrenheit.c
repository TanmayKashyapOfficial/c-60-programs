/*
 * Day 6 (03/10/2026) - Program 11
 * Celsius to Fahrenheit
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter temperature in Celsius: 37
 *   Fahrenheit = 98.60
 */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}
