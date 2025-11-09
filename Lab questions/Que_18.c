#include <stdio.h>

int main() {
    // WAP to find the reverse of a number.
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;            // get the last digit
        reverse = reverse * 10 + remainder;  // build the reverse
        num = num / 10;                    // remove the last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
