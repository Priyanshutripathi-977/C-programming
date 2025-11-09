#include <stdio.h>

int main() { 
    //WAP to print the sum of all numbers up to a given number.
    int num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("The sum of all numbers up to %d is: %d\n", num, sum);

    return 0;
}
