#include <stdio.h>
int main() {

// to check whether the two numbers entered by the user are equal or not.
int firstNum,secondNum;

printf("enter the value of firstNum:");
scanf("%d",& firstNum);

printf("enter the value of secondNum:");
scanf("%d",& secondNum);

if (firstNum==secondNum)
{
    printf("equal");
}
else
{
printf("not equal");
}

return 0;
}