#include <stdio.h>
int main()
{
int firstNum,secondNum,thirdNum;

printf("enter the value of firstNum:");
scanf("%d",& firstNum);

printf("enter the value of secondNum:");
scanf("%d",& secondNum);

thirdNum=firstNum;
firstNum=secondNum;
secondNum=thirdNum;

printf("the value of firstNum and secondNum is %d,%d",firstNum,secondNum);
return 0;
}