/*
 * Day 55 (21/11/2026) - Program 110
 * Nested Structure (Student Inside College)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter student name: Tanmay
 *   Enter college name: ABC College
 *   Tanmay studies at ABC
 */

#include <stdio.h>

struct College {
    char collegeName[50];
};

struct Student {
    char name[50];
    struct College college;  // structure inside a structure
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter college name: ");
    scanf("%s", s1.college.collegeName);

    printf("%s studies at %s\n", s1.name, s1.college.collegeName);
    return 0;
}
