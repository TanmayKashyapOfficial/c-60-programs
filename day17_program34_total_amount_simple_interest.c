/*
 * Day 17 (14/10/2026) - Program 34
 * Total Amount After Simple Interest
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter principal, rate and time: 1000 5 2
 *   Simple Interest = 100.00
 *   Total Amount = 1100.00
 */

#include <stdio.h>

int main() {
    double p, r, t, simpleInterest, amount;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    simpleInterest = (p * r * t) / 100.0;
    amount = p + simpleInterest;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
