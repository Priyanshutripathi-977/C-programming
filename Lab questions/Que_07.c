#include <stdio.h>
int main()
{
// to find greatest of three numbers.
int firstNum,secondNum,thirdNum;

printf("enter the value of firstNum:");
scanf("%d",& firstNum);

printf("enter the value of secondNum:");
scanf("%d",& secondNum);

printf("enter the value of thirdNum:");
scanf("%d",& thirdNum);

if (firstNum>=secondNum && firstNum>=thirdNum)
{
    printf("first Number is greatest");
}
else if (secondNum>=firstNum && secondNum>=thirdNum)
{
   printf("second Number is greatest"); 
}
else
{
  printf("third Number is greatest");  
}
return 0;
}