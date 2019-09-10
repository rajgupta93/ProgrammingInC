#include <stdio.h>

double add(double num1, double num2)
{
  return num1 + num2;
}

double subtract(double num1, double num2)
{
  return num1 - num2;
}

double multiply(double num1, double num2)
{
  return num1 * num2;
}

int main()
{
  int num1 = 34;
  int num2 = 56;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  double sum = add(3, 13);
  double sub = subtract(num2, num1);
  double mul = multiply(num1, 5);

  printf("Summation of given numbers: %lf \n", sum);
  printf("Subtraction of given numbers: %lf \n", sub);
  printf("Multiplication of given numbers: %lf \n", mul);
  return 0;
}