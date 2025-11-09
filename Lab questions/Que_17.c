#include <stdio.h>

int main() {
    // WAP to find the sum of digits of the entered number.
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;   // get last digit
        sum += remainder;     // add it to sum
        num = num / 10;           // remove last digit
    }

    printf("Sum of digits of number is = %d\n", sum);

    return 0;
}
