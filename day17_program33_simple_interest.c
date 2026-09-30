/*
 * Day 17 (14/10/2026) - Program 33
 * Simple Interest
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter principal, rate and time: 1000 5 2
 *   Simple Interest = 100.00
 */

#include <stdio.h>

int main() {
    double p, r, t, simpleInterest;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    simpleInterest = (p * r * t) / 100.0;
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
