/*
 * Day 29 (26/10/2026) - Program 57
 * Addition Using Function
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 12 8
 *   Sum = 20
 */

#include <stdio.h>

// function that takes two numbers and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = add(x, y);
    printf("Sum = %d\n", result);

    return 0;
}
