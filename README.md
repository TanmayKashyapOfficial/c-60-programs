# C Programming - 60 Beginner Programs (Tanmay Kashyap)

**Name:** Tanmay Kashyap
**Course:** B.Tech CSE (Artificial Intelligence) - Beginner
**Language:** C
**Total Programs:** 60
**Schedule:** 2 programs per day for 30 days (28/09/2026 to 27/10/2026)

## What is in this folder

60 separate `.c` files, written in the same simple style as the class notebook:
`#include <stdio.h>`, `int main() { ... return 0; }`, `printf`, `scanf`, if-else, switch, loops and simple functions.

Every file is a **complete program on its own** (it has its own `main()`), so you can:
1. Read it, write it in your notebook,
2. Compile and run just that one file in VS Code,
3. Upload it to GitHub.

File names show the day and program number, for example `day05_program09_area_of_rectangle.c`.
The comment at the top of every file has the day, date, title and a **Sample Run** (the exact output you should get).

## How to run one program in VS Code

1. Open this folder in VS Code (File > Open Folder).
2. Open a terminal (Ctrl + `). It opens inside the folder.
3. Compile and run (PowerShell, Windows):

```
gcc day01_program01_print_name.c -o program01.exe; .\program01.exe
```

Pattern: `gcc <file name>.c -o <any name>.exe; .\<any name>.exe`

Only Program 35 (Compound Interest) needs the math library, so add `-lm`:

```
gcc day18_program35_compound_interest.c -o program35.exe -lm; .\program35.exe
```

On Linux / macOS use: `gcc file.c -o program01 && ./program01`

Tip: type the first letters of the file name and press **Tab** - PowerShell completes the name for you.

## Uploading to GitHub

The `.gitignore` file in this folder already ignores compiled `.exe` files, so only your `.c` files and this README get uploaded. In GitHub Desktop: File > Add Local Repository > choose this folder > Commit > Publish repository.

## 30-Day Schedule

| Day | Date | Program A | Program B |
|-----|------|-----------|-----------|
| 1 | 28/09/2026 | 1. Print Name | 2. Print Three Lines |
| 2 | 29/09/2026 | 3. Read and Display Age | 4. Read Two Numbers |
| 3 | 30/09/2026 | 5. Add Two Numbers | 6. Subtract Two Numbers |
| 4 | 01/10/2026 | 7. Multiplication of Two Numbers | 8. Quotient and Remainder |
| 5 | 02/10/2026 | 9. Area of Rectangle | 10. Perimeter of Rectangle |
| 6 | 03/10/2026 | 11. Celsius to Fahrenheit | 12. Average of Three Numbers |
| 7 | 04/10/2026 | 13. Even or Odd | 14. Divisible by 5 |
| 8 | 05/10/2026 | 15. Positive, Negative or Zero | 16. Voting Age |
| 9 | 06/10/2026 | 17. Larger of Two Numbers | 18. Smaller of Two Numbers |
| 10 | 07/10/2026 | 19. Largest of Three Numbers | 20. Smallest of Three Numbers |
| 11 | 08/10/2026 | 21. Multiple of 3 and 5 | 22. Number Between 10 and 50 |
| 12 | 09/10/2026 | 23. Nested if Comparison | 24. Positive Even Number |
| 13 | 10/10/2026 | 25. Positive/Negative Using Ternary Operator | 26. Even/Odd Using Ternary Operator |
| 14 | 11/10/2026 | 27. Greater Number Using Ternary Operator | 28. Absolute Value Using Ternary Operator |
| 15 | 12/10/2026 | 29. Bitwise AND | 30. Bitwise OR |
| 16 | 13/10/2026 | 31. Bitwise XOR | 32. Bitwise NOT |
| 17 | 14/10/2026 | 33. Simple Interest | 34. Total Amount After Simple Interest |
| 18 | 15/10/2026 | 35. Compound Interest | 36. Square and Cube |
| 19 | 16/10/2026 | 37. Calculator Using switch | 38. Day Number Using switch |
| 20 | 17/10/2026 | 39. Month Number Using switch | 40. Vowel or Consonant Using switch |
| 21 | 18/10/2026 | 41. Print Numbers 1 to 5 | 42. Print Even Numbers 1 to 10 |
| 22 | 19/10/2026 | 43. Sum of Numbers 1 to 10 | 44. Multiplication Table |
| 23 | 20/10/2026 | 45. Sum of Even Numbers | 46. Count Down 10 to 1 |
| 24 | 21/10/2026 | 47. Factorial | 48. Sum of Odd Numbers |
| 25 | 22/10/2026 | 49. Reverse a Number | 50. Count Digits |
| 26 | 23/10/2026 | 51. Sum of Digits | 52. Palindrome Number |
| 27 | 24/10/2026 | 53. Maximum of Five Numbers | 54. Minimum of Five Numbers |
| 28 | 25/10/2026 | 55. Percentage of Five Subjects | 56. Grade from Percentage |
| 29 | 26/10/2026 | 57. Addition Using Function | 58. Square Using Function |
| 30 | 27/10/2026 | 59. Even/Odd Using Function | 60. Largest of Three Using Function |
