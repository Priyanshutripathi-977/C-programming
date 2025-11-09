#include <stdio.h>

/*WAP a program to print the following pattern:
            1
         1   1
      1    2    1
    1   3     3    1
  1   4    6    4   1
1   5   10   10  5   1*/
// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate nCr
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows = 6;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++)
            printf("   "); // 3 spaces for alignment

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
