/*
 * Day 63 (29/11/2026) - Program 125
 * LCM of Two Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 4 6
 *   LCM = 12
 */

#include <stdio.h>

int main() {
    int a, b, larger, lcm = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;

    while (1) {
        if (larger % a == 0 && larger % b == 0) {
            lcm = larger;
            break;
        }
        larger++;
    }

    printf("LCM = %d\n", lcm);
    return 0;
}
