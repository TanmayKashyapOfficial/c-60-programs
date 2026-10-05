/*
 * Day 59 (25/11/2026) - Program 117
 * Pointer Arithmetic
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   *ptr = 10
 *   After ptr++, *ptr = 20
 *   After ptr+=2, *ptr = 40
 */

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("*ptr = %d\n", *ptr);
    ptr++;
    printf("After ptr++, *ptr = %d\n", *ptr);
    ptr = ptr + 2;
    printf("After ptr+=2, *ptr = %d\n", *ptr);

    return 0;
}
