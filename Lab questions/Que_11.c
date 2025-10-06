#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation using switch
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed!\n");
                return 0;
            }
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}