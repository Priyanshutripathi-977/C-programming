#include <stdio.h>

int main() {
    //WAP to print the Fibonacci series.
    int num;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= num; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
