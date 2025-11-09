#include <stdio.h>
#include <math.h>

int main() {
    // WAP to print Armstrong numbers from 1 to 100.
    int num, temp, remainder, sum;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for (num = 1; num <= 100; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;             // get last digit
            sum += remainder * remainder * remainder; // cube of digit
            temp = temp / 10;                  // remove last digit
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
