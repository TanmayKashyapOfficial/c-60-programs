/*
 * Day 53 (19/11/2026) - Program 106
 * Basic Structure to Store Student Details
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter name: Tanmay
 *   Enter age: 18
 *   Enter marks: 85.5
 *   Name = Tanmay
 *   Age = 18
 *   Marks = 85.50
 */

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}
