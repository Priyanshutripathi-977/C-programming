#include <stdio.h>
int main()
{
//  to tell whether a given year is leap year or not.
// Leap year conditions:
    // 1. Divisible by 400 → leap year
    // 2. Divisible by 4 but not by 100 → leap year
int year;

printf("enter a year:");
scanf("%d", &year);

 if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
 printf("%d is a Leap Year.\n", year);
 } else {
 printf("%d is NOT a Leap Year.\n", year);
 }
return 0;
}