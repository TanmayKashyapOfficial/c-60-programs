/*
 * Day 60 (26/11/2026) - Program 120
 * Double Pointer (Pointer to Pointer)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 50
 *   Value = 50
 *   Value using ptr = 50
 *   Value using doublePtr = 50
 */

#include <stdio.h>

int main() {
    int number, *ptr, **doublePtr;

    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number;
    doublePtr = &ptr;  // pointer that stores the address of another pointer

    printf("Value = %d\n", number);
    printf("Value using ptr = %d\n", *ptr);
    printf("Value using doublePtr = %d\n", **doublePtr);

    return 0;
}
