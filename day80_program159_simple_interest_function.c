/*
 * Day 80 (16/12/2026) - Program 159
 * Calculate Simple Interest Using a Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter principal, rate and time: 1000 5 2
 *   Simple Interest = 100.00
 */

#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100.0f;
}

int main() {
    float p, r, t;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f\n", simpleInterest(p, r, t));
    return 0;
}
