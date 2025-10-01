#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    float percentage;

    // Input marks of 5 subjects
    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &s4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &s5);

    // Calculate percentage
    percentage = (s1 + s2 + s3 + s4 + s5) / 5;

    // Print percentage
    printf("Percentage = %f\n", percentage);

    // Decide grade
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade = A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade = B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("Grade = C\n");
    } else {
        printf("Grade = D\n");
    }

    return 0;
}