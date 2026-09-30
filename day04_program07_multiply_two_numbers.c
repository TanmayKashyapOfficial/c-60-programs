/*
 * Day 4 (01/10/2026) - Program 7
 * Multiplication of Two Numbers
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter two numbers: 6 7
 *   Product = 42
 */

#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    product = a * b;
    printf("Product = %d\n", product);
    return 0;
}
