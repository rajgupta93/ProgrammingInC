#include <stdio.h>

int main()
{

  int number;
  int number1;
  int number2;
  int sum;

  printf("Enter first number: ");
  scanf("%d", &number);

  printf("Enter second number: ");
  scanf("%d", &number1);

  printf("Enter third number: ");
  scanf("%d", &number2);

  sum = number + number1 + number2;

  printf("Summation of numbers : %d \n", sum);

  return 0;
}
