#include <stdio.h>

int main() {
     //WAP to print sum of even and odd numbers from 1 to N numbers.
    int num;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", num, even_sum);
    printf("Sum of odd numbers from 1 to %d = %d\n", num, odd_sum);

    return 0;
}
