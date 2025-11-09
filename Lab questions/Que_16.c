#include <stdio.h>

int main() {
    // WAP to check whether the entered number is prime or not.
    int n;
    int isPrime = 1; // assume number is prime

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // numbers <= 1 are not prime.
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
