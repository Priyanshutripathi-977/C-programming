#include <stdio.h>

int main() { 
    //WAP to find the factorial of a given number.
    int num;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}
