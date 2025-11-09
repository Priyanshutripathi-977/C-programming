#include <stdio.h>

int main() {
    // WAP to convert binary number into decimal number and vice versa.
    int choice;
    printf("Choose an option:\n1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary to Decimal
        long long binary;
        int decimal = 0, base = 1, remainder;

        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        long long temp = binary;
        while (temp != 0) {
            remainder = temp % 10;
            decimal += remainder * base;
            base *= 2;
            temp /= 10;
        }

        printf("Decimal equivalent: %d\n", decimal);

    } else if (choice == 2) {
        // Decimal to Binary
        int decimal;
        int binary[32]; // assuming 32-bit integer
        int i = 0;

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        int temp = decimal;
        while (temp != 0) {
            binary[i] = temp % 2;
            temp /= 2;
            i++;
        }

        printf("Binary equivalent: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
