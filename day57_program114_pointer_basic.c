/*
 * Day 57 (23/11/2026) - Program 114
 * Basic Pointer Declaration and Use
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a number: 25
 *   Value using variable = 25
 *   Value using pointer = 25
 */

#include <stdio.h>

int main() {
    int number, *ptr;

    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number;  // ptr now stores the address of number

    printf("Value using variable = %d\n", number);
    printf("Value using pointer = %d\n", *ptr);
    // Note: a variable's memory address (printed with %p) is different
    // every time you run the program, so it is not shown here.

    return 0;
}
