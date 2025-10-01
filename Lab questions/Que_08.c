#include <stdio.h>
int main()
{
// to finds whether a given number is even or odd.
int n;//n is the number.

printf("enter the number n:\n");
scanf("%d", &n);
if (n%2==0)
{
  printf("given number is even\n");
}
else
{
  printf("given number is odd\n");
}
return 0;
}