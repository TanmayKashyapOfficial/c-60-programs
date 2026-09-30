/*
 * Day 18 (15/10/2026) - Program 35
 * Compound Interest
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter principal, rate and time: 1000 5 2
 *   Compound Amount = 1102.50
 *   Compound Interest = 102.50
 */

// Compile this program with -lm because it uses pow():
// gcc <file>.c -o <name>.exe -lm

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, amount, compoundInterest;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    amount = p * pow(1.0 + r / 100.0, t);
    compoundInterest = amount - p;

    printf("Compound Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
