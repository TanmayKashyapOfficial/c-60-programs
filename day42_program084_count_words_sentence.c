/*
 * Day 42 (08/11/2026) - Program 84
 * Count Words in a Sentence
 * Name: Tanmay Kashyap
 *
 * Sample Run:
 *   Enter a sentence: I am learning C programming
 *   Number of words = 5
 */

#include <stdio.h>

int main() {
    char sentence[200];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0') {
            wordCount++;
        }
    }
    wordCount++;  // last word has no space after it

    printf("Number of words = %d\n", wordCount);
    return 0;
}
