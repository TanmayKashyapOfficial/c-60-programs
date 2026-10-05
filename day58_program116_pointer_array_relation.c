/*
 * Day 58 (24/11/2026) - Program 116
 * Pointer and Array Relationship
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   arr[0] = 10, *(ptr+0) = 10
 *   arr[1] = 20, *(ptr+1) = 20
 *   arr[2] = 30, *(ptr+2) = 30
 *   arr[3] = 40, *(ptr+3) = 40
 *   arr[4] = 50, *(ptr+4) = 50
 */

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // arr itself is the address of arr[0]
    int i;

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr+%d) = %d\n", i, arr[i], i, *(ptr + i));
    }

    return 0;
}
