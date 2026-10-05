/*
 * Day 54 (20/11/2026) - Program 108
 * Array of Structures (Multiple Students)
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter number of students: 2
 *   Enter name and marks of student 1: Asha 90
 *   Enter name and marks of student 2: Ravi 80
 *
 *   Student Details:
 *   Asha - 90 marks
 *   Ravi - 80 marks
 */

#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("%s - %d marks\n", students[i].name, students[i].marks);
    }

    return 0;
}
